/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177287
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
    var_16 |= ((/* implicit */unsigned int) (unsigned short)65535);
    var_17 = ((/* implicit */unsigned long long int) var_14);
    var_18 = max((var_9), (min((var_9), (min((var_9), (((/* implicit */short) (unsigned char)2)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) var_6);
                arr_7 [i_0] = ((/* implicit */int) max((arr_1 [i_0 - 1]), (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 3])) ? (arr_1 [i_0 - 2]) : (arr_5 [i_0 - 3] [i_0 + 1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)65518)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (var_4)))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1 - 1]) / (arr_2 [i_1 + 1])))) ? (min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1]))) : (((((/* implicit */_Bool) var_5)) ? (var_13) : (arr_2 [i_1 - 1])))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)9)) < (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) (!(var_10)))), (arr_6 [i_0] [i_0] [i_0])));
            }
        } 
    } 
}
