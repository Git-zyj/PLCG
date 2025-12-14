/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182998
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
    var_15 = ((/* implicit */_Bool) 915782929);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_2))) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))), (min((max((((/* implicit */unsigned int) var_14)), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) var_6))))))));
                            var_17 *= ((/* implicit */signed char) (~(265613166U)));
                            var_18 = ((/* implicit */unsigned char) var_13);
                            var_19 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) 1003172232))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((var_7) < (7060945529030819449ULL))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (-(var_8)));
            }
        } 
    } 
    var_21 = ((/* implicit */int) 1110247860U);
}
