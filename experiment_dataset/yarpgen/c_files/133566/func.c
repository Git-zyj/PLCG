/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133566
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (short)16384)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */int) ((_Bool) ((min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_0])), (arr_7 [(short)12]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1])) : (((/* implicit */int) var_15))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            arr_15 [i_0] = ((/* implicit */_Bool) arr_13 [i_0]);
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((+(arr_4 [i_0] [i_0] [i_0])))));
                        }
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16394)) ? (max((var_18), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (max((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))), (((/* implicit */long long int) (-(((/* implicit */int) (short)16384)))))))));
}
