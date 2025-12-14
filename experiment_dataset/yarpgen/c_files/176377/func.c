/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176377
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_7)) != (max((((/* implicit */int) var_8)), (14))))))));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), ((~((~(((/* implicit */int) (unsigned char)11))))))));
    var_16 = ((/* implicit */signed char) (~(min((min((var_2), (((/* implicit */unsigned long long int) (signed char)-60)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (5616416909466467454ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_1])) >= (((/* implicit */int) arr_6 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_1] [(short)1]))) != (arr_1 [i_0]))))) : ((~(arr_0 [i_1])))));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~(var_4)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */long long int) ((arr_3 [i_0 - 2] [i_1 + 1] [i_1 + 1]) / (arr_3 [i_0 + 1] [i_1 + 1] [i_1 + 1])));
                var_19 = ((/* implicit */_Bool) ((short) 18446744073709551596ULL));
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_20 = ((unsigned long long int) arr_6 [i_0 + 1]);
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_1] [(signed char)10] [(unsigned char)6])))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_9 [i_4] [i_1] [i_1] [(unsigned short)3])))))));
                arr_16 [i_1] = ((/* implicit */unsigned long long int) var_13);
                var_22 = ((/* implicit */short) ((unsigned short) arr_8 [i_0] [i_1] [i_4]));
                var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_11 [5] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)120)))))));
            }
            var_24 = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0]);
            var_25 = ((/* implicit */int) (signed char)-112);
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 7; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29920))) : (9714839591970272998ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6]))) : (arr_21 [i_0 - 2])));
                            var_27 = ((/* implicit */short) (-(arr_5 [i_6])));
                            arr_28 [i_0] [i_6] [i_6] [(signed char)8] [i_8] = ((/* implicit */unsigned long long int) (~(arr_23 [(short)3] [i_6])));
                            arr_29 [i_0] [i_5] [i_6 + 4] [i_6 + 4] [i_6] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_24 [i_0 - 1] [i_0 - 1] [i_6] [i_7 + 2] [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5]))))) * (((arr_26 [i_8] [i_8] [i_7] [i_6] [i_5] [i_5] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_1 [9LL])))));
                        }
                    } 
                } 
            } 
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */int) arr_19 [i_5 + 1] [(unsigned char)5] [i_5 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
            var_28 = ((((/* implicit */_Bool) 20ULL)) ? (3559771701277292537ULL) : (((/* implicit */unsigned long long int) 418743395U)));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9335)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55733))) : (arr_5 [(unsigned char)2])))) ? (((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned short)4] [6ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
        {
            arr_33 [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2099721419))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8384512ULL)))))));
            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)0]))) : (17972590393215571468ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 8384503ULL))))));
            arr_34 [6ULL] [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_9] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_22 [i_0]))))));
            var_31 = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_9] [2ULL]);
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_10] = ((/* implicit */unsigned char) (~(9223372036317904896ULL)));
            arr_38 [i_10] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_18 [i_10 + 1] [i_10] [(unsigned char)1])) ? (arr_18 [i_0] [(unsigned short)0] [i_0 + 1]) : (var_1))) + (2147483647))) >> ((((((_Bool)0) ? (arr_31 [i_0 - 1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) - (94LL)))));
            arr_39 [2ULL] [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [(signed char)7] [i_0 - 2] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10]))));
            arr_40 [i_10] = ((/* implicit */unsigned long long int) (+(arr_20 [10LL] [i_0 - 1] [i_10 + 1])));
        }
        arr_41 [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_0 - 2] [2U] [7ULL] [i_0]) ^ (arr_13 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1])));
    }
    for (short i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_32 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (min(((+(var_4))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_12 [i_11] [i_11] [i_11] [i_11])), (arr_2 [i_11]))))))));
        arr_44 [i_11] [i_11] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_17 [i_11])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [6U] [5] [i_11] [i_11]))) : (max((((/* implicit */unsigned long long int) arr_6 [i_11])), (arr_3 [i_11] [i_11] [i_11]))))));
    }
}
