/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103521
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
    var_10 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_1)), (var_6)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) max(((((-2147483647 - 1)) % (((/* implicit */int) ((unsigned short) var_8))))), ((-(2147483647)))));
                var_12 = ((/* implicit */short) var_1);
                var_13 = ((/* implicit */short) min((arr_0 [i_1 + 2]), ((!(arr_0 [i_1 - 1])))));
                var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (min((((/* implicit */int) ((arr_8 [i_0] [i_4 - 2] [i_1 + 1] [i_3 + 2]) != (((/* implicit */int) var_2))))), (((-2147483647) ^ (2147483647)))))));
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_9))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((var_0) != (((/* implicit */unsigned int) var_9)))))));
}
