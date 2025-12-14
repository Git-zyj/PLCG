/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130998
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
    var_12 = ((/* implicit */_Bool) -6911150528926771387LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [4] [i_0] [i_3] [i_0 - 1])) || (((/* implicit */_Bool) -7063072635039534364LL)))))));
                            arr_10 [i_1] [i_0] [i_1] [3LL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_2 + 1] [i_0] [(unsigned short)4] [5LL] [(unsigned short)0])) ? (((/* implicit */int) arr_7 [i_0 + 3] [i_1] [i_0] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_0 + 1] [0ULL] [i_0] [5U] [4LL] [i_1]))))), (-3229151019747584335LL)));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_8 [i_0 + 4] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 3])), (min((var_1), (((/* implicit */unsigned long long int) var_8)))))), (((max((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((var_0), (((/* implicit */unsigned int) (_Bool)1)))))) * (((/* implicit */int) var_9))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (min((-7063072635039534364LL), (7063072635039534345LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
