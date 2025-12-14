/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109917
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
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) || ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_14)));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((unsigned int) var_18)), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (var_16))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (unsigned short)25109);
        arr_5 [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
        var_23 &= ((/* implicit */unsigned char) var_15);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) arr_7 [i_2 - 1])) - (10758)))))))) ? (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (3825020888U))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))) & (469946407U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            var_25 = ((/* implicit */int) min((arr_7 [i_2 - 1]), (((unsigned short) arr_7 [i_2 - 1]))));
            arr_13 [i_2] [i_2] = max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_18)) ? (var_1) : (var_17))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) ((short) (+(6893158292464634868LL))));
                arr_20 [i_2 - 1] [i_2] [i_5] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))));
                arr_21 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40427)) & (((/* implicit */int) var_16)))))));
                var_28 = var_2;
            }
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                arr_26 [i_2] = ((/* implicit */unsigned short) arr_11 [i_6]);
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127)))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_30 += ((/* implicit */long long int) (_Bool)1);
                    var_31 = (_Bool)0;
                }
                arr_29 [i_2 - 1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) 216172782113783808LL);
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (unsigned char)105))));
            }
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */long long int) arr_10 [i_2] [i_4] [i_4]);
                var_34 -= ((/* implicit */int) (+(arr_24 [i_8] [i_4])));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_35 = ((/* implicit */unsigned char) max((((/* implicit */short) arr_8 [i_2 - 1] [2LL])), (arr_1 [i_9])));
            arr_34 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_17 [i_2] [11LL] [i_9] [i_2]);
            arr_35 [i_2] [i_2 - 1] = max((((/* implicit */int) (unsigned short)40426)), ((+(((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2])))));
            arr_36 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((var_17) - (1377471019143373317LL)))));
        }
        /* LoopNest 2 */
        for (short i_10 = 3; i_10 < 9; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 10; i_11 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_16))));
                    arr_41 [(unsigned char)0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 216172782113783808LL)) ? (arr_22 [i_2] [i_2] [i_2]) : (arr_24 [i_2] [1])))) ? ((~(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((5754968642511178127LL), (((/* implicit */long long int) arr_31 [i_2] [i_10 + 2] [i_10 + 2] [i_10 + 2]))))) || (((/* implicit */_Bool) 1165971653918018119LL))))) : (max((max((var_9), (((/* implicit */int) (short)6762)))), (((/* implicit */int) var_12))))));
                    var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3825020888U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_10 [i_2] [i_10 - 1] [i_11 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_2 - 1] [i_10] [i_11] [i_11])))))) * ((((!(((/* implicit */_Bool) (unsigned short)40427)))) ? ((+(((/* implicit */int) arr_28 [i_11 + 1])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (unsigned short i_12 = 3; i_12 < 18; i_12 += 1) 
    {
        var_38 += max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 0LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(4462528649699251101LL)))) ? (3908748883U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34878)) / (((/* implicit */int) var_2)))))))));
        arr_45 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_12 - 3])) * (((/* implicit */int) arr_43 [i_12]))));
    }
    var_39 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned short)3584))))), (max((-5754968642511178131LL), (-2002887173973661450LL))))));
}
