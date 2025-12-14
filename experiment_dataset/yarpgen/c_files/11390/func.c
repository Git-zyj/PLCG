/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11390
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)114)), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (((var_8) & (((/* implicit */unsigned long long int) 2147483647))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (var_8) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (min((var_0), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) arr_0 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = arr_1 [i_1] [i_1];
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) min((arr_0 [i_1]), (arr_3 [i_1] [i_1])))))) <= (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */unsigned long long int) arr_3 [i_1] [(short)2])) - (arr_4 [i_1]))))) <= (((/* implicit */unsigned long long int) ((((2147483647) >> (((arr_4 [i_1]) - (13069804984636689611ULL))))) % (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_4 [i_1])))) ? (((((/* implicit */_Bool) var_2)) ? (13779643862813137515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4820))))) : (((unsigned long long int) var_11)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))))))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) arr_4 [i_2]);
        var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_14)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (var_3)))) : (max((((/* implicit */unsigned long long int) arr_8 [i_2] [1U])), (max((var_5), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
        var_23 = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (arr_10 [i_3]) : (((/* implicit */long long int) var_3))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_9 [i_3]))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_10 [i_4]) + (((/* implicit */long long int) arr_15 [i_3] [i_4]))))) - (arr_4 [i_3])));
            arr_17 [i_3] [i_4] = ((/* implicit */short) ((signed char) arr_10 [i_3]));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((((/* implicit */_Bool) arr_15 [i_3] [i_5])) ? (-2147483638) : (((/* implicit */int) var_7))))));
            var_27 *= arr_13 [i_3];
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */int) var_3);
            arr_24 [i_3] [i_6] = ((/* implicit */unsigned int) (unsigned short)60734);
        }
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [(signed char)5] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (14839371116753053647ULL) : (var_8)))) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
            var_29 = ((/* implicit */int) arr_25 [i_3] [i_3] [i_3]);
        }
    }
    var_30 = var_2;
    var_31 += ((/* implicit */int) min((var_7), ((short)-2525)));
}
