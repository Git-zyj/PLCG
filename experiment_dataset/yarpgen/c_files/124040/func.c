/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124040
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 += max(((unsigned short)16260), ((unsigned short)16260));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((min((arr_0 [i_0 - 1] [i_1]), (arr_0 [i_0 - 1] [i_1]))), (arr_2 [i_0 + 3]))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_1] [i_0 + 2])))) : (((/* implicit */int) (unsigned short)49298)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_2] [i_0] [i_2] [i_2 + 1]))));
                                arr_12 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)0), ((unsigned short)49275))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] = max((((((/* implicit */_Bool) (unsigned short)16260)) ? (4398046511103LL) : (((/* implicit */long long int) -600728403)))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) (~((((+(-355330134))) & (((/* implicit */int) var_11))))));
    var_18 = ((/* implicit */_Bool) min((8951179276251888382LL), (9223372036854775801LL)));
    var_19 = ((/* implicit */unsigned int) ((unsigned short) var_10));
}
