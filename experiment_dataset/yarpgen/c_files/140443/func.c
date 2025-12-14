/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140443
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57997)) ? (((/* implicit */long long int) 1448034097U)) : (var_6)))), (arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) arr_3 [i_0])))) % (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [(unsigned short)10])) <= (arr_0 [(unsigned char)4] [i_1])))), (((((/* implicit */_Bool) (unsigned short)6267)) ? (arr_3 [i_1]) : (var_0))))))));
            var_15 = ((/* implicit */_Bool) (short)-6505);
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_2] [i_0])) ? (max((((/* implicit */unsigned long long int) arr_7 [13LL] [i_2])), (arr_1 [i_0]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19142))) : (18446744073709551602ULL))))) * (((((/* implicit */_Bool) (+(arr_8 [i_2])))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3544952470004715451LL)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) (unsigned char)122)))))))));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) -1LL);
            var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_7 [i_2] [i_0])))) ? (max((arr_0 [i_0] [i_2]), (((/* implicit */unsigned long long int) 4294967288U)))) : (min((((/* implicit */unsigned long long int) arr_7 [i_2] [i_0])), (arr_0 [(unsigned short)17] [i_2]))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_2] [i_0])))) % (((long long int) arr_7 [i_0] [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (-9223372036854775807LL - 1LL);
        arr_15 [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) >= (arr_0 [i_3] [i_3]));
        var_18 = ((/* implicit */short) (unsigned char)255);
        arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3])));
        arr_17 [(unsigned char)5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-105)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (var_9)))) ? (((((/* implicit */_Bool) arr_4 [(signed char)17])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_1 [i_3]))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)162)))));
    }
    for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
        arr_20 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_2 [i_4] [i_4])) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [5ULL])) ? (2046170779735881206ULL) : (((/* implicit */unsigned long long int) -1LL))))) ? (arr_0 [i_4 - 1] [i_4]) : (((/* implicit */unsigned long long int) var_11))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                arr_28 [i_6] [i_5] [i_5] [i_4] = ((/* implicit */signed char) arr_7 [i_5] [i_4]);
                arr_29 [i_4] [i_5 + 1] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_6])) ? (arr_12 [i_5 - 3]) : (((/* implicit */unsigned long long int) arr_2 [i_6] [i_6])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)15] [i_5 - 3])))));
            }
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                arr_32 [9] = ((/* implicit */long long int) arr_5 [i_7 + 1] [(short)8]);
                arr_33 [i_7 - 1] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7 - 1])) ? (arr_1 [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_23 [4])))) : (arr_7 [i_5 - 2] [(unsigned short)8])));
            }
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                arr_36 [i_8] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_34 [i_4 - 1] [(unsigned short)4]) >> (((arr_18 [7] [i_4 - 3]) - (2038244607U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 2] [i_5 - 2]))) : (((((/* implicit */_Bool) (short)28167)) ? (arr_0 [i_8] [i_5]) : (arr_1 [i_8])))));
                var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */short) ((unsigned int) arr_25 [i_4 - 2] [i_5 - 2] [i_4 - 2] [i_4 - 2]));
                arr_37 [i_5 - 3] [i_5] [i_4] = ((/* implicit */int) arr_5 [i_8] [(short)0]);
                arr_38 [(_Bool)1] = ((/* implicit */int) ((signed char) arr_21 [i_4 - 4] [i_4 + 1] [i_4 - 2]));
            }
            var_23 = ((/* implicit */_Bool) (short)-105);
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 20; i_9 += 4) 
    {
        arr_41 [i_9 - 2] [i_9] = ((/* implicit */unsigned long long int) ((arr_40 [i_9]) ^ (arr_40 [i_9])));
        arr_42 [(unsigned short)20] = ((/* implicit */short) var_4);
        var_24 = (((!(((/* implicit */_Bool) 5860467258732449634LL)))) ? (((var_6) << (((4228180105U) - (4228180105U))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 1593044492)) * (arr_40 [i_9])))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (arr_40 [i_9])))) ? (((/* implicit */unsigned long long int) ((arr_40 [i_9]) + (arr_40 [i_9])))) : (arr_39 [i_9 + 2] [i_9 + 4])));
    }
    var_26 = ((/* implicit */unsigned short) max((min((var_11), (((/* implicit */long long int) (signed char)32)))), (((((/* implicit */_Bool) ((-1287050981) + (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) var_0))))))));
}
