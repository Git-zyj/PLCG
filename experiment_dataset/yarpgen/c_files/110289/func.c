/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110289
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
    var_10 -= var_6;
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 9LL)) : (var_9)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((short) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) & (arr_0 [i_0])));
            arr_6 [i_1] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((21LL), (-30LL)))) | (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
            var_12 = ((/* implicit */unsigned long long int) var_2);
            arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(short)2] [(short)2]))))), (((short) 18446744073709551595ULL))))), (((((/* implicit */_Bool) 17873942311515426095ULL)) ? (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (var_4) : (var_4))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
            arr_8 [i_1] = arr_3 [i_0] [i_0];
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_13 += ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) var_1)) & (arr_2 [i_0] [i_0]))));
            var_14 = ((/* implicit */unsigned char) arr_1 [i_0] [i_2]);
        }
        arr_11 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-23LL) < (-1562409434029974195LL))))) & (arr_4 [i_0])));
        arr_12 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_7))))));
        arr_13 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) / (arr_10 [i_0] [i_0] [i_0])))))) ? ((+(((arr_2 [i_0] [i_0]) * (var_9))))) : (((/* implicit */unsigned long long int) ((var_4) / (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])))))))));
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_4)))))))) : (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) var_1))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */int) arr_0 [i_3]);
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3]))))))))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned short) (~(arr_2 [7LL] [i_4])))))));
        var_18 ^= ((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_4]))) | (arr_3 [i_4] [i_4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [(short)6])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (9191803904392945953LL)))) ? (arr_2 [i_4] [i_4]) : (((/* implicit */unsigned long long int) (-(var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1562409434029974208LL)) ? (((/* implicit */int) (unsigned short)61677)) : (((((/* implicit */_Bool) -8228095167337557659LL)) ? (((/* implicit */int) (unsigned short)480)) : (((/* implicit */int) (_Bool)1))))))));
        var_19 |= arr_19 [i_4];
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_20 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551595ULL), (((/* implicit */unsigned long long int) arr_22 [i_5] [i_5]))))))))));
        var_21 += ((/* implicit */short) (unsigned short)21317);
        var_22 = ((/* implicit */long long int) max((max((2ULL), (((/* implicit */unsigned long long int) 2118268418880713928LL)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)19542)) : (arr_20 [i_5] [i_5]))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_5])))))))));
        var_23 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) arr_20 [i_5] [i_5]))))) ? ((~(((/* implicit */int) arr_21 [i_5])))) : (((/* implicit */int) (_Bool)1))))));
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) - (max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2635127978U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21327))) : (var_3))))))));
    }
}
