/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103661
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
    var_17 = ((/* implicit */unsigned short) var_10);
    var_18 = ((/* implicit */int) var_16);
    var_19 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) var_3);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (var_5))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) max((max((var_6), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)15)), ((unsigned short)3))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) max((var_2), (((/* implicit */int) var_13))))))))));
                            var_22 = ((/* implicit */unsigned char) max((max((max((var_9), (var_2))), (((/* implicit */int) var_16)))), (max((((/* implicit */int) (signed char)-121)), (422190339)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
}
