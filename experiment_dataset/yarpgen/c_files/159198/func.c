/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159198
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [2LL] |= ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)15))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)));
        var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))) >> (((((/* implicit */int) var_9)) + (95)))));
        var_12 = ((/* implicit */short) min((min((((/* implicit */long long int) var_9)), (arr_0 [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_0 [i_0]))))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) var_5);
            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0 + 1]), (arr_4 [i_0] [i_0] [i_0 - 2]))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (-1)))) ? (min((((/* implicit */unsigned int) -1933051354)), (183105836U))) : (((unsigned int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) (_Bool)1);
            var_16 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [4])) : (((/* implicit */int) var_10)))), (((arr_5 [0LL]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62992))) >= (arr_0 [12U])))) : (((/* implicit */int) arr_4 [i_3] [i_0] [i_0]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((arr_0 [i_0]) >= (arr_0 [i_0])));
                var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) | (0))))));
                var_20 = ((/* implicit */signed char) arr_5 [i_0]);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_0] [i_6] [i_3] [i_0])) ^ (((/* implicit */int) ((((/* implicit */int) ((arr_14 [i_0]) > (((/* implicit */long long int) arr_13 [i_3] [i_3]))))) == ((-(((/* implicit */int) var_10)))))))));
                    arr_22 [i_0] [i_0] [i_3] [i_6] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_21 [i_7] [i_0 + 1] [i_3] [i_0 + 1]), ((_Bool)1))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                    var_22 = ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)157)));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_26 [i_0] [i_0] [i_6] [i_3] [i_0] = ((/* implicit */signed char) max((min((((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_20 [i_0])))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) arr_5 [i_0])), (7815299418943363377LL)))));
                }
                arr_27 [i_3] [i_0] [i_3] = (_Bool)1;
                var_24 = ((/* implicit */short) arr_4 [i_0] [i_3] [i_3]);
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_25 ^= max(((((-(arr_14 [4LL]))) | (((/* implicit */long long int) ((unsigned int) (signed char)-5))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (!(arr_31 [(_Bool)1])))), (arr_24 [i_0 + 1] [i_0 - 1])))));
            var_26 -= ((/* implicit */signed char) var_5);
            var_27 = ((/* implicit */long long int) var_1);
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * ((((_Bool)1) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_6)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_28 = (_Bool)1;
            arr_36 [i_0] = ((/* implicit */long long int) (_Bool)1);
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_21 [i_0] [i_10] [i_10] [i_0]))));
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) max((arr_10 [i_11] [i_0] [i_0 - 1]), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0 + 1] [i_0 + 1] [i_0]))))))), ((((_Bool)1) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)121)), ((unsigned short)48200)))) : (((/* implicit */int) (signed char)13))))));
            var_31 = arr_21 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0];
            var_32 = ((/* implicit */unsigned short) arr_39 [i_0 - 2] [i_0 - 2] [i_0]);
        }
    }
    /* vectorizable */
    for (signed char i_12 = 2; i_12 < 23; i_12 += 3) /* same iter space */
    {
        arr_43 [i_12] [i_12] = ((/* implicit */_Bool) arr_1 [i_12]);
        var_33 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)65))));
        var_34 = ((/* implicit */unsigned int) (+(arr_29 [i_12 - 2])));
    }
    for (signed char i_13 = 2; i_13 < 23; i_13 += 3) /* same iter space */
    {
        arr_46 [i_13] [i_13] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [i_13 + 1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_13 - 1]))) : (2584260540U)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_13]))))) ? (arr_29 [i_13 + 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0))))))));
        var_35 = ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((~(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_29 [i_13]) : (((/* implicit */long long int) arr_1 [i_13])))) == (((/* implicit */long long int) (~(((/* implicit */int) arr_42 [i_13 + 1])))))))));
    }
    var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((var_7) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_7))))))) < (var_5)));
}
