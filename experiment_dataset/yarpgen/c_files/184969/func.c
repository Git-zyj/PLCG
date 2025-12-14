/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184969
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
    var_18 = (unsigned char)34;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), (arr_3 [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)26))))) : (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_1])))))) : (min((arr_2 [(short)9]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [(unsigned char)8] [i_1] [i_2] [(signed char)6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((min((((/* implicit */unsigned long long int) var_4)), (var_7))) - (99ULL)))))) : (min((min((var_3), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))), (arr_6 [i_3 + 4] [i_0 + 3] [i_0] [i_0 + 1]))))))));
                            arr_8 [i_0] [i_1] [i_2] [i_3 + 4] [i_2] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) (signed char)6)) ? (arr_0 [i_1]) : (var_5))), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)25138))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_17))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)38))))), (((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */unsigned long long int) var_2)) : (524287ULL))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_12))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned long long int) 734394514U))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_2))));
    var_25 = ((/* implicit */unsigned long long int) var_5);
}
