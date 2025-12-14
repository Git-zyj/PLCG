/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119915
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
    var_19 |= ((/* implicit */unsigned short) min((var_14), (((/* implicit */long long int) var_5))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [7] = ((/* implicit */unsigned int) (+(((((_Bool) 8034315082508395345ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((8034315082508395338ULL), (((/* implicit */unsigned long long int) (unsigned short)40655))))))));
        var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (10412428991201156271ULL))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (short)-32765);
                        arr_10 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */signed char) (-(min((arr_1 [i_2 + 2]), (arr_1 [i_2 - 1])))));
                        arr_11 [i_3] [i_1] [i_2] [i_1] = ((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_2]));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), ((+(8034315082508395341ULL)))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                            var_24 = var_5;
                            arr_15 [i_3] = var_11;
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_20 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_0] [16U]);
                            arr_21 [i_3] [(unsigned short)16] [10LL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)110))))) ? (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])), (4294967295U))) : (((min((((/* implicit */unsigned int) var_1)), (4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63963)))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_6] = arr_8 [i_3] [i_1] [i_1] [i_1] [i_1];
                            var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) var_1)), (arr_18 [i_0] [i_1] [(unsigned short)6] [i_1] [i_0] [(signed char)6] [i_1]))), (((/* implicit */long long int) var_6)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        var_26 *= ((/* implicit */unsigned short) var_0);
        var_27 ^= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_6)))) | (-32768)));
        var_28 = ((/* implicit */long long int) var_6);
        /* LoopSeq 1 */
        for (short i_8 = 2; i_8 < 16; i_8 += 2) 
        {
            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [14ULL] [i_8] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7])) : (arr_26 [i_8])))) ? (((/* implicit */int) arr_8 [i_8] [i_7] [(short)0] [i_7 + 1] [(short)0])) : (((/* implicit */int) arr_28 [i_7 - 1] [i_8]))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                {
                    {
                        arr_36 [(unsigned short)14] [(signed char)18] [i_9] [i_10] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-87))));
                        arr_37 [i_7 - 1] [i_8] [i_10] &= var_2;
                    }
                } 
            } 
            arr_38 [i_7] = ((/* implicit */int) 1420676942375617012LL);
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                var_30 = ((/* implicit */signed char) arr_32 [i_7] [i_8 - 1] [i_8]);
                /* LoopSeq 2 */
                for (unsigned int i_12 = 4; i_12 < 17; i_12 += 4) 
                {
                    arr_46 [i_7] [i_7] [4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53815)) >> (((((/* implicit */int) (unsigned short)31665)) - (31645)))));
                    arr_47 [3] [i_7] = ((/* implicit */unsigned short) arr_3 [i_8 - 2]);
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 4; i_13 < 17; i_13 += 1) 
                    {
                        arr_50 [i_7] [i_7] = ((/* implicit */unsigned char) (short)0);
                        arr_51 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_7] [(short)4] [i_7] [i_7 + 1] [i_7 + 1])) ? (arr_22 [14LL] [i_7] [i_7] [i_7] [i_7 + 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_13] [i_13] [i_7 + 1])))));
                        arr_52 [i_7] [i_13] [i_13] [i_7] [12U] [i_13 + 2] [i_8] = ((/* implicit */short) var_10);
                        var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_48 [i_13 + 2] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 2]))));
                        arr_53 [i_7] [i_7] [i_7] [i_11] [i_12] [15LL] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                    }
                }
                for (short i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)17])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)47859)))))));
                    arr_58 [i_7] [0U] = ((((/* implicit */_Bool) arr_8 [i_7] [i_8 - 1] [i_7 + 1] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_8 + 1] [i_7 - 1] [i_7] [i_7]))) : (517254912U));
                    var_33 = ((/* implicit */short) (~((~(((/* implicit */int) arr_41 [16LL] [i_8] [i_7]))))));
                }
            }
        }
    }
    var_34 = ((/* implicit */long long int) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) / (951776967U))), (((/* implicit */unsigned int) min((((/* implicit */short) var_0)), (var_1))))))));
    var_35 = var_9;
}
