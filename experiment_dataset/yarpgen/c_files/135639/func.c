/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135639
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -6639105294038922802LL))) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_1))) : (var_1)))) && (((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [(short)1]);
                    var_16 = max((((/* implicit */unsigned int) max((arr_1 [i_1 + 2] [i_0]), (arr_1 [i_1 - 1] [i_0])))), (min((var_11), (((/* implicit */unsigned int) arr_1 [i_1 + 2] [i_0])))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)134)))));
                    arr_11 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50145))) / (9696397918550058801ULL))) >> (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */short) arr_12 [i_3] [i_3 - 2] [i_3 - 2] [i_2]);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [(signed char)8] [i_0])) << (((((/* implicit */int) ((unsigned char) max(((unsigned short)36270), (((/* implicit */unsigned short) var_5)))))) - (145)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_0);
}
