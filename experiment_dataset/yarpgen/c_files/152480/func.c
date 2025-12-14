/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152480
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (7U))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967289U)) == (-6180700755439974005LL))))));
        arr_2 [12LL] = ((/* implicit */long long int) min((((1902361473) + (((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) (signed char)(-127 - 1)))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */int) arr_1 [i_0 + 1])), ((~(((/* implicit */int) arr_0 [i_0 + 1])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0 + 1] [10U] [i_2] &= ((/* implicit */unsigned int) max((-7559078644811091254LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) > (max((((/* implicit */long long int) 1131896638U)), ((-9223372036854775807LL - 1LL)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [7LL] [i_3] [i_2] [7LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (4294967295U) : (((/* implicit */unsigned int) -1902361475)))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])) / (arr_10 [i_0] [i_0])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_16 [i_0] [i_0] [i_4]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_19 = ((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2])) | (var_7));
                            var_20 = ((/* implicit */signed char) arr_18 [18LL] [18LL] [i_4] [i_5]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [6ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)127)), (((-6180700755439974001LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_23 [i_6] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_2]))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_0 + 2] [i_7] [(_Bool)1] [10LL] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-119)))))))));
                            var_21 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (min((((/* implicit */unsigned long long int) (short)9032)), (18446744073709551615ULL))));
                            var_22 = ((/* implicit */signed char) arr_10 [i_2] [i_7]);
                        }
                        var_23 = arr_15 [i_0] [i_4];
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_8] [i_1] [i_2] [14ULL] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        arr_32 [i_8] [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 + 1] [i_8 - 1])))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
    {
        arr_35 [i_9] [i_9] |= ((/* implicit */short) arr_11 [i_9] [4U] [i_9]);
        var_25 &= ((/* implicit */signed char) (-(((/* implicit */int) max((arr_33 [i_9 - 1]), (((9223372036854775807LL) == (var_12))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_14);
    var_27 = ((/* implicit */long long int) max((1814725444U), (((/* implicit */unsigned int) (unsigned char)245))));
}
