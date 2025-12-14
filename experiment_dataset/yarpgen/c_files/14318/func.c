/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14318
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
    var_16 = ((/* implicit */unsigned short) var_4);
    var_17 = 18446744073709551603ULL;
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) 1354087970U))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1953690220)) ? (2940879343U) : (((/* implicit */unsigned int) arr_2 [i_1])))))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) 2940879329U);
                }
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */short) arr_2 [i_1 - 1]);
                    arr_15 [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [i_0]))));
                    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_4)) : (((-665706842) % (((/* implicit */int) var_1))))))), (var_7)));
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_21 = ((/* implicit */short) var_1);
                    arr_19 [0LL] [i_1] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28690)) ? ((+(((((/* implicit */_Bool) 11619022662866472630ULL)) ? (arr_7 [i_0]) : (((/* implicit */long long int) 2940879327U)))))) : ((+(((((/* implicit */_Bool) 2940879337U)) ? (arr_12 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [6])) ? (var_15) : (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) (-(var_11)))))))));
                }
                arr_20 [i_0 + 1] [i_1] = (~(min((2940879338U), (((/* implicit */unsigned int) arr_5 [i_0 + 1])))));
            }
        } 
    } 
}
