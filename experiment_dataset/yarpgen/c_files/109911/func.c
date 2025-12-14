/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109911
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(_Bool)1] &= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_0 [(signed char)14])) ? (arr_1 [(signed char)18] [(signed char)18]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)209)) + (((/* implicit */int) (unsigned char)209)))))))), (((((((/* implicit */_Bool) arr_0 [(unsigned short)22])) ? (((/* implicit */int) (unsigned char)33)) : (var_1))) & (((/* implicit */int) arr_0 [4U])))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) & (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_5)))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) 134217472LL))), (var_5))))));
            arr_7 [i_1] = (((-(arr_5 [i_2] [i_1] [i_1]))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17548507684997529189ULL)))))));
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))))));
            arr_9 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((((var_0) < (((/* implicit */unsigned int) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_11 [i_1] [(unsigned char)4] [i_1])))))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((((arr_6 [i_1] [4ULL]) + (2147483647))) >> (((/* implicit */int) var_7)))) >= (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (signed char)88))))))) ? ((~(((884162885452127482LL) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)6] [(signed char)6]))))))) : ((-(arr_1 [i_3] [i_3 + 1]))))))));
        }
        var_16 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (signed char)-113)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_5] = ((/* implicit */long long int) (_Bool)1);
                    arr_20 [i_4] = ((/* implicit */signed char) 14738732405604930310ULL);
                    var_17 *= ((/* implicit */_Bool) max((((((((/* implicit */int) (signed char)-92)) > (arr_18 [i_6] [i_6] [14LL] [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)63)) <= (((/* implicit */int) (short)9431)))))) : (max((arr_16 [(unsigned char)12]), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((long long int) arr_18 [i_6] [i_5] [i_4] [i_4])))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_17 [i_4] [(unsigned char)2] [(unsigned char)2]))));
    }
}
