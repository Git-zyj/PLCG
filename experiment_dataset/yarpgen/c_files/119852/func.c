/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119852
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
    var_12 = ((/* implicit */_Bool) min((var_7), (var_7)));
    var_13 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))) ? (min((1016038342U), (3863170105U))) : (var_8));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [21LL] [i_3] [i_4])) ? (431797205U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                                arr_11 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) min(((short)-7911), ((short)7915))))))) ^ ((~(min((3863170106U), (((/* implicit */unsigned int) var_4))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 2650636338U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((431797185U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4027))))))))))));
            }
        } 
    } 
}
