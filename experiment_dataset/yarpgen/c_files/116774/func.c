/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116774
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)-4096)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 4LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)250))))))));
        var_12 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_0] [i_1])))) : (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_2]) : (((/* implicit */int) arr_8 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL))) : (max((arr_7 [i_0] [i_1] [i_1] [i_1]), (arr_7 [i_1] [i_1] [i_2] [i_0]))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_2]);
                    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 5LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)6])) : (((/* implicit */int) (unsigned short)65535))))) ? (((arr_1 [(signed char)7]) * (arr_7 [i_0] [i_1] [i_2] [i_2]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))) : (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_2]))))))))));
                }
            } 
        } 
    }
}
