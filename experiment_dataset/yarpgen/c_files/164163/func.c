/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164163
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
    var_16 = ((/* implicit */unsigned int) ((var_4) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_2)))) >= (((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (unsigned short)58549)), (arr_1 [i_0])))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))), (arr_1 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)30)), ((unsigned char)125)))) >= (((/* implicit */int) max((var_2), ((_Bool)1))))))))));
                arr_4 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (unsigned short)2047);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1]);
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) (+(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                                arr_13 [i_4] [i_1] [(signed char)2] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((arr_2 [i_1] [i_0] [i_2]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_1)), ((short)(-32767 - 1)))))) >= (6713747429210503710ULL))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned long long int) 2855400122U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
