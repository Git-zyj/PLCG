/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15405
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] [4U] = ((/* implicit */signed char) (-(max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [(unsigned char)1])))));
        arr_4 [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)47))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))))) ? (((/* implicit */int) max(((unsigned char)22), ((unsigned char)22)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_14 += ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [3]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_7 [i_1])))) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned short)27408))));
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_10 [i_1] [i_1] [i_4])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                var_17 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(arr_6 [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)243)), (arr_16 [i_1] [i_2] [i_5])))) << (((arr_6 [i_1]) - (694510434U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_2])))))) : (min((arr_11 [i_1] [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) 0U))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(arr_6 [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)243)), (arr_16 [i_1] [i_2] [i_5])))) << (((((arr_6 [i_1]) - (694510434U))) - (3114484173U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_2])))))) : (min((arr_11 [i_1] [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) 0U)))))))));
                arr_20 [i_1] [i_1] [i_1] = ((/* implicit */int) (unsigned char)42);
                var_18 -= ((/* implicit */unsigned short) arr_18 [i_1] [i_1] [i_1]);
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : ((+(((/* implicit */int) ((arr_8 [12ULL] [i_2] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_6] [i_1] [i_8])))))))));
                            var_20 += ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_24 [10LL] [10LL] [10LL])) ? (((/* implicit */int) (unsigned char)204)) : (var_10))))) + (((/* implicit */int) arr_9 [(signed char)6] [(unsigned char)10] [(signed char)6]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1449649177916399613ULL)) ? (((/* implicit */int) arr_17 [(unsigned char)11] [i_1] [i_6] [i_2])) : (((/* implicit */int) (unsigned short)28))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_1])) ? (arr_11 [i_1] [(unsigned short)11] [(signed char)0] [i_1]) : (arr_11 [i_1] [i_2] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_1] [(signed char)2] [i_1] [i_2] [i_6] [i_6] [i_6])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (signed char)96))))))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_23 [i_1] [(_Bool)1]))));
                var_23 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                var_24 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_6])) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_2])))) >> (((((((((/* implicit */long long int) var_11)) / (arr_21 [i_1] [i_2] [i_2] [i_6]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_2] [i_1])))))))) - (694510445LL)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_6])) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_2])))) >> (((((((((((/* implicit */long long int) var_11)) / (arr_21 [i_1] [i_2] [i_2] [i_6]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_2] [i_1])))))))) - (694510445LL))) - (3114484135LL))))));
            }
            arr_27 [i_2] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        var_25 = max((arr_24 [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1]))))));
    }
}
