/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176684
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
    var_11 += ((/* implicit */unsigned int) var_0);
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-120)) == ((-(((/* implicit */int) var_4)))))))) : (var_1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (15)))) ? (((/* implicit */int) (unsigned short)2048)) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_4 [i_2 - 3] [i_2 - 3] [i_2 + 2]), (arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 2]))))));
                                var_14 -= ((/* implicit */unsigned long long int) ((arr_9 [i_2 + 2] [i_2 - 1]) > (arr_9 [i_2 - 3] [i_2 - 1])));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (_Bool)1))));
                                arr_15 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_2] &= ((/* implicit */long long int) (_Bool)0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
