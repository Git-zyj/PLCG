/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162572
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 4279200379U))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)16727))))) && (((/* implicit */_Bool) (unsigned short)54539))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) var_2);
            var_20 += ((/* implicit */int) (short)24222);
            arr_6 [i_0] [5ULL] = ((/* implicit */signed char) (-((-(((/* implicit */int) (short)-16728))))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
            var_21 *= ((/* implicit */short) ((int) 1781353475U));
            arr_10 [4U] [(signed char)15] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2513613805U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))));
        }
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_7))))) <= ((-(((/* implicit */int) var_5))))));
            /* LoopNest 2 */
            for (signed char i_4 = 4; i_4 < 20; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        arr_19 [i_4] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_4] [i_0])) : (var_1)))));
                        arr_20 [i_4] = ((/* implicit */unsigned long long int) (unsigned char)174);
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */signed char) arr_8 [i_0]);
    }
    var_24 = ((/* implicit */signed char) 3926672310U);
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_0), (((/* implicit */short) var_8))))) >> (((((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) 2513613821U)))) - (9823152307141810593ULL)))))) ? (var_6) : (((/* implicit */unsigned long long int) var_1))));
}
