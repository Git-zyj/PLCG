/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12297
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [1] [2]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (-10) : (((/* implicit */int) (unsigned short)56234)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_14 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0] [9])) : (((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_15 *= ((/* implicit */short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
        arr_4 [(short)0] [(short)0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [10ULL])) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_1] [5])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [(signed char)4])) : (((/* implicit */int) arr_2 [8]))))) ? (((((/* implicit */_Bool) arr_3 [9LL] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [(short)5])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [(unsigned char)14])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))) : (((/* implicit */int) arr_2 [6]))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)12])) ? (((/* implicit */int) arr_2 [2])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [(unsigned short)2])))))) : (((/* implicit */int) arr_2 [(unsigned char)10])))))));
    }
    var_18 |= ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        var_19 = ((/* implicit */short) arr_7 [i_2]);
        arr_8 [i_2 - 1] [i_2 - 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [(signed char)1])) ? (((/* implicit */int) arr_2 [12LL])) : (((/* implicit */int) arr_0 [i_2 - 1]))))) ? (((/* implicit */int) arr_1 [(unsigned char)12] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1]))));
    }
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
}
