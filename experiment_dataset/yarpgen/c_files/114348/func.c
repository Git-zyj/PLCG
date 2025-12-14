/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114348
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) (~(var_3)))) | (min((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (max((((/* implicit */long long int) (-(var_1)))), (max((var_10), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [i_2]))))))));
                    arr_11 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                    arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (16383U)));
                }
                arr_13 [i_1] = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
