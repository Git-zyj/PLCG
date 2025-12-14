/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119901
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */signed char) ((_Bool) ((int) min((arr_5 [i_1] [i_0] [i_0]), ((unsigned char)133)))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [16] [i_0] &= ((/* implicit */signed char) min((((/* implicit */unsigned int) -1434693757)), (535822336U)));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(7526820484983619734LL))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (((-(var_18))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_2] [i_3])) <= (arr_2 [i_4])))))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) != (3759144972U))))));
                                arr_17 [i_2] [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((signed char) 535822337U))))) ? (min((535822318U), (3759144952U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) (signed char)31)), (var_2)))));
}
