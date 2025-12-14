/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125970
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) arr_2 [i_1 + 3] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2 + 1] [i_3]);
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_7 [i_1]);
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_3]);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)50)) - (((/* implicit */int) (short)-22877))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) (~(((long long int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */unsigned long long int) var_2);
    var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_10) - (12085768758744886965ULL)))))))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967295LL)) && (((/* implicit */_Bool) 116104854488960461ULL)))))));
}
