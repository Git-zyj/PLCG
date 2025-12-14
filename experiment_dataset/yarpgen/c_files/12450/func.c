/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12450
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
    var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */int) var_3)) % (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) var_1)) : (var_9)));
    var_11 = min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)155)) <= (((/* implicit */int) (signed char)-35))))), (var_6));
    var_12 = (-(((/* implicit */int) var_3)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (+(((max((905404466), (-905404467))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 325574509)) : (arr_2 [i_0]))) - (325574492U)))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (min(((+(arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) ((arr_3 [i_0]) == (arr_3 [i_0 + 1])))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */short) min(((~(max((-325574509), (((/* implicit */int) arr_0 [i_1] [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) 4465050403020013132LL)))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                arr_15 [i_2] = (+(((/* implicit */int) max((arr_7 [i_1]), (arr_7 [i_1])))));
                arr_16 [i_2] = ((/* implicit */unsigned char) arr_3 [i_3]);
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) (unsigned char)9);
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) -325574506)), (-3516036665696885846LL)))) ? (((((/* implicit */_Bool) ((long long int) var_8))) ? (((unsigned long long int) (unsigned char)113)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [12ULL] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [20ULL]))))))) : (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1])))))));
            }
            var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)185)) ? (arr_13 [i_1] [i_1] [i_1] [i_2]) : (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) arr_10 [i_1] [i_1]))));
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)5)) ? (11429544337043037010ULL) : (((/* implicit */unsigned long long int) -905404456))));
        }
        arr_22 [i_1] = max((((((var_1) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [(short)16])) > (((/* implicit */int) (unsigned char)79))))))), (((/* implicit */int) min((max((var_2), (((/* implicit */short) arr_9 [i_1])))), (((/* implicit */short) max((((/* implicit */unsigned char) arr_19 [i_1] [i_1] [i_1] [i_1])), (var_8))))))));
        arr_23 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((max((-325574506), (arr_10 [i_1] [i_1]))) + (2147483647))) >> (((((((/* implicit */_Bool) 3516036665696885846LL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (_Bool)1)))) + (146)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((+(4092849239581298897LL)))));
        arr_24 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1 - 2])) ? ((~(var_1))) : (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_11 [(unsigned char)18] [(unsigned char)18]))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_5] [i_5]))))))))));
        var_19 ^= ((/* implicit */int) var_6);
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((~(arr_18 [i_5] [i_5] [i_5] [i_5]))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) var_1)) : (arr_2 [i_6])))))));
        arr_30 [i_6] = ((/* implicit */unsigned char) arr_29 [i_6] [i_6]);
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6])) ? (arr_10 [i_6] [i_6]) : (((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_6] [i_6])) ? (-75889256) : (((/* implicit */int) (unsigned char)97))))) : (((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_6])) ? (-8360254248366261142LL) : (arr_13 [i_6] [i_6] [i_6] [i_6]))))))));
        var_23 ^= ((/* implicit */int) arr_8 [i_6]);
    }
    var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_7)))))) || (((/* implicit */_Bool) ((unsigned char) ((long long int) var_9))))));
}
