/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171749
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) (-((+(var_16)))))) ? (((/* implicit */int) ((signed char) var_13))) : (min((((/* implicit */int) (signed char)98)), (100663296)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) ((int) (unsigned char)223));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [8ULL] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (5372591278514036061ULL)))) ? (arr_8 [i_4 + 1] [i_0 - 2]) : (min((((/* implicit */int) var_8)), (-100663296))))));
                                arr_15 [(unsigned short)10] [(unsigned short)10] [i_2] [16ULL] = ((/* implicit */_Bool) -6771297427234576070LL);
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_4 + 2] [i_4 + 1] [i_4 + 1])) ^ (arr_9 [i_0 + 1] [i_4 + 2])))) ? ((~(arr_5 [i_4 + 2] [i_4 - 1] [i_4 + 1]))) : (arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                                var_20 += ((/* implicit */unsigned int) -13LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) ((signed char) min((((((/* implicit */_Bool) (short)-7986)) ? (((/* implicit */int) arr_16 [i_5] [i_5 + 1])) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 514448587U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_21 = (~(((/* implicit */int) arr_19 [i_5 + 3] [i_5 + 1] [i_5 + 3])));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */_Bool) ((short) (unsigned short)33953));
                            arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) ((unsigned short) arr_24 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 - 1]));
                            var_23 = ((/* implicit */long long int) ((unsigned int) arr_23 [22]));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 13074152795195515555ULL)) ? (((/* implicit */int) arr_26 [i_9 + 2] [i_9 + 1] [i_9] [(short)17])) : (((/* implicit */int) (unsigned short)25450))))))));
                        }
                    } 
                } 
            } 
            arr_30 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1154080252U))));
        }
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 6820315749332866885ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) var_15)) << (((var_1) - (1508993488)))))));
        var_27 = ((/* implicit */unsigned char) (+(arr_32 [i_10])));
    }
    for (int i_11 = 3; i_11 < 21; i_11 += 1) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned short) arr_34 [i_11]);
        arr_38 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (-(var_13))))) > (((/* implicit */int) ((_Bool) -100663296)))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (unsigned int i_13 = 1; i_13 < 22; i_13 += 2) 
            {
                {
                    var_28 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)217)), (arr_43 [i_12] [(_Bool)1] [i_12] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)217)))))) : ((~(4294967281U))))), (((/* implicit */unsigned int) var_16))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((3780518709U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23282)))));
                                arr_50 [i_11] = ((/* implicit */_Bool) -5754236958604378137LL);
                                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_11 - 2] [i_13 - 1])) ? (2485823521261426660LL) : (((/* implicit */long long int) arr_41 [i_11] [i_11 - 3])))))));
                                arr_51 [i_11] [i_12] [i_11] [(signed char)11] [i_11] [i_11] [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_11 + 4] [22LL] [(unsigned short)16] [22LL] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11 + 3] [i_13] [i_14] [i_15]))) : (var_11)))) ? (var_9) : (((/* implicit */unsigned int) arr_47 [i_11] [i_12] [i_13] [i_11] [i_12])))) << (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)7986)) / (-1831523527)))) : (arr_32 [i_12])))));
                            }
                        } 
                    } 
                    arr_52 [i_11] [i_11] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))), ((-(arr_48 [i_11]))))), (((/* implicit */unsigned long long int) arr_41 [i_11] [i_12]))));
                    arr_53 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */signed char) ((int) ((int) min((((/* implicit */short) (signed char)76)), ((short)(-32767 - 1))))));
                }
            } 
        } 
    }
}
