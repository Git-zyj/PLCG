/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121142
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = (signed char)-17;
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 3])) << (((((/* implicit */int) arr_0 [i_0 + 4])) - (15123)))))) <= (((((arr_2 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                var_22 ^= ((/* implicit */long long int) max(((unsigned short)0), (arr_4 [i_0])));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [2LL])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) 16382U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65531))))))), (((arr_2 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1]))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_18);
    var_25 = ((/* implicit */long long int) ((min((((unsigned long long int) (unsigned short)65529)), (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12767849061500188110ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65530))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((-1111103187) + (((/* implicit */int) (unsigned short)65535))))) + (arr_8 [i_2] [i_2])));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [0LL]))) || (((/* implicit */_Bool) ((arr_6 [(signed char)6]) + (((/* implicit */long long int) (+(var_6))))))))))));
        arr_10 [i_2] = arr_6 [i_2];
    }
    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_28 *= (+(min((((((var_14) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)65535)) - (65506))))), (((/* implicit */long long int) ((((/* implicit */int) (short)10652)) >= (((/* implicit */int) arr_13 [4LL]))))))));
        var_29 *= ((/* implicit */short) min((((/* implicit */int) ((arr_11 [i_3 - 1]) <= (((/* implicit */unsigned long long int) arr_14 [14LL] [14LL]))))), (12)));
    }
}
