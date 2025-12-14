/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139303
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (min(((unsigned short)65207), (arr_5 [i_4])))))) ? (((long long int) var_10)) : (arr_8 [i_0] [i_0] [i_0])));
                                var_17 = var_11;
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)88)), (var_2))))) | (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (min((max((((/* implicit */long long int) (signed char)35)), (var_5))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)211)) & (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))));
                                arr_14 [(unsigned short)8] [(unsigned short)8] [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_2 + 1] [i_4] [(signed char)5] [i_4] [i_2 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_8 [i_2 + 1] [i_1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_2 - 1] [i_2 + 1] [i_0] [i_4] [i_2] [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) (((+(((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))))))) / (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_0] [i_0]))));
            }
        } 
    } 
}
