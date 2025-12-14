/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16017
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
    var_11 = var_2;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((arr_1 [(unsigned char)6] [(unsigned char)6]), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [(short)9] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_0)) ^ (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_1 [i_0] [(signed char)7])) : (((/* implicit */int) var_5)))))), (((/* implicit */int) ((signed char) min((arr_2 [i_0]), (((/* implicit */unsigned char) var_4))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [(unsigned char)13])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9223372036854775807LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)2016), (((/* implicit */short) (signed char)-65)))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) (signed char)104))))) ? (((long long int) (unsigned char)145)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2080374784)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_1]))))))));
        var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_1] [i_1])), ((unsigned char)159)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (435941170) : (((/* implicit */int) var_0)))))) : (min((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)2016)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2]))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (signed char)-48)) : (-692596483));
                    }
                    for (int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_5 + 2])) ? (arr_5 [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_3] [i_2] [i_1])))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_12 [i_5 + 1] [i_1] [i_1] [i_1 + 1])))) : (((/* implicit */int) min((arr_11 [i_1] [i_2] [i_3] [i_5 - 1]), (arr_11 [i_1] [i_3] [i_2] [i_1]))))));
                        var_16 += ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */int) (signed char)49)) <= (((/* implicit */int) (signed char)-25))))))) & (((/* implicit */int) var_3))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_5 + 4])) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2]))) > (9223372036854775802LL))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_1 + 1] [i_1])) / (((/* implicit */int) arr_4 [i_1 - 1]))));
                        var_19 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : (var_6))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3575271401618732541LL)) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1]))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned char)172)) - (158)))));
                        var_22 = ((unsigned char) arr_13 [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 + 1]);
                    }
                    var_23 = ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)221)));
                }
            } 
        } 
    }
}
