/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133586
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << ((((~(var_6))) - (9397934861800329139ULL)))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_2))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))))) ? (((((/* implicit */unsigned long long int) var_0)) * (((((/* implicit */unsigned long long int) var_0)) * (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) var_11)))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_11)) : (var_2)))))));
        arr_4 [i_0] [i_0 + 2] = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (max((((/* implicit */long long int) arr_0 [i_0] [i_0 - 1])), (((long long int) var_0)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) /* same iter space */
            {
                var_16 = ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_2] [i_2]))) ^ (arr_8 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2 + 1])) : ((-(var_7)))));
                var_17 -= (((!(((/* implicit */_Bool) var_3)))) ? ((+(((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2 + 1])) + (((/* implicit */int) var_4))))));
                var_18 = ((((arr_8 [i_0] [i_0] [i_2]) < (min((arr_8 [9U] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (var_6))))));
            }
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
            {
                arr_12 [i_1] = ((/* implicit */unsigned char) var_3);
                var_19 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0))))) == (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_3))))))));
            }
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                {
                    var_21 = (~(arr_1 [i_4 - 1] [i_5 + 3]));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_4] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5 + 3] [i_5 + 3]))) : (var_0)));
                }
                arr_18 [i_4] = ((/* implicit */signed char) (((+(var_5))) >= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_1] [i_4 + 1])))));
                arr_19 [i_1] &= ((/* implicit */long long int) ((unsigned short) var_1));
                arr_20 [i_4] [i_1] [11LL] = ((/* implicit */short) arr_5 [i_0 + 1]);
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_1] [12ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_4 - 1] [i_1] [i_4 - 1])))))));
            }
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_23 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_22 [i_0 - 1])) : (((/* implicit */int) arr_22 [i_0 + 1]))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_0 - 1])))))));
                var_24 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : ((~(arr_8 [i_0] [i_0] [i_1]))))));
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_11)))));
            }
            arr_25 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_11 [0LL] [i_1]);
        }
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8))) >> (((((/* implicit */int) ((short) (~(arr_28 [(unsigned short)19] [18ULL] [i_8]))))) - (773)))));
            var_26 = ((/* implicit */long long int) max((var_26), (var_0)));
        }
        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (arr_27 [i_7] [i_7])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11))))))))));
    }
    for (long long int i_9 = 3; i_9 < 17; i_9 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9])) ? (var_8) : (var_7))))) + (((/* implicit */unsigned long long int) (+((+(var_5)))))))))));
        arr_33 [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~((+(var_11)))))), (min((((((/* implicit */unsigned long long int) var_10)) + (var_7))), (((/* implicit */unsigned long long int) arr_31 [i_9 - 3]))))));
    }
    var_29 = ((long long int) var_5);
}
