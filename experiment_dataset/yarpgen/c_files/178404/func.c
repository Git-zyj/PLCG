/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178404
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [i_0]))), (max((((/* implicit */unsigned int) var_6)), (3931885277U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (arr_2 [i_0] [i_0] [i_0 - 2])))) > ((+(3946337397014766314ULL))))))) : (((((/* implicit */_Bool) (signed char)123)) ? (((((/* implicit */_Bool) 1271983041)) ? (4272489214U) : (602757554U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_0] [i_1]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-112)), (812002785U)))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [14LL] [i_4] [(unsigned short)11])) : (arr_1 [i_0] [i_4])));
                                var_11 -= ((/* implicit */unsigned long long int) (~(min((arr_3 [i_1]), (arr_3 [i_1])))));
                            }
                        } 
                    } 
                } 
                var_12 = (-((((-(18446744073709551615ULL))) * (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) (unsigned char)213))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~((+(min((var_7), (((/* implicit */int) (unsigned short)9)))))))))));
    var_14 &= max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (1641942330U) : (((/* implicit */unsigned int) 1881123031)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (var_6)))))))), (var_2));
}
