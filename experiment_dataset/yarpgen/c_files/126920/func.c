/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126920
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32762))))) ? (((((/* implicit */_Bool) (short)32014)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-38)))) : (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_1])), ((short)32755)))))))) ^ (((/* implicit */int) (short)32024))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 3; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_15)) + (16162))))))))));
        var_17 = ((/* implicit */long long int) max(((signed char)-1), (arr_7 [i_2])));
    }
    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_3 + 2])) : (((/* implicit */int) (short)-32023)))) % (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) (short)32742))))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_12 [i_3])))), ((~(var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))) : (((((((/* implicit */_Bool) (short)-6242)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        arr_16 [i_3] [i_3 + 2] = ((/* implicit */unsigned char) max((((int) (-(((/* implicit */int) arr_9 [i_3]))))), (((/* implicit */int) arr_13 [i_3]))));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((unsigned long long int) (unsigned short)6)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) | (var_9))) : (var_9)));
}
