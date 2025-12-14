/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140771
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
    var_12 = ((/* implicit */int) (unsigned short)65535);
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)185), ((unsigned char)202)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)202)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(var_0))))));
                    arr_7 [i_1] = ((/* implicit */short) (-(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_11))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [19U] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned char)195)) : (1833519537))))));
                                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (arr_12 [i_0] [i_0] [i_1 + 1] [i_2 - 1] [i_2] [i_3] [18LL])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [(signed char)14] [i_3] [i_4] [i_1 - 1] [i_1])) ? (arr_12 [i_0] [i_2] [i_2 + 1] [i_3] [i_4] [i_2] [i_0]) : (var_6)))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */long long int) max((((arr_12 [i_0] [i_1 + 1] [i_0] [i_0] [i_0] [i_2 + 2] [(unsigned short)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (unsigned char)199))));
                }
            } 
        } 
    } 
}
