/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183446
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
    var_11 = var_5;
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))), (min(((-(144115188075855360ULL))), (((/* implicit */unsigned long long int) var_9))))));
    var_13 &= ((/* implicit */long long int) ((-1590195807) == (((/* implicit */int) (_Bool)0))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) -1590195790)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2 - 1] [i_4 - 4] [i_4]))) : (arr_3 [i_2 - 3] [i_1]))), (((/* implicit */long long int) arr_5 [i_0]))));
                                var_15 -= ((/* implicit */unsigned short) arr_3 [i_1] [i_4]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_4) != (((/* implicit */int) var_9)))) ? (min((((/* implicit */unsigned int) var_7)), (1975828444U))) : (arr_8 [i_1] [i_1] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
