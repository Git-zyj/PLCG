/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107788
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) (short)12874))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (91662715U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        arr_2 [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)46800)) ? (((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2])))) : ((-(((/* implicit */int) var_12))))));
        var_15 -= arr_0 [i_0] [i_0 - 1];
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (unsigned short)65535))));
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(signed char)10] [i_1 - 3] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_7 [8] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)4] [i_1 + 2] [i_1 - 2]))) : (arr_8 [(signed char)4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(short)6] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) (unsigned char)4)) : (var_10))))));
        }
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_3]))))));
            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(short)7])) ? (4203304581U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((var_12) ? (arr_8 [(unsigned short)10]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)10] [i_1] [i_3 - 1])))))))) ? (((((/* implicit */_Bool) arr_4 [6U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)6]))))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)130))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_3])) : (((/* implicit */int) arr_7 [i_1] [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */int) (unsigned short)65533)) : (((((/* implicit */_Bool) arr_7 [i_1] [4] [(short)8])) ? (((/* implicit */int) arr_7 [i_1] [i_3] [i_3 + 1])) : (((/* implicit */int) var_12))))));
        }
        var_21 = ((/* implicit */unsigned long long int) var_6);
    }
}
