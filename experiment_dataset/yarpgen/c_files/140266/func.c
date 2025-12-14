/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140266
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)85)) + (((/* implicit */int) (signed char)83))))), (-2268693258753103891LL))) < (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)65535)))))))));
                            var_12 = ((/* implicit */long long int) arr_8 [i_2] [i_1]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) min((((((/* implicit */int) arr_5 [i_1] [i_1] [14ULL])) >> (((((((/* implicit */int) (unsigned short)8)) * (((/* implicit */int) (unsigned short)65520)))) - (524150))))), ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((unsigned char) var_5))), ((-(var_2))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
}
