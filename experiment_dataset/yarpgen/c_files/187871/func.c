/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187871
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_12 [11U] [i_1] [(unsigned char)8] [i_3 - 1] [i_3] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) var_8))) + (9223372036854775807LL)))));
                            var_12 = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_9)), (9223372036854775807LL)))));
                            arr_13 [i_1] [i_2] [i_1 + 3] [i_0] [i_1] = (-(((/* implicit */int) var_2)));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) var_9);
                arr_15 [i_1] [i_1] = ((/* implicit */long long int) 18446744073709551597ULL);
                arr_16 [i_1] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_1])) >> (((var_1) + (6468532179627407008LL)))))), (((unsigned long long int) arr_4 [i_1] [(unsigned char)12] [i_1]))))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [0U]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) min(((+(((/* implicit */int) var_7)))), ((+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))));
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned char) (_Bool)0))))), (var_1)))) ? ((~((+(((/* implicit */int) var_10)))))) : (((/* implicit */int) (signed char)0))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned int) var_6)), (576102692U)))))) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((~(9223372036854775807LL))))))));
}
