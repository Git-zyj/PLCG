/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172091
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
    var_20 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [(unsigned char)12] [(unsigned char)12] [7ULL] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [9ULL] [i_1] [9ULL] [i_2] [i_1] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) max((var_11), (var_18)))) : ((-(((/* implicit */int) arr_10 [i_2] [i_2]))))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(var_10))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+((~(arr_11 [i_0]))))))));
                    var_23 = ((/* implicit */unsigned char) -1193639495);
                    var_24 += ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])) - (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (((unsigned long long int) (signed char)127))));
    var_26 = max(((~(((/* implicit */int) var_6)))), ((~(((((/* implicit */int) var_6)) & (((/* implicit */int) var_3)))))));
    var_27 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) != (var_10)))));
}
