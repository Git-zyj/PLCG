/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145058
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 += ((/* implicit */signed char) (+(max((min((((/* implicit */int) var_12)), (0))), (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-4))))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (var_3)))));
            var_15 = ((unsigned char) (-(((((/* implicit */int) var_1)) * (((/* implicit */int) arr_1 [i_0]))))));
            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)107)) : (0)));
        }
        for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            arr_7 [i_0] [i_0] [i_2] = max((((/* implicit */int) ((short) max((((/* implicit */unsigned int) (signed char)-14)), (3210745820U))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-26)))));
            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4264401053U)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned char)218))));
        }
        var_18 *= ((/* implicit */signed char) max((arr_0 [i_0]), (((/* implicit */int) ((((/* implicit */int) (short)20120)) > (1927473734))))));
        var_19 |= ((/* implicit */unsigned char) (((-(arr_4 [i_0] [i_0]))) + (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-4)) - (((/* implicit */int) (short)28))));
        arr_10 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_3] [i_3]))));
        var_21 -= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) max((var_0), (((/* implicit */unsigned int) arr_8 [i_3] [i_3]))))))));
    }
    var_22 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)107)) + (((/* implicit */int) (signed char)-18)))));
    var_23 = ((/* implicit */short) var_4);
    var_24 = ((/* implicit */unsigned short) var_8);
}
