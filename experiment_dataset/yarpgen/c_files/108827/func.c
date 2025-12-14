/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108827
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
    var_12 = ((/* implicit */short) ((unsigned long long int) max(((unsigned short)36748), (min(((unsigned short)36759), ((unsigned short)36759))))));
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */short) ((var_11) || (((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */signed char) (+(((/* implicit */int) ((short) (!(var_9)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28777))))) && (((/* implicit */_Bool) (unsigned short)28776))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (+(((unsigned int) (signed char)(-127 - 1)))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36726)) ? (((/* implicit */int) (unsigned short)36748)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (max((var_2), (((/* implicit */unsigned int) var_0)))) : (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
}
