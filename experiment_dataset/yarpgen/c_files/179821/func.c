/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179821
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [(short)8] [i_0] [(unsigned short)12] = ((/* implicit */int) min((((/* implicit */unsigned int) ((var_5) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_8))))))), (arr_2 [i_0] [i_1])));
                var_19 &= ((/* implicit */signed char) ((((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-70)))))) != (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_8)) & (var_0))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15)))))))) * (((/* implicit */int) ((signed char) arr_0 [i_2 - 1])))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(var_3)))) + (min((arr_3 [i_0 + 1]), (((/* implicit */unsigned int) min((((/* implicit */short) arr_10 [(short)14] [i_1] [(short)14] [i_3] [i_4])), (arr_0 [i_2]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_7))));
    var_23 = ((/* implicit */int) var_15);
}
