/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171305
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) 1642976333U)) : (var_19))));
                        arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                    }
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_13)))))) && (max(((!(((/* implicit */_Bool) (unsigned char)0)))), (((_Bool) 954082652))))));
                    var_21 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [4U] [12U] [i_2] [i_1] [i_1]))) : (var_19))), (((/* implicit */unsigned long long int) min((1642976333U), (((/* implicit */unsigned int) arr_11 [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -649778431)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (signed char)51))));
}
