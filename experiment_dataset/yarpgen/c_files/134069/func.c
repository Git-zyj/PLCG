/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134069
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
    var_16 = var_7;
    var_17 += ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)24)))) + (((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (288221580058689536ULL)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))));
    var_18 = ((unsigned long long int) max((((/* implicit */long long int) ((unsigned short) var_9))), (((0LL) * (var_4)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (5781041528337324904LL)))) ? (((/* implicit */int) ((short) arr_4 [i_1]))) : (((/* implicit */int) ((short) var_9))))))));
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 2805448462U)), (5781041528337324904LL)));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((5781041528337324899LL), (((/* implicit */long long int) (signed char)60))))) ? ((+((+(-11LL))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [(unsigned short)4])) : (((/* implicit */int) arr_7 [i_0]))))) : (max((var_10), (((/* implicit */long long int) arr_2 [i_0]))))))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */short) arr_6 [i_2] [i_1] [i_0]);
                }
                for (signed char i_3 = 1; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)61);
                    var_22 = ((((var_0) == (((/* implicit */long long int) ((/* implicit */int) var_14))))) ? (max((((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 + 1] [i_3 - 1])), (var_9))) : (((long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))))));
                    var_23 |= ((/* implicit */unsigned long long int) arr_2 [(unsigned short)7]);
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 9223372036854775798LL)) > (4827356613347867304ULL))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)8] [i_3 + 1]))) >= (var_15)))) != ((+(((/* implicit */int) arr_10 [i_3]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_13))))))));
                    var_25 = ((/* implicit */long long int) (unsigned short)0);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((unsigned int) max((var_2), (((/* implicit */long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (signed char)39))))))));
}
