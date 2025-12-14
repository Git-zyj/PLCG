/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12710
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 *= max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8787503087616ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30867))))))))), (var_4));
                var_14 = ((var_5) * (arr_2 [i_0] [i_0]));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) (~(0U)));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7919))) - (arr_4 [i_0] [i_1] [i_1] [(unsigned char)5])))) : (arr_1 [i_0])));
                }
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_0] [(short)4] [(unsigned char)0])) / (((/* implicit */int) (short)28755))))))) | (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_1);
}
