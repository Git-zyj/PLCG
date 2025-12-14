/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117515
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1077605269400518893LL))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))));
    var_19 = ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))) ? ((+(max((((/* implicit */long long int) var_6)), (var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((8353115884091100117LL), (((/* implicit */long long int) (unsigned char)185)))) <= (((/* implicit */long long int) 32597337)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(arr_3 [i_0]))), (((/* implicit */unsigned int) min((var_5), (var_0))))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((32597339) / (((/* implicit */int) arr_5 [i_0] [i_1 + 3] [i_0])))) == (((/* implicit */int) max((arr_4 [11ULL] [i_0] [i_0] [(unsigned short)2]), ((signed char)-125))))))))));
                    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-26))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-37)), (arr_5 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0 + 1]) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_1 [i_0])))))));
                    var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1077605269400518923LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) & (((((/* implicit */_Bool) -32597349)) ? (((/* implicit */unsigned long long int) 2114708378)) : (8752164142026879393ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned char) (-(max((arr_6 [i_1 + 3] [i_4 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) arr_7 [(unsigned char)8] [(unsigned char)8] [i_3] [i_4])))))))));
                                arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [(signed char)2] [i_4 - 2] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) arr_0 [i_0])) == (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_6 [i_0 + 1] [i_3]) : (arr_6 [i_4] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_12))))))));
}
