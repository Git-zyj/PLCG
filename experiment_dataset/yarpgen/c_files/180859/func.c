/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180859
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
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-110)) && (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)20)) - (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((long long int) var_14)))))));
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_17 = ((/* implicit */long long int) var_7);
                    var_18 |= ((/* implicit */signed char) (((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) ((-26LL) <= (3338189732989147975LL))))))) + (max((((((/* implicit */long long int) ((/* implicit */int) (short)-32766))) + (var_0))), (((var_13) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)7] [i_1])))))))));
                }
                var_19 -= ((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)3] [5LL])))));
            }
        } 
    } 
}
