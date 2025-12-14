/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110161
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) 2892574619U)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-7174711377464259112LL))))))))));
    var_20 = ((/* implicit */short) var_11);
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_5) << (((var_5) - (285590005))))), (var_0)))) ? (((/* implicit */int) ((((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)45972)))) < (((/* implicit */int) var_12))))) : (var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_4 [i_1] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) << (((((/* implicit */int) (short)21773)) - (21773)))))))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21773)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (300364393U)));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) 11606843162722489115ULL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-88))));
                            var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8850519296819056857ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) / (-7127860554612044808LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)18] [(signed char)2] [i_1] [i_3]))) : (7477368491823301207LL))) : (var_14)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_4);
}
