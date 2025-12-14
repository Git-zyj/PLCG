/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182799
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_3))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (-1307679141) : (-943824324)))) ? (((((/* implicit */_Bool) -1184303946)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)24637)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_14)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_0] [i_1] [3ULL] = ((/* implicit */unsigned long long int) (-(7995453801599039628LL)));
                                arr_15 [1LL] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)112))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-(var_1)));
}
