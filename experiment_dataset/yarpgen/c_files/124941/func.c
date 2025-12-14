/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124941
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(var_14))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56150)))))));
                var_19 = ((/* implicit */unsigned char) max((((unsigned long long int) min((arr_1 [(unsigned short)7]), (((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (var_16) : (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(max((var_8), (((/* implicit */long long int) ((_Bool) var_3))))))))));
                            arr_8 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)38498)) || (((/* implicit */_Bool) (unsigned short)56150)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_3])))))))) : (((/* implicit */int) var_4))));
                            var_22 += ((/* implicit */short) (-(((/* implicit */int) ((max((var_5), (((/* implicit */long long int) var_11)))) >= ((~(var_5))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned long long int) var_6))));
}
