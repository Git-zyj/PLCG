/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151893
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) max((arr_9 [i_0] [i_0] [15LL] [i_0] [i_0]), (((/* implicit */unsigned int) -1041593430))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)28270)) : (arr_7 [i_0]))))), (((/* implicit */int) (((-(var_6))) == (67108860U))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) ((var_6) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((+(((/* implicit */int) (unsigned short)0))))))), (((((9) > (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) : (((unsigned long long int) 4294967295U))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((short) var_6));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3424953543U))));
    var_16 &= ((/* implicit */int) min((3424953543U), (4294967276U)));
}
