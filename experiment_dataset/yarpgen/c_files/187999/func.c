/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187999
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_13);
                                var_20 ^= arr_10 [(_Bool)1];
                                var_21 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [(unsigned short)4] [i_3] [(unsigned char)13]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) var_11);
                    var_23 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))), (((/* implicit */int) min((arr_9 [i_0] [i_1] [i_0]), (arr_5 [i_0] [(unsigned short)15] [i_2]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_8))));
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((max(((+(3355594382U))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) << (((min(((-(var_16))), (var_14))) + (271272611))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                var_26 -= ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_7 [i_5 + 1])))));
                var_27 = max((547799976U), (726506014U));
                var_28 = ((/* implicit */signed char) (+(var_14)));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_5 - 1])) : (((/* implicit */int) arr_16 [i_5])))))) ? (arr_8 [i_5]) : (((/* implicit */int) max((arr_2 [i_5]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [9ULL] [i_6])))))))))))));
                arr_20 [i_5] [i_6] = ((/* implicit */unsigned int) arr_1 [i_5]);
            }
        } 
    } 
}
