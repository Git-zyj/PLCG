/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129040
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((/* implicit */int) var_9)), ((+(var_8))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_17 [2LL] [2LL] [i_1 - 1] [i_2] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24974)) ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_14 [18U] [18U] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) var_6)))))));
                                var_13 = ((_Bool) (-(((/* implicit */int) arr_1 [i_2] [i_2]))));
                                var_14 = (signed char)-89;
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) var_1);
                    arr_18 [i_0] [i_1 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_0] [5U]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_9))));
}
