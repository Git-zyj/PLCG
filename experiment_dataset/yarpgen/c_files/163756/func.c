/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163756
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
    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) (unsigned char)73)))))))) + (9223372036854775807LL))) >> (((var_10) + (3386338063762581172LL)))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)201))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_4))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)183))))) : (((((/* implicit */_Bool) ((var_18) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((~(1U))) : (((/* implicit */unsigned int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((max((var_0), (((/* implicit */long long int) (unsigned char)189)))), (var_17)));
                var_23 = ((/* implicit */short) (~(16508790049038837544ULL)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) ^ (1453077755U)))) ? (((/* implicit */int) (_Bool)1)) : (-1109342479)))));
        arr_7 [(signed char)6] [i_2] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)118)), (arr_5 [i_2])))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -295082647)), (arr_11 [i_2] [i_3] [i_4])));
                    var_26 = ((/* implicit */short) ((unsigned short) (~((~(arr_12 [i_2]))))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((max((-1LL), (((/* implicit */long long int) 976717682)))) - (((/* implicit */long long int) arr_10 [9LL] [9LL])))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (arr_4 [(signed char)7] [i_3 + 2]))))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_28 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_7)))) ? (max((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5])), (9223372036854775808ULL))) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) arr_4 [i_5] [i_5]))))))));
        arr_18 [(unsigned char)12] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)221))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)204)))) ^ (((/* implicit */int) max(((unsigned char)199), (((/* implicit */unsigned char) arr_3 [i_5])))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max(((_Bool)1), (arr_17 [i_5] [i_5])))), (min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_5])))))) : (((((((/* implicit */_Bool) 2975261814U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_5])))) | (((/* implicit */int) ((signed char) arr_2 [i_5])))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6]))))) & (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1]))));
        arr_22 [i_6] [i_6] &= ((16383) + (((/* implicit */int) (unsigned char)78)));
    }
}
