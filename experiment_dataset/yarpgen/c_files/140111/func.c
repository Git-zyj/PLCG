/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140111
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_4 [i_2] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (var_6))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)126)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((547608330240ULL), (((/* implicit */unsigned long long int) (signed char)87))));
    var_21 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            for (unsigned short i_5 = 4; i_5 < 8; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */signed char) arr_13 [(_Bool)1])), (arr_12 [i_3] [i_3]))), (arr_15 [i_3 + 1] [i_5 - 4] [i_6 - 1]))))) / (arr_11 [i_6 + 1] [i_5] [i_4])));
                            arr_22 [i_3] [i_6 - 1] [i_5] [i_4 - 1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_16 [i_4 + 1] [(unsigned short)1] [i_4] [i_3]), (arr_16 [i_4 + 1] [i_6] [i_6] [i_3]))))));
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                        }
                        var_24 = ((/* implicit */signed char) min((min(((-(((/* implicit */int) arr_13 [i_5])))), (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) var_10)) + (120))))))), (((/* implicit */int) (((-(((/* implicit */int) (signed char)9)))) >= (((/* implicit */int) arr_12 [i_3] [i_3])))))));
                        arr_23 [i_3 + 1] [(signed char)3] [i_5] [i_3] = max(((!(((/* implicit */_Bool) (signed char)86)))), ((!(arr_13 [i_3 + 1]))));
                        arr_24 [i_3] [(_Bool)1] [i_5] [i_3] = ((/* implicit */unsigned char) min((3709521830U), (((/* implicit */unsigned int) (signed char)127))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((2052213753U), (((/* implicit */unsigned int) (signed char)80)))))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 3; i_9 < 8; i_9 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8 + 1] [i_9] [i_9]))) % ((+((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35885)) ? (9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (((arr_8 [(short)0]) - (arr_8 [(unsigned char)2]))))))));
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_33 [i_8 + 1] [i_8 + 1] [i_8 + 1] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_8 + 1] [i_8 + 1])) - (((/* implicit */int) arr_30 [i_8 + 1] [i_8 + 1]))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) ((signed char) arr_12 [i_8] [0U]))) : (((/* implicit */int) (!(var_12))))));
        }
        var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25883))) + (15777019119025746108ULL)))))));
        arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_8 + 1]) ? (((/* implicit */int) arr_13 [i_8 + 1])) : (((/* implicit */int) arr_13 [i_8 + 1]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_8 + 1])))))));
        arr_35 [i_8] [i_8 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((-(arr_11 [i_8 + 1] [i_8] [(signed char)4]))), (((/* implicit */long long int) var_14))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_15 [(signed char)8] [i_8 + 1] [i_8])))) - (((((/* implicit */_Bool) arr_10 [i_8])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [5LL] [2U] [i_8 + 1] [(unsigned char)7])))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_11 = 2; i_11 < 9; i_11 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) var_12);
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (10666267680852501715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? ((-(((/* implicit */int) arr_12 [i_11 - 2] [i_11])))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_11 - 1])) >= (((/* implicit */int) arr_10 [i_11 - 1])))))));
        var_32 -= arr_32 [i_11] [5LL] [i_11];
    }
}
