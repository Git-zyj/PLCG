/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177308
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_4 [(signed char)4] [(signed char)4] = ((/* implicit */unsigned long long int) min(((~(min((((/* implicit */long long int) (_Bool)0)), (arr_1 [i_0 - 2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_7)))) ? (min((arr_2 [i_0 - 2] [i_0]), (((/* implicit */int) var_9)))) : (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) var_7))))))))));
            arr_5 [i_0] [(short)13] &= ((/* implicit */short) min((arr_2 [i_0] [i_1]), (((/* implicit */int) ((((/* implicit */long long int) var_7)) <= ((((_Bool)1) ? (((/* implicit */long long int) arr_2 [i_0] [i_1])) : (arr_3 [(unsigned char)6] [i_0 + 1] [i_0]))))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((9223372036854775807LL) - (9223372036854775771LL))))))) != (((int) ((unsigned int) (unsigned short)65535)))));
                arr_8 [i_0] [7LL] [i_2] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((arr_1 [i_0 - 1]) < (arr_1 [i_0 + 2])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0 + 3] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))));
            }
            arr_9 [i_0 - 4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) (~(min((arr_1 [i_0]), (((/* implicit */long long int) var_4))))))) ? (min((arr_3 [i_0] [i_0 + 3] [i_0 + 2]), (var_1))) : (((/* implicit */long long int) min((((/* implicit */int) var_5)), (arr_2 [i_0 + 4] [i_0 + 3]))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_19 [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_5]));
                        var_14 = ((/* implicit */signed char) var_1);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((int) var_8))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (9223372036854775801LL))))), (((/* implicit */long long int) ((min((13U), (((/* implicit */unsigned int) var_0)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 + 2]))))))))));
                var_16 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_3])))));
                var_17 = max((min((arr_10 [(signed char)6] [(signed char)6]), (((/* implicit */long long int) max((((/* implicit */signed char) arr_0 [(unsigned char)2])), (var_8)))))), (((/* implicit */long long int) (~(((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_31 [(short)17] [i_0] [i_0] [i_6] [0LL] [i_8] [i_8] = ((/* implicit */signed char) ((arr_1 [i_0 - 1]) - (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_3] [i_3] [i_0])) % (((/* implicit */int) ((signed char) arr_18 [i_3]))))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) arr_15 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 4]))))) >> ((-((~(18446744073709551615ULL))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) || (arr_28 [(_Bool)1] [(_Bool)1] [i_6] [i_6] [i_6])))) : (((/* implicit */int) ((short) min((((/* implicit */unsigned int) arr_20 [i_0])), (var_6)))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_34 [i_0] [i_3] = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_0] [6] [i_9] [i_0 + 4])) : (((/* implicit */int) var_3))))), (((/* implicit */long long int) min((arr_26 [i_0 - 2] [i_0 + 4]), (arr_26 [i_0 - 1] [i_0 + 1]))))));
                arr_35 [1U] = ((/* implicit */long long int) var_2);
                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) (signed char)66)) : (arr_23 [9] [i_3] [9] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 2] [i_0]))) : (arr_33 [i_9] [i_3] [i_9] [i_9]))), (((/* implicit */long long int) (~(max((arr_14 [i_0]), (((/* implicit */unsigned int) -1449755585)))))))));
            }
        }
        var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22))) : (arr_1 [i_0]))));
    }
}
