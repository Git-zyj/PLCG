/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15685
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
    var_19 = ((/* implicit */short) -1563881155);
    var_20 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    var_21 ^= ((/* implicit */signed char) ((long long int) min((((/* implicit */int) (unsigned char)68)), (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (short)-23400)) : (1023))))));
                    var_22 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [(unsigned short)12] [i_1])), (min((arr_6 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (2133049243461720220ULL)))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_8 [i_3] [i_0 - 1] [i_3] [i_3])) ? (((/* implicit */int) (short)-23400)) : (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))));
                    var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) arr_3 [8U] [i_0])) * (((/* implicit */int) (unsigned char)221)))) + (((/* implicit */int) (signed char)42))))), (((arr_10 [i_0 - 1]) ^ (arr_10 [i_0 - 1])))));
                    var_25 |= ((/* implicit */unsigned int) (signed char)-32);
                }
                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(short)9] [i_0] [i_0 - 1] [i_0 + 1])) ? ((~(((/* implicit */int) (signed char)-61)))) : (min((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 + 1]), (((/* implicit */int) arr_9 [i_0]))))));
            }
        } 
    } 
    var_27 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8070450532247928832ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)32)), ((unsigned char)234))))) : (max((var_3), (((/* implicit */unsigned long long int) (unsigned short)52194)))))), (((/* implicit */unsigned long long int) ((_Bool) min((var_18), (((/* implicit */long long int) (signed char)47))))))));
}
