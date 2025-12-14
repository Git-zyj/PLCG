/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182672
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
    var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_3)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)))))) ? (var_4) : (((/* implicit */unsigned long long int) var_14)));
    var_18 = ((/* implicit */unsigned long long int) var_14);
    var_19 = ((/* implicit */unsigned long long int) (-(1720946573U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) 1284427886)) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_3 + 1] [i_3] [i_4 - 2])) : (((/* implicit */int) (unsigned char)255)))), (min((((/* implicit */int) arr_6 [i_1 - 2] [i_3 + 1] [i_3] [i_4 - 2])), (-1284427892))));
                                arr_13 [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_6), (var_10))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) var_1))))), (min((var_7), (var_12)))))));
                            }
                        } 
                    } 
                    var_20 = (-(arr_3 [i_0]));
                    arr_14 [i_0] [i_0] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))), (min((((/* implicit */unsigned long long int) 1284427887)), (arr_11 [i_1 + 2] [i_1 + 4] [i_2 + 2]))));
                    arr_15 [i_0] [i_2] [i_0] = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) -1284427888)) : (var_16)))) : (((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (11180771145434160674ULL))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12))))));
                    arr_16 [i_1] [i_0] = (-(min((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((unsigned long long int) arr_1 [i_2] [i_2])))));
                }
            } 
        } 
    } 
}
