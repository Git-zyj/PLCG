/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126540
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65533))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) 798615239U)))) ? (min(((-(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */int) arr_8 [i_4])) : (var_2))))) : ((-(((/* implicit */int) var_8))))));
                                var_14 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) 3496352043U);
                    var_16 = ((/* implicit */unsigned int) max((var_16), (min((((/* implicit */unsigned int) (_Bool)0)), (3496352057U)))));
                }
            } 
        } 
    } 
}
