/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157472
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)17812)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */long long int) (!((_Bool)1)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)128))));
            arr_5 [i_0] [i_1] [(unsigned char)10] = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [(unsigned char)10] [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) arr_3 [(unsigned char)18] [i_0] [i_0]);
        }
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (arr_3 [(unsigned short)12] [(unsigned short)12] [i_2]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        var_21 *= ((/* implicit */short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)31212)) - (31210)))));
        var_22 |= ((/* implicit */unsigned char) var_7);
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [(unsigned char)12] |= ((/* implicit */unsigned short) (short)-31202);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (short)-31202))));
        arr_13 [i_3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18378))) : (9877979891884084338ULL)));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31200)) ? (((/* implicit */int) (short)-31188)) : (((/* implicit */int) (short)31178))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_13))));
        var_26 = ((/* implicit */long long int) ((2465563024U) ^ (3751311598U)));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    arr_23 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6118)) >> (((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5 - 2] [(short)14]))))) >> ((((~(var_1))) + (6945101032763959589LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_7] [i_8] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1563763991U)) ? (((var_3) ? (((/* implicit */int) arr_26 [i_4] [i_5 + 1] [i_6])) : (((/* implicit */int) arr_19 [i_5] [i_7])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_29 [i_4] [14U] [(unsigned short)16] [(unsigned short)12] [i_8]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256))) != (arr_11 [i_8 + 1]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)23), (((/* implicit */unsigned short) arr_1 [i_4]))))))))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), ((unsigned short)65527)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                        {
                            {
                                var_28 *= ((/* implicit */unsigned char) (_Bool)1);
                                arr_36 [(unsigned char)9] [i_5] [i_6] [19ULL] [i_10] = ((/* implicit */short) -1);
                                var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [(_Bool)1] [i_4])) == (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_11])) % (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) 17203233700171296068ULL)) ? (((/* implicit */unsigned int) ((arr_35 [i_4] [i_5] [i_5] [15] [(short)0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(unsigned short)14]))))) : (((((/* implicit */_Bool) var_15)) ? (arr_33 [(_Bool)0] [i_5] [i_6] [11U] [i_5] [(signed char)18]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71)))))))));
                        var_31 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (short)2046))))) & (((/* implicit */int) (short)31204)))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 - 1] [i_5 + 1]))) : ((-(arr_33 [i_4] [i_4 - 1] [(signed char)15] [i_4 - 1] [i_6] [i_6])))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            for (int i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) (signed char)32);
                        var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_44 [i_4] [i_12] [i_13] [i_14])), (arr_14 [i_4]))) / (((/* implicit */int) var_16))))) - (((((((/* implicit */_Bool) arr_26 [i_12] [i_13] [i_14])) ? (((/* implicit */unsigned long long int) arr_25 [i_4])) : (arr_9 [i_13]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_4] [i_12])))))))));
                    }
                } 
            } 
        } 
    }
}
