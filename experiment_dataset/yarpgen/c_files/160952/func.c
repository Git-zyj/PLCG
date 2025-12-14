/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160952
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (1529108080747812588ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) arr_0 [i_3])))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((int) max((min((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_3])), (4014703562U))), (((/* implicit */unsigned int) ((unsigned char) 280263747U)))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) max((var_16), (arr_0 [i_0])));
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0] [i_1] [i_0 + 1]) : (2147483647))));
                arr_12 [i_0] [(signed char)10] [(signed char)10] |= ((/* implicit */long long int) min((4014703556U), (((/* implicit */unsigned int) (unsigned short)4096))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (~(2103380885)));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-3)))))));
    var_19 = ((/* implicit */short) 280263712U);
}
