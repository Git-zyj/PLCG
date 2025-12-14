/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129031
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
    var_12 &= ((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (var_1) : (var_10))))))), (var_5)));
    var_13 = ((/* implicit */long long int) (unsigned char)31);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) ((2466342002U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12786)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)128)))))));
                arr_4 [i_0] = ((signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (short)-7151))))), (((((/* implicit */_Bool) (short)12786)) ? (var_3) : (((/* implicit */long long int) 2466342002U))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12777)) ? (arr_7 [i_3] [i_2] [i_1 - 2] [i_0]) : (arr_7 [i_3] [i_2] [i_1 - 1] [i_0])))) / (((((/* implicit */_Bool) min(((unsigned char)230), ((unsigned char)127)))) ? (((/* implicit */long long int) 4294967295U)) : (arr_5 [i_0] [i_2] [i_3])))));
                            arr_11 [(signed char)11] [15] [(signed char)11] [(signed char)11] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 2]))) | (((((/* implicit */_Bool) (signed char)21)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))) - (((long long int) 1240217535U))));
                            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (4114128829U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))) * (max((min((var_1), (((/* implicit */unsigned int) (signed char)0)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (var_1)))))));
                            var_17 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (4294967295U)))))));
}
