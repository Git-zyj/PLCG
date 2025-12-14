/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167847
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
    var_10 = ((/* implicit */unsigned short) var_0);
    var_11 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((max((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (arr_3 [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned short)22])) ? (((/* implicit */int) arr_2 [(short)16])) : (((/* implicit */int) arr_1 [(unsigned char)16]))))))), (((/* implicit */unsigned int) ((((unsigned long long int) -1299768288)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_2] [2U] [i_3] = ((/* implicit */_Bool) (-(((var_7) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) var_3))))));
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) max((arr_4 [i_1 + 1]), (arr_8 [i_2 - 2] [i_2 - 2] [i_1 - 1])))), (((((/* implicit */_Bool) max((arr_0 [i_0] [i_1 - 2]), (-1299768288)))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0]))) : (-1299768295))))))));
                        }
                    } 
                } 
                arr_11 [(signed char)18] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 1])))))) <= (((((/* implicit */unsigned long long int) arr_5 [i_0])) ^ (max((((/* implicit */unsigned long long int) -1299768295)), (var_5)))))));
            }
        } 
    } 
}
