/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187902
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
    var_13 = ((/* implicit */int) var_12);
    var_14 += ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
                    var_16 = ((/* implicit */unsigned char) ((unsigned int) ((signed char) (~(((/* implicit */int) (short)16134))))));
                    var_17 &= ((signed char) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) 3445629803U)) : (4398046511103LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1038772699)) ? (((/* implicit */long long int) 3675409582U)) : (var_8))))))) ? (min((arr_0 [i_0 - 3] [i_3 - 1]), (var_6))) : (((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_2 + 1] [i_0 - 3] [i_0 - 3])) ? (arr_5 [i_4 + 1] [i_2 + 2] [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) 1038772714)))))))));
                                arr_10 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_4 + 2] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_3)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) 1038772699)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_0 - 3] [i_0] [i_2 + 2]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_0))) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) % (((/* implicit */long long int) 39093278U))))))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8))))))))));
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
