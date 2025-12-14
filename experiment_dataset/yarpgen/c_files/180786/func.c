/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180786
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((-9223372036854775807LL - 1LL)))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27139)) ? (9629792577332324524ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 2147483647)))) : (((((/* implicit */long long int) ((/* implicit */int) var_15))) + (arr_0 [i_0]))))))));
        var_17 = ((/* implicit */short) 2174691302291256857ULL);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)103))))) ? (((/* implicit */int) var_0)) : ((-(2147483637)))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_0 [i_1]) / (((/* implicit */long long int) 1385749753))))))) <= (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (((((/* implicit */long long int) 184042468)) & (4922164857317017971LL)))))));
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
    }
    for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 2])))));
            var_20 -= ((/* implicit */signed char) var_6);
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)31325)) ? (((/* implicit */unsigned int) 1526587378)) : (255U)));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [i_3] [i_3])) * (((/* implicit */int) arr_5 [i_2 + 1]))));
            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_11 [i_2 - 1])) : (((/* implicit */int) arr_11 [i_2 + 1]))));
        }
        arr_12 [10] = ((/* implicit */unsigned char) 487832229);
        var_24 &= ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 - 2])) || (((/* implicit */_Bool) arr_11 [i_2 + 1]))))) : (((/* implicit */int) (short)-29193)));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) (unsigned char)247))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)126)) ^ (((/* implicit */int) var_14))))), (min((((/* implicit */unsigned long long int) (signed char)-104)), (var_1)))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((((/* implicit */_Bool) -992130805)) || (((/* implicit */_Bool) (signed char)125)))) ? (1574254859U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))))));
            arr_15 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [0])))))));
            arr_16 [i_4] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 1])))))));
            arr_17 [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) + (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * (arr_3 [8LL])))));
        }
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 1] [5] [i_2 - 2]))) : (var_1))) : (max((18446744073709551615ULL), (13400413860877423585ULL)))));
    }
    var_28 |= ((/* implicit */int) var_12);
}
