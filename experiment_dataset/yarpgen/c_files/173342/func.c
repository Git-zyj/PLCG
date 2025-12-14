/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173342
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (unsigned short)23756))));
                            arr_8 [3ULL] [7U] [11] [(_Bool)0] [i_2] = ((/* implicit */unsigned long long int) var_10);
                            arr_9 [i_2] = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */short) arr_4 [i_4] [4LL] [(_Bool)1] [i_4]);
                    arr_13 [2U] [i_0] [i_0] [(unsigned short)24] &= ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) (short)-8073)) ? (((/* implicit */unsigned int) -281238280)) : (2575303303U)))) - (((/* implicit */int) ((_Bool) ((signed char) arr_1 [(unsigned short)20] [(unsigned short)22]))))));
                    arr_14 [10] [i_4] [22LL] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) -281238280)), (16140901064495857664ULL)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [8ULL] [i_5] [3LL] [15]))))) ? (((/* implicit */unsigned long long int) (~(arr_5 [(_Bool)1] [(_Bool)1] [13] [i_5])))) : (((((/* implicit */_Bool) 2494301852U)) ? (14244506865019972269ULL) : (14244506865019972269ULL)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (4202237208689579347ULL) : (((/* implicit */unsigned long long int) 7937780907861823864LL))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3968)))))));
    var_23 = ((int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 1879527282U))))));
}
