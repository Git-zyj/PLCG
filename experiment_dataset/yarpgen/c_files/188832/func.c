/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188832
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
                        var_15 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            arr_11 [i_1] = ((/* implicit */unsigned char) 3065746084U);
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    arr_18 [i_5] [6U] [i_5] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-71)), (1497302353U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2147483647) : (((/* implicit */int) arr_13 [(unsigned char)5] [(unsigned char)5] [i_5]))))))) ? (((((arr_17 [i_0] [9ULL]) <= (var_1))) ? (((/* implicit */unsigned long long int) ((int) arr_13 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_5])))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)19)))), (((/* implicit */int) (unsigned char)224))))));
                    /* LoopSeq 3 */
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        var_16 &= ((/* implicit */unsigned int) arr_13 [i_0] [i_4] [i_0]);
                        arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) max((var_11), (arr_4 [i_0])));
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_4] [i_0] [i_7] = ((((((/* implicit */_Bool) arr_16 [7] [(signed char)10] [i_5] [i_7])) && (((/* implicit */_Bool) arr_16 [i_7] [i_4] [i_0] [i_0])))) ? (12836209406162498364ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-52)) : (var_0)))) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((unsigned int) var_1)))))));
                        var_17 = ((/* implicit */unsigned char) ((unsigned int) var_14));
                        var_18 = 295281086;
                        var_19 = ((/* implicit */long long int) max((var_2), (((/* implicit */int) var_14))));
                        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned long long int) arr_2 [i_5] [i_4] [i_0])) : (arr_7 [i_0] [i_4] [i_5] [i_0])))) ? (((/* implicit */unsigned int) (+(-1442652151)))) : (min(((~(var_3))), (((/* implicit */unsigned int) var_5))))));
                    }
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] [6LL] [i_0] [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [8U])) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) arr_24 [i_8] [i_5] [i_4] [i_0]))))) ? (((/* implicit */unsigned long long int) var_6)) : (arr_28 [i_8]))) : (((/* implicit */unsigned long long int) max((1958354086U), (((/* implicit */unsigned int) ((int) 3966871343U))))))));
                        var_21 = ((/* implicit */signed char) (~(((unsigned int) var_0))));
                    }
                }
            } 
        } 
    }
    var_22 = var_9;
}
