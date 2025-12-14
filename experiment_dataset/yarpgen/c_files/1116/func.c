/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1116
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
    var_17 = ((/* implicit */int) min((var_17), ((~(((/* implicit */int) var_4))))));
    var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-20974))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)66)) & ((~(arr_2 [i_0] [i_0])))));
                var_19 ^= ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) >> (((((/* implicit */int) arr_1 [i_0])) - (50602))));
                var_20 = (((~(((arr_3 [i_0] [(signed char)15]) >> (((((/* implicit */int) (unsigned short)35587)) - (35573))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35583)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)17])) ? (arr_2 [i_0] [7U]) : (((/* implicit */int) (signed char)0)))) : ((-(((/* implicit */int) (unsigned short)35606))))))));
                arr_6 [24LL] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 - 2])) - (((/* implicit */int) arr_1 [i_0 - 2])))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) == (((/* implicit */int) var_11)))))));
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (unsigned short)35587)) ? (((((/* implicit */_Bool) (-(arr_3 [i_1] [(short)3])))) ? (((/* implicit */int) (unsigned short)29942)) : (((((/* implicit */_Bool) 9U)) ? (var_0) : (((/* implicit */int) (unsigned short)35587)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35600)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((12666377406131033000ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)225)))))))))))));
}
