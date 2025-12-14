/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182637
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
    var_14 = ((/* implicit */unsigned int) ((long long int) var_9));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 1])) ? (3089182842U) : (arr_2 [i_1 + 2] [16]))))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [16LL] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) arr_3 [i_2 + 1] [i_2] [i_2 + 1]);
                            arr_14 [i_0] [i_1] [(_Bool)1] [i_1] [11U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3089182817U) : (3089182842U))))));
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) 1205784478U);
                            arr_16 [4U] [i_1] [4U] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (3089182842U) : (arr_9 [i_0] [i_1])))) || (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_1)))))))), (((int) arr_4 [i_1 + 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_24 [i_5] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_7);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_4 + 1])) ? (((/* implicit */long long int) arr_18 [(unsigned char)10] [i_1 - 1] [i_0])) : (var_2))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 3089182804U)) ? (arr_18 [i_4 + 1] [i_1] [i_0]) : (((/* implicit */int) (signed char)74))))));
                            arr_26 [i_0] [i_1] [i_0] [11] = ((/* implicit */long long int) var_11);
                            arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_23 [i_0] [i_1 - 1] [i_5] [i_5])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */short) (!(var_11)));
}
