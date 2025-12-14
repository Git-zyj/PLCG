/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149584
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
    var_18 *= ((/* implicit */signed char) var_14);
    var_19 ^= (+(((/* implicit */int) var_17)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_20 = (i_3 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) (short)30917))) : (((((/* implicit */int) (unsigned char)35)) & (((/* implicit */int) var_0)))))) + (2147483647))) << (((((unsigned int) (~(arr_11 [8] [i_3])))) - (1113070074U)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) (short)30917))) : (((((/* implicit */int) (unsigned char)35)) & (((/* implicit */int) var_0)))))) + (2147483647))) << (((((((unsigned int) (~(arr_11 [8] [i_3])))) - (1113070074U))) - (1407833816U))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((arr_2 [i_3 - 4] [i_2 - 2]) ? ((+(((/* implicit */int) var_17)))) : (((((/* implicit */int) (short)12738)) + (((/* implicit */int) (short)32767))))))) : ((+(arr_0 [i_3 + 1]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))), (arr_5 [i_0 - 2] [i_0])));
                arr_13 [i_1] = ((/* implicit */long long int) (_Bool)1);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((long long int) var_11)))));
            }
        } 
    } 
}
