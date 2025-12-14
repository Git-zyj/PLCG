/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106110
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((var_2), (min((min((-2900711928138208374LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_6)))))))));
    var_12 = ((/* implicit */unsigned short) var_8);
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) -1038887995);
        var_15 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_3))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_16 -= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-113))));
        var_17 = ((/* implicit */int) var_6);
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_1]));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40228)) ? (3ULL) : (min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */signed char) arr_4 [i_1] [i_1]))))), (var_1)))));
    }
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) (-(min((arr_9 [i_2 + 1]), (((/* implicit */long long int) (unsigned short)3532))))));
        arr_11 [i_2] = max((((/* implicit */unsigned long long int) (-(((long long int) var_6))))), (((((/* implicit */unsigned long long int) arr_9 [i_2 - 1])) * (arr_7 [i_2 + 1]))));
        arr_12 [3ULL] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_7))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_16 [i_3] [i_3] [i_2 + 1] = ((/* implicit */_Bool) (+(((arr_7 [i_2 - 1]) | (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_7 [i_2])))))));
            arr_17 [i_2 + 1] [i_3] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
            arr_18 [i_3] |= ((/* implicit */unsigned char) min(((-(arr_7 [i_2 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (arr_9 [i_2]) : (((/* implicit */long long int) 1720420849))))) <= (((var_1) << (((arr_15 [i_2] [i_2] [i_3]) + (745045374993640648LL))))))))));
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_21 [i_2] [i_4] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))) * (((/* implicit */unsigned long long int) 4239990742975407175LL))));
            var_20 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (33554431ULL))) / (((/* implicit */unsigned long long int) arr_8 [i_4] [i_2])))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)13])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2)))) ? (((((/* implicit */_Bool) (unsigned short)41241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41235))) : (3ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_2 - 1])))) - (41195ULL)))));
        }
        arr_22 [i_2 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) arr_20 [i_2] [i_2])) : ((+(((/* implicit */int) (signed char)-119))))))));
    }
}
