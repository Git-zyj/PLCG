/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125807
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
    var_12 &= var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */short) arr_8 [i_0] [i_1] [i_2]);
                    var_14 *= ((/* implicit */signed char) var_5);
                    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [(unsigned short)2] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))))) ? (((((/* implicit */_Bool) (unsigned short)64776)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)47925))))))) ? (arr_8 [(unsigned short)4] [(unsigned short)4] [i_2 + 1]) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) : (arr_0 [(unsigned short)11]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) < (arr_8 [i_0] [i_0] [i_0])))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (arr_5 [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_1] [(signed char)10] [i_2])) ? (min((arr_8 [8ULL] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)239))))))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */long long int) (signed char)63);
}
