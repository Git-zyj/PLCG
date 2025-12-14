/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175568
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) max((max((var_15), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */long long int) (+(((/* implicit */int) var_9))))) / ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) ((signed char) -1120156395))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_3 + 1]))))) ? ((+(arr_8 [i_2] [i_3] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */int) min(((unsigned short)28429), (((/* implicit */unsigned short) var_11))));
                            var_19 = ((/* implicit */int) var_14);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)28429))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
}
