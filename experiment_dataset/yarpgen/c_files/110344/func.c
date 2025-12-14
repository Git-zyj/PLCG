/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110344
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-((+(var_8)))));
                arr_6 [i_0] [i_1] [(unsigned short)12] = ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))) : (arr_4 [i_0 + 1] [i_0 - 1])));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_11)))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)2] [i_1]))) % (max((var_3), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [0] &= ((/* implicit */int) var_15);
                        }
                    } 
                } 
                arr_15 [i_0] [15U] = ((/* implicit */signed char) ((((/* implicit */int) ((10894403944531625548ULL) >= (10894403944531625548ULL)))) - (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 1]))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7))))))), (min(((~(var_12))), (min((7552340129177926067ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))))));
}
