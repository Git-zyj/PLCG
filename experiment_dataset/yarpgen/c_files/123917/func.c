/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123917
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [9ULL] [(unsigned char)2] = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (unsigned short)60218)), (max((((/* implicit */unsigned long long int) (signed char)-65)), (arr_8 [i_1 + 1] [i_2] [i_3])))))));
                            var_19 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [(short)8] [i_1 - 1])) > (((/* implicit */int) arr_0 [i_0 + 3] [i_1 + 1])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)60234))));
                arr_12 [i_1] [(unsigned char)13] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-20656)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) min(((unsigned short)20980), ((unsigned short)5318)))), (var_17)));
    var_22 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) > (0ULL))))))));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_3))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5339)) || (((/* implicit */_Bool) ((short) var_11)))));
}
