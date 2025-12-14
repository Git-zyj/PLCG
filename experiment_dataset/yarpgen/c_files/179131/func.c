/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179131
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
    var_12 *= ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) 17939379625691358917ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)15963))));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1]));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (((-(507364448018192699ULL))) % (((((/* implicit */_Bool) arr_7 [i_0])) ? (507364448018192682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185)))))));
            var_15 ^= ((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_0 + 1]) / (((/* implicit */unsigned long long int) 12U))));
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) var_8);
            arr_11 [i_0 - 2] [i_2] = ((/* implicit */unsigned int) (-((+(-1329082306)))));
        }
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12314868403032034879ULL)) ? (507364448018192697ULL) : (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) : (507364448018192699ULL)))));
            var_18 += ((/* implicit */short) (-(((/* implicit */int) var_7))));
        }
        arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)30547)))))) : (((((/* implicit */_Bool) 17939379625691358907ULL)) ? (16779886281705357314ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [(unsigned short)6])))))));
        arr_15 [0ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
    }
    for (short i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_19 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4 - 2])) ? (arr_17 [i_4 - 2]) : (arr_17 [i_4 + 2])))) ? (max((max((arr_17 [i_4]), (((/* implicit */long long int) 1625855506U)))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4] [(unsigned short)4])) >= (((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_19 [i_4 - 1] [i_4 - 2])), (var_11))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */int) arr_19 [i_4 + 2] [i_4]))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) max((var_5), ((!(((/* implicit */_Bool) arr_17 [i_4]))))))))))));
    }
    for (short i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17939379625691358934ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_21 [i_5 - 1] [i_5 - 1]))));
        var_23 = ((/* implicit */short) max((((((/* implicit */int) ((short) arr_16 [i_5] [i_5]))) / ((+((-2147483647 - 1)))))), ((+(((/* implicit */int) (unsigned char)61))))));
    }
}
