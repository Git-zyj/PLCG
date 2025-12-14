/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158182
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)16384))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned char)109))))))));
                var_21 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) arr_2 [i_0])));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) var_18)), (arr_3 [i_0] [i_0] [(signed char)0])))) >> ((+(0U)))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_5);
}
