/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166613
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
    var_15 = ((/* implicit */unsigned short) (-(20U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    arr_7 [i_0] [2U] &= max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (-(var_0)))) ? (var_6) : (arr_1 [i_1] [i_1]))));
                    var_16 = (+((+((-2147483647 - 1)))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (1373702119U))))))));
                }
                var_18 += ((/* implicit */_Bool) max(((-(2147483647))), (((/* implicit */int) ((unsigned char) arr_3 [i_1])))));
                var_19 *= ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 8U)) ? (var_14) : (((/* implicit */unsigned int) -2147483647)))))) ? (var_11) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 594873220U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3608285360U))))))));
}
