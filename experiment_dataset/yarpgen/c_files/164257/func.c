/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164257
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
    var_15 ^= ((/* implicit */unsigned char) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_16 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */int) var_4))));
    var_17 += (signed char)0;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))));
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (var_2))))));
        var_20 = ((/* implicit */short) ((-7608036290032922635LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)36)))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((arr_0 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) : (arr_2 [(unsigned char)0] [i_1]))))));
            var_21 |= arr_5 [i_0] [i_0] [i_0];
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [13])) : (((var_2) & (var_12))))))));
            arr_11 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [11] [i_0] [i_0]))) : (96884302U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_2] [i_0])));
            arr_12 [13LL] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) < (var_9)));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_0))))) : (var_10)));
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */int) arr_9 [i_0] [i_3] [i_3]);
            arr_16 [i_0] [i_3] |= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_3]);
            arr_17 [i_0] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((((var_10) >> (((arr_5 [i_0] [i_0] [i_3]) - (882173526U))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_0])) && (((/* implicit */_Bool) arr_6 [i_3] [(_Bool)1]))))))))));
            var_26 += ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? ((~(((/* implicit */int) (short)27771)))) : ((+(var_1))));
        }
        for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [(short)9] [(short)9])) : (var_1)));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                var_29 = ((/* implicit */unsigned char) (~(arr_2 [i_0] [i_0])));
            }
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                var_30 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)0))))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) == (9319866971986969267ULL)))))))));
            }
            arr_27 [i_0] [11] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_15 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0))))));
        }
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 12; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((long long int) var_5))), ((~(var_10))))), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) -7964299466134828816LL)), (var_10)))))));
                    var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_25 [i_8 - 3] [i_8 - 3] [i_9])))) - (((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 3] [i_9])) ? (arr_25 [i_8 - 3] [i_8 + 1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                    arr_34 [8LL] [i_8 - 1] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) - (((((/* implicit */_Bool) var_1)) ? (9319866971986969240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_7])) || (((/* implicit */_Bool) var_2))))), (((unsigned char) (_Bool)0))))))))));
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((long long int) ((unsigned long long int) max((((/* implicit */int) (unsigned char)245)), (var_1))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) (((~(arr_5 [i_10] [i_10] [i_10]))) << (((var_9) - (11702026654952332968ULL)))));
        /* LoopSeq 4 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_37 *= ((/* implicit */unsigned char) ((arr_10 [23LL] [i_10] [i_10]) > (arr_10 [i_10] [i_10] [i_10])));
            var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)245))));
        }
        for (short i_12 = 2; i_12 < 10; i_12 += 3) 
        {
            arr_42 [7ULL] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (arr_7 [i_12 + 3] [i_10])))) : (((1290389927U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76)))))));
            arr_43 [i_12] = ((/* implicit */signed char) ((var_2) < (((((/* implicit */_Bool) (unsigned short)37078)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_39 = ((/* implicit */signed char) ((int) arr_36 [i_12 + 3]));
            var_40 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_10] [i_10] [i_10]))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((arr_2 [i_10] [i_13 + 1]) - (2311908701055041983LL)))));
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13])))))) ? ((+(arr_14 [i_13] [i_13] [i_10]))) : (((/* implicit */long long int) (-(41159850))))));
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)14])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_14]))) : (3370791830U)));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_14 + 1])) ? (arr_15 [i_14 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        }
    }
}
