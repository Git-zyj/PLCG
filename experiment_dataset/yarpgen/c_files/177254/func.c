/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177254
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
    var_20 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_13)) : (var_3))))) ? (((((((/* implicit */_Bool) -1386832456)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_19)) - (((/* implicit */int) var_19))))) : ((-(42759598693408603LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_4))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_5))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1 + 1])))));
                arr_6 [i_1] = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_10 [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_0] [i_3])), (var_15)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48079)))));
                            var_22 = ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (arr_0 [i_1 + 1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1 - 1] [i_1 + 1] [i_2 + 1] [i_2] [i_2])) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((unsigned long long int) arr_0 [i_0] [i_1 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
