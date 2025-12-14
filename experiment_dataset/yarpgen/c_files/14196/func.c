/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14196
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7))) : (var_9)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_16 -= ((/* implicit */short) (((~(((int) (short)8)))) & (max((arr_0 [i_0 - 1]), (var_1)))));
        var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) (short)-10))))) ? (((/* implicit */long long int) (~(arr_2 [i_0 - 1])))) : (((long long int) arr_2 [i_0 + 1]))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [i_1]))));
        arr_6 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)27304)))) <= ((-(var_0)))))), (max((((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24384))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_1] [i_1])), (arr_3 [i_1])))) ? (var_9) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-103))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_20 ^= max((min((var_9), (((/* implicit */unsigned long long int) (signed char)-101)))), (((/* implicit */unsigned long long int) (+(var_1)))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (int i_4 = 4; i_4 < 20; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) min(((unsigned short)24004), (((/* implicit */unsigned short) (short)-9))));
                    arr_13 [i_3] [(unsigned short)13] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) arr_11 [i_4 + 3] [21LL] [i_4])) - (57221)))))) ? (((/* implicit */int) min((arr_11 [i_4 - 2] [i_4] [i_4 + 3]), (arr_11 [i_4 - 2] [i_4 + 3] [i_4 + 3])))) : (((/* implicit */int) (short)12))));
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)255))))), (((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 - 3] [i_4 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 3]))) : (var_13)))));
                }
            } 
        } 
    }
}
