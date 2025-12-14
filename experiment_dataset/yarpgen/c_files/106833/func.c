/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106833
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(min((((/* implicit */long long int) min((var_10), ((signed char)(-127 - 1))))), (var_9))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_17 -= ((/* implicit */unsigned int) ((arr_6 [i_1 + 1] [i_1 - 2]) >> (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_5 [20U]) : (((/* implicit */int) (signed char)-1)))))) + (174)))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_13 [(signed char)18] [i_1] [i_1] [(signed char)18] [i_1 - 3] [(signed char)18] [i_1 + 2])) ? (((/* implicit */int) var_12)) : (arr_13 [i_1 - 1] [3LL] [i_1] [i_1] [i_1 + 2] [3LL] [i_1 - 1]))), (((/* implicit */int) arr_8 [i_0]))));
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)5))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1 + 1])) ? (arr_3 [i_1 + 1] [(signed char)11] [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1] [i_1 + 2]))))))));
                            arr_15 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-2147483647 - 1))), (0U)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) arr_13 [i_0] [i_1 - 3] [i_2] [i_1 - 3] [(signed char)17] [i_3] [i_4])) : (arr_6 [i_0] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)-88)))) : (max((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_1 [i_0])) : (var_2))), (((/* implicit */int) (signed char)7))))));
                            var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) arr_10 [i_3] [i_0] [i_0] [i_2] [i_0] [i_3]))), ((+(9223372036854775807LL)))));
                            var_20 -= ((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) 1193273365)) ? (arr_7 [i_4] [i_1 + 2] [i_4]) : (max((((/* implicit */long long int) arr_4 [i_4])), (9223372036854775807LL)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            var_21 |= ((/* implicit */signed char) 3588725898U);
                            arr_18 [(signed char)14] [i_3] [i_0] [(signed char)3] [i_3] = max((((/* implicit */unsigned int) (signed char)98)), (max((arr_17 [i_0] [i_0] [i_2] [i_3] [5] [i_3] [i_1 - 1]), (((/* implicit */unsigned int) var_10)))));
                            arr_19 [i_0] [i_0] [i_5] [i_3] [i_3] [i_0] [i_3] &= (signed char)97;
                        }
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            var_22 = ((((/* implicit */_Bool) -1193273366)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [4LL] [i_6])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_1))))))) : ((+((~(9223372036854775807LL))))));
                            arr_24 [i_0] [i_1] [i_0] [i_1] [i_6] [i_6] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                            arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 2] [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1])) ? (var_5) : (arr_13 [i_1] [i_1 + 2] [i_1] [i_1 - 3] [i_1] [4] [i_1 - 3]))), (arr_13 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_1 - 3] [(signed char)10] [i_1 - 3] [i_1])));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((arr_13 [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_0] [(signed char)2] [i_1 - 1] [i_0]) - (arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_0])));
                            var_24 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                        }
                    }
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_16 [i_2] [i_2] [i_1 + 1] [18U] [i_0]))));
                }
            } 
        } 
    } 
    var_26 -= var_12;
}
