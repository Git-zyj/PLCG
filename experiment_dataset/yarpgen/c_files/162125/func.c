/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162125
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
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1810516189)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (var_5) : (var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [(short)8] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((-(2002803880)))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (max((((/* implicit */unsigned long long int) arr_9 [i_2])), (arr_3 [i_2])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) arr_1 [i_2 - 1])))));
                        arr_14 [i_0] [i_0] [(unsigned short)5] [(unsigned char)8] [(unsigned char)8] [(short)0] = ((/* implicit */short) 2147483647);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [4U] [i_2] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)-32752))))));
                            var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 64424509440ULL))));
                            var_21 = ((/* implicit */signed char) var_0);
                        }
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2 + 3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [(signed char)1] [i_2 - 3] [i_3])) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_2 - 3] [3ULL]))));
                    }
                }
            } 
        } 
    } 
}
