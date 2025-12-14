/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180564
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
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (((((((/* implicit */_Bool) 3016677493U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [4]))) : (0ULL))) << (((var_7) - (826912894982815788LL)))))));
                    var_13 = ((/* implicit */unsigned long long int) min((1338318580U), (1278289803U)));
                }
                for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_18 [i_0] [5U] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 3591629540U);
                                arr_19 [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) 1338318581U);
                            }
                        } 
                    } 
                    arr_20 [i_0 + 2] [(unsigned short)19] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_3 - 1] [i_0] [i_0] [i_3 - 1]))))), ((-9223372036854775807LL - 1LL))));
                }
                var_14 = (~(((/* implicit */int) (unsigned char)137)));
                var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)82)) ? (3016677493U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (min((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (var_6)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2956648701U)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
}
