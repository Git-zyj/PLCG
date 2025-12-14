/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15400
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
    var_10 += var_8;
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)8)))) >= (((/* implicit */int) (unsigned short)4088))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 = arr_10 [i_1];
                                var_14 = ((((((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_3 - 1] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_3 - 1] [i_0 - 2])))) + (2147483647))) >> (((((((((/* implicit */int) arr_0 [i_3 + 1] [i_0 - 3])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_3 + 1] [i_0 - 3])) + (97))) - (15))))) - (2147483549))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
}
