/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123396
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) 4578212477638507980LL))));
                arr_6 [(_Bool)1] [(signed char)4] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (~(arr_5 [i_0])))) | (max((var_9), (((/* implicit */long long int) var_10)))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) min(((_Bool)1), (arr_0 [i_0])))))))));
                arr_7 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((arr_0 [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) arr_1 [i_0]);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((4697325758002431272LL) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_1]))) : (((/* implicit */int) min(((_Bool)1), (arr_3 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [16] [(_Bool)1] = ((max((arr_12 [i_3 + 3] [i_3 + 1] [i_3 - 2] [i_4] [i_4]), (arr_12 [i_3 + 3] [i_3 + 1] [i_3 - 2] [(signed char)6] [i_3]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (arr_2 [i_2])))) ? (-682024103) : (((/* implicit */int) arr_8 [i_0] [i_0] [4LL]))))));
                                var_12 = ((/* implicit */int) (-((((!(var_6))) ? (((long long int) arr_5 [i_0])) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_4])) << (((/* implicit */int) (_Bool)0)))))))));
                                arr_17 [i_4] [i_4] = ((((/* implicit */_Bool) ((var_2) ^ (min((arr_9 [i_3 + 1]), (arr_13 [i_0] [i_1] [i_2] [(signed char)14] [i_4] [(signed char)14])))))) ? (((((/* implicit */_Bool) ((arr_4 [i_1] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_4 [i_0] [i_2])))))) : (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_3 + 4] [i_4] [i_4] [i_4])) | (((/* implicit */int) arr_4 [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */signed char) (+(max((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_2] [i_2])) << (((var_0) + (8863280605651269503LL)))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_14 = ((/* implicit */signed char) (!(((_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_4 [i_0] [i_1])))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_9))));
                    var_16 = (i_5 % 2 == 0) ? (((((((/* implicit */_Bool) ((arr_9 [i_0]) << (((/* implicit */int) arr_15 [i_1] [i_0] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) arr_4 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_5])))) + ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_5])))))) : (((((((/* implicit */_Bool) ((arr_9 [i_0]) << (((((/* implicit */int) arr_15 [i_1] [i_0] [i_5] [i_5] [i_5])) - (1)))))) ? (((/* implicit */int) arr_4 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_5])))) + ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_5]))))));
                    arr_21 [i_5] [i_0] [(signed char)8] = ((((/* implicit */int) var_8)) * (((((((/* implicit */int) (_Bool)1)) + (arr_9 [i_5]))) - ((-(((/* implicit */int) var_6)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_17 ^= ((_Bool) arr_15 [i_6] [i_6 + 1] [i_6] [i_7 - 1] [(signed char)20]);
                /* LoopSeq 1 */
                for (long long int i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    arr_31 [i_6] [i_7] [i_8 + 1] = ((/* implicit */signed char) min((((((/* implicit */int) ((var_6) || ((_Bool)0)))) ^ ((+(((/* implicit */int) var_8)))))), (((((/* implicit */int) arr_18 [i_6] [i_7] [i_8] [i_7])) << (((((((/* implicit */_Bool) arr_30 [i_6 + 2] [i_7] [i_7])) ? (arr_30 [i_6] [5] [5]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [(_Bool)1] [i_8 - 1]))))) - (6700274461712753859LL)))))));
                    var_18 *= ((/* implicit */_Bool) min(((((~(((/* implicit */int) (signed char)(-127 - 1))))) << (((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) max((((/* implicit */signed char) (_Bool)1)), (arr_29 [(_Bool)1] [i_7] [i_8 + 1])))))));
                    arr_32 [i_7] [i_8] = ((/* implicit */signed char) (+(min((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_10))))), (((arr_1 [i_8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))));
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_6 - 1] [i_8 - 2]) ? (((/* implicit */int) arr_26 [i_6] [(signed char)17] [i_6])) : (((arr_18 [i_6] [i_7 - 1] [i_7] [i_8 + 1]) ? (((/* implicit */int) arr_26 [i_6] [(_Bool)0] [(_Bool)1])) : (((/* implicit */int) arr_19 [(_Bool)1]))))))) ? (((/* implicit */long long int) arr_9 [i_7])) : (max((arr_12 [i_6] [i_6 - 1] [i_7 - 1] [i_8 + 1] [i_8 - 3]), (((/* implicit */long long int) (~(1988818398))))))));
                }
                arr_33 [i_6 - 1] [i_7] [i_7] = (-(max((2836098683725910345LL), (((/* implicit */long long int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_43 [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_9 + 1] [i_9 + 1])) + (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -6639990493189081148LL)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 134217472LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_2 [i_9])) ? (var_9) : (((/* implicit */long long int) 1370392582))))))));
                    arr_44 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_11]) % (((/* implicit */int) arr_1 [15LL]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9 + 1] [i_10] [i_10] [i_11]))) - (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_10])) / (((/* implicit */int) var_8))))) / (((((/* implicit */_Bool) 2199023239168LL)) ? (((/* implicit */long long int) 2028038621)) : (9223372036854775786LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_9 + 1] [i_9 + 1] [(signed char)9] [i_11] [i_11])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((min((((((/* implicit */int) (_Bool)1)) << (((6639990493189081147LL) - (6639990493189081127LL))))), ((-(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((((/* implicit */int) var_4)) + (81))) - (3)))));
}
