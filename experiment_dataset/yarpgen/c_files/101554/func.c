/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101554
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_0 [0U]))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_3]) : (((/* implicit */int) (_Bool)1))))))));
                        var_20 += ((/* implicit */unsigned char) arr_8 [i_2 - 1] [i_1]);
                    }
                } 
            } 
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_12 [(short)2] [i_1] [(short)2] [(short)2] [i_0] [i_1]))));
            var_22 = ((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_1 - 1]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((arr_9 [i_0] [i_4]) ? (((9223372036854775788LL) % (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))))));
            arr_15 [i_0] [(unsigned short)0] [i_4] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1614715746582522997LL)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned short)13197)))));
            arr_16 [i_4] = ((/* implicit */int) (signed char)-65);
        }
    }
    for (signed char i_5 = 3; i_5 < 20; i_5 += 2) 
    {
        var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned short)52338))))));
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)58698)), ((((_Bool)1) ? (2878957890826194582ULL) : (((/* implicit */unsigned long long int) 9223372036854775789LL))))));
        var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_18 [i_5 - 1] [(signed char)6]), (((/* implicit */unsigned int) max(((short)20723), (((/* implicit */short) arr_17 [(signed char)14]))))))))));
    }
    var_27 = ((short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) (signed char)27)) ? (-7671305305315378623LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-40)))))));
    var_28 = ((/* implicit */unsigned short) var_10);
}
