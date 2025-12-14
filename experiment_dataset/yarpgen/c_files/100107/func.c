/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100107
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
    var_13 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)17928))) + (((((/* implicit */_Bool) (short)-32754)) ? (var_2) : (var_10))))), (var_11)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)-32754)), (arr_1 [i_0] [i_0 + 1])));
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max(((short)32754), ((short)32750)))))) ? (((/* implicit */int) max((arr_0 [i_0 - 2]), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))) : (((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 473834904U))))) : (((/* implicit */int) (short)-32758))))));
        var_14 = ((/* implicit */short) ((unsigned int) var_1));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) - (473834875U))) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [i_1])))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3821132376U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)21766))))) / (((unsigned int) (short)-32759))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_16 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_6 [i_2] [2U])))));
            var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_7 [i_1] [(short)1]) : (var_4))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_1])))))));
        }
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((short) max((arr_7 [i_3 + 1] [i_3 + 1]), (max((2985785626U), (var_11)))))))));
            var_19 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_1])) * (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_5 [i_3 - 1])))))));
            var_20 = ((/* implicit */short) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3821132376U)) ? (var_10) : (var_11))))))))));
        }
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32754))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (473834919U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32733))))))));
        var_22 = ((/* implicit */short) arr_13 [i_4]);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) arr_10 [i_4] [i_4 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2985785611U)))))));
    }
    for (unsigned int i_5 = 4; i_5 < 19; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] = 2962112524U;
        var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_5 + 2])) ? (arr_13 [i_5 - 4]) : (arr_13 [i_5 - 4])))));
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        var_25 = ((/* implicit */short) max((((unsigned int) min(((short)28462), ((short)26449)))), (var_4)));
        var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)13464)))) ? (((((/* implicit */_Bool) arr_15 [i_6])) ? (var_6) : (((unsigned int) var_12)))) : (473834900U)));
        arr_22 [i_6] = min((min((arr_17 [i_6] [i_6]), (arr_7 [i_6] [i_6]))), (((((/* implicit */_Bool) arr_7 [i_6] [i_6])) ? (arr_17 [i_6] [i_6]) : (arr_17 [i_6] [i_6]))));
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_10 [(short)3] [i_7])), (3388237342U))) * (473834919U)))) ? (((/* implicit */int) (short)26449)) : (((/* implicit */int) (short)-4453))));
        var_28 &= var_9;
    }
    var_29 |= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) | (((((/* implicit */_Bool) 473834875U)) ? (4294967283U) : (var_10))))), (min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_8)) ? (var_2) : (var_2)))))));
    var_30 = ((/* implicit */unsigned int) max((var_0), ((short)3807)));
}
