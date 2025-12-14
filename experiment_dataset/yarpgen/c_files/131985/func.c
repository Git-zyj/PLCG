/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131985
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (var_8) : (((((/* implicit */_Bool) (short)6304)) ? (var_6) : (var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)6304)))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (var_11)))))) : (max((max((var_12), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_10))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_2] [i_0] [(unsigned short)19] [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_5));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) arr_6 [i_2] [i_0] [i_0] [i_0])) : (arr_5 [i_0] [i_0])));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) arr_4 [i_0] [i_2]));
                }
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)-6305)), (arr_3 [i_0] [i_0] [i_1])))))))) | (var_12)));
            }
        } 
    } 
}
