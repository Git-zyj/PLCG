/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136441
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
    var_17 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (var_14))) * (((/* implicit */int) ((short) var_10))))));
    var_18 += ((/* implicit */signed char) ((unsigned short) var_12));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((long long int) ((short) ((int) arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] [12])))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 453884971071034936LL)))) / (1073741823U)));
                var_22 = ((/* implicit */unsigned int) ((unsigned long long int) max((((((/* implicit */_Bool) 2271417036415055390LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 1073741823U)))), (((/* implicit */unsigned long long int) (~(arr_8 [i_0] [i_0] [8LL] [i_1 - 3])))))));
            }
        } 
    } 
}
