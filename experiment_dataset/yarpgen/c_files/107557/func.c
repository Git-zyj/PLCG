/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107557
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
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = arr_4 [i_0];
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-20765))));
                                var_16 = ((/* implicit */short) max((arr_7 [i_4] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_2 [(short)4] [(short)4]))));
                                var_17 = ((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_3 + 1] [i_0] [i_4]) ? (((/* implicit */int) arr_9 [i_0 + 3] [i_3 - 1] [10ULL])) : ((-2147483647 - 1)))) << (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47492))))) > (((/* implicit */int) arr_9 [(unsigned char)8] [(unsigned char)8] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_12 [i_1] [i_1] [i_0] [i_0] [i_0 - 1] [i_0])))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (short)-13227)) : (arr_1 [i_0]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1835958603)) && (((/* implicit */_Bool) (unsigned char)255))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (0))))));
}
