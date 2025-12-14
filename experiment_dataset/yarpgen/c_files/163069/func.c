/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163069
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
    var_14 = ((/* implicit */unsigned int) -1782788054);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_1] = ((((/* implicit */int) arr_2 [5LL] [i_1] [i_1 - 1])) | (((/* implicit */int) arr_3 [20U] [(signed char)17] [i_1 - 1])));
            var_15 = ((/* implicit */long long int) ((unsigned short) arr_3 [2LL] [i_1 + 1] [i_1 - 1]));
            var_16 = ((/* implicit */int) arr_1 [i_0]);
        }
        arr_5 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)24576)) ? ((~(4294967275U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-24577)) + (1073741823)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 3; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((arr_8 [i_2] [i_3 - 1] [i_3]) / (((/* implicit */int) arr_2 [i_3] [i_4] [i_5 - 3])))) > (max(((~(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_5 - 1] [i_6] [i_6] [i_5 - 3])))), (((/* implicit */int) ((10ULL) > (((/* implicit */unsigned long long int) -1LL)))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */int) (short)-6894)) / (-468438777))), (((/* implicit */int) (short)24562)))));
                            arr_19 [i_2] [i_3 - 1] [i_4] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) > (((/* implicit */int) (_Bool)1))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((((/* implicit */int) max(((short)24576), ((short)24594)))) & (max((var_7), (((/* implicit */int) (short)6899)))))))))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (-(((3639408729U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) (short)24554))))), (((/* implicit */unsigned int) arr_10 [i_4] [i_3] [i_5 + 1] [i_5])))))))));
                        }
                        arr_20 [(unsigned short)8] [i_3] [i_2] = ((/* implicit */unsigned int) ((int) min((((((/* implicit */int) (short)6878)) / (((/* implicit */int) (short)-24580)))), (((((/* implicit */_Bool) 2143289344)) ? (((/* implicit */int) (short)24554)) : (((/* implicit */int) (short)-6910)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_5 + 1])))));
                        var_22 = ((/* implicit */short) ((unsigned int) (short)-24555));
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 2; i_8 < 17; i_8 += 4) 
                        {
                            arr_25 [i_2] [i_7] [i_4] [i_4] [(signed char)8] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_16 [i_2] [i_3 - 1] [i_2] [i_3] [i_3] [i_8 - 2])), ((short)24554))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (111029131U)))));
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)24554)) < (((/* implicit */int) var_10))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [(_Bool)1] [i_3] [i_2] [i_3] [i_3] [5ULL] [i_3])), ((unsigned short)25259)))))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (short)6895)) ^ (((/* implicit */int) (short)24566)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 1) 
                        {
                            var_25 ^= (~(((/* implicit */int) arr_18 [i_2] [i_4])));
                            arr_28 [i_2] [3] [i_2] [i_2] [i_2] = ((((/* implicit */int) arr_14 [i_9] [i_2] [i_2] [i_3 - 1])) - (((/* implicit */int) arr_14 [i_9] [i_2] [i_2] [i_3 - 1])));
                        }
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (short)-5484))));
                    }
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-24571)), ((~(((/* implicit */int) (_Bool)1))))))) ? (min((min((((/* implicit */unsigned long long int) 1306341078)), (arr_22 [i_2] [i_3] [i_3] [i_2]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24552))) / (arr_22 [(unsigned short)15] [i_2] [i_3] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)366)) : (((/* implicit */int) (short)24560)))))), (((int) min((((/* implicit */unsigned long long int) var_6)), (5716090845564173550ULL))))));
                        var_29 = ((/* implicit */int) var_10);
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_16 [i_2] [i_2] [i_11 - 1] [i_10] [i_10] [i_2]))));
                            var_31 = ((int) ((((int) (short)-24548)) & (((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_2] [i_10]))));
                            arr_34 [1] [i_4] [i_2] = ((/* implicit */unsigned short) (signed char)127);
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 4) 
        {
            for (short i_13 = 4; i_13 < 17; i_13 += 3) 
            {
                {
                    var_32 = ((/* implicit */_Bool) (short)4609);
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 17; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            {
                                arr_46 [i_2] [i_2] [i_13] [i_2] [i_14 - 1] [i_15] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)-24570)), (var_0)))), (((((arr_7 [i_14 + 1]) + (2147483647))) >> (((arr_7 [i_14 + 1]) + (1525967204)))))));
                                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) max((min(((-(arr_15 [i_15]))), (((/* implicit */long long int) min((-1555814747), (((/* implicit */int) (signed char)69))))))), (((/* implicit */long long int) max((arr_32 [i_2] [i_2] [i_15]), (arr_32 [i_2] [i_14 - 1] [i_15])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned short) (~(min((1098381491679215902ULL), (((/* implicit */unsigned long long int) -895944374))))));
    }
}
