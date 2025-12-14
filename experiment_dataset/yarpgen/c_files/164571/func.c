/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164571
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
    var_12 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) (unsigned short)8)) ? (var_11) : (((/* implicit */unsigned int) -2147483647)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27))) >= (var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_3 [i_0] [i_0] [(signed char)1]));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -449259811)) ? (449259810) : (((/* implicit */int) (unsigned short)24160)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 432893163)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned short)21)))) : (-449259814)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = (+(((long long int) ((((/* implicit */_Bool) arr_1 [9LL])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    var_14 = ((/* implicit */unsigned int) var_4);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((var_9), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 449259815)) ? (449259824) : (((/* implicit */int) (signed char)-53)))) % ((~((-2147483647 - 1))))))) : ((+(7500166055726437548LL)))));
}
