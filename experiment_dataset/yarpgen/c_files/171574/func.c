/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171574
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
    var_17 = ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_10))))))) + (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_1))))));
    var_18 = var_12;
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] |= ((/* implicit */long long int) var_4);
            var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) min((var_12), (arr_0 [i_0])))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) var_15))))) ? (((/* implicit */int) var_12)) : (arr_5 [i_0 + 4] [i_0] [i_0 - 1])))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) arr_8 [i_0 - 1]);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_6) : (var_6)));
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0 + 1]))));
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_22 *= ((/* implicit */_Bool) arr_1 [i_0]);
                var_23 *= ((/* implicit */short) ((arr_11 [i_0] [i_0] [i_3 - 1] [i_3 - 1]) < (arr_11 [i_3] [(_Bool)1] [i_3 - 1] [i_3])));
            }
            for (signed char i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
            {
                var_24 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1])));
                arr_16 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)162)))))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                var_26 = ((/* implicit */unsigned char) var_3);
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 - 1] [i_2] [i_4 + 1] [i_0 + 4])) ^ (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_2] [i_4 + 1] [i_2])) ? (arr_5 [i_0] [i_2] [i_0]) : (((/* implicit */int) var_13)))) : (arr_5 [i_4 - 1] [i_0 + 4] [i_0 - 1])));
            }
        }
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_28 += ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 2]))))));
            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) << (((var_11) - (7634311016176295454LL)))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_0 + 2] [16ULL])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [3ULL] [3ULL]))))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 3] [i_5] [i_5] [i_5]))) <= (max((var_6), (((/* implicit */unsigned long long int) 1136005489)))))))));
            arr_19 [(signed char)9] = ((/* implicit */signed char) max((((/* implicit */int) ((((-9208390973942033268LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) == (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 3] [i_0 + 2])))))), ((~(((/* implicit */int) arr_3 [i_0 + 3]))))));
            var_31 = ((/* implicit */_Bool) var_5);
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_0 + 1] [i_6] [i_0]))))) : (max((arr_13 [i_0 + 4] [i_6]), (((/* implicit */unsigned long long int) arr_17 [i_0 - 1] [i_6] [i_0 - 1]))))));
            arr_22 [i_0] [i_6] = ((/* implicit */long long int) ((unsigned char) (_Bool)0));
            var_33 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0 + 3] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 2] [i_0 + 2] [i_0])))))));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_1 [i_0 + 4])))))))));
        }
        var_35 = max((((((/* implicit */_Bool) arr_5 [i_0 + 2] [0LL] [i_0 + 3])) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), ((~(arr_5 [i_0 + 4] [i_0 + 3] [i_0 + 3]))));
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_36 = max((((/* implicit */unsigned long long int) min((arr_26 [i_7] [i_7] [i_7]), (((/* implicit */short) ((var_16) >= (var_14))))))), (((((arr_24 [i_8]) >= (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (9208390973942033268LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_6))))));
            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (arr_23 [i_7] [2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_8] [i_8]))))) >= (((/* implicit */unsigned int) (~(arr_24 [i_8]))))));
            var_38 = ((/* implicit */unsigned int) arr_26 [i_8] [i_8] [i_8]);
        }
        for (unsigned char i_9 = 3; i_9 < 17; i_9 += 3) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_28 [i_9]))));
            var_40 -= ((/* implicit */unsigned char) ((long long int) max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_25 [i_9 - 3] [i_9 - 3] [i_9 - 3])))));
        }
        var_41 = ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (max((max((var_16), (((/* implicit */long long int) 1575436986)))), (arr_28 [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7464730949641424099LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U)))) ? ((~(arr_23 [i_7] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_26 [i_7] [16] [14ULL]), (var_8)))))))));
        var_42 = var_8;
    }
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1575436986))));
        var_44 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10]))) : (min((0LL), (arr_30 [8]))))) : (((((/* implicit */_Bool) arr_30 [i_10])) ? (arr_30 [i_10]) : (arr_30 [i_10]))));
    }
    var_45 = ((/* implicit */unsigned int) var_12);
}
