/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123470
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
    var_16 = ((/* implicit */unsigned short) (signed char)1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        var_17 ^= ((/* implicit */_Bool) max((((int) var_6)), (((/* implicit */int) (signed char)-101))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) var_12))))) ? (max((arr_1 [i_0]), (((/* implicit */int) (signed char)-113)))) : (((((/* implicit */int) (signed char)120)) | (((/* implicit */int) (_Bool)0))))))) ? ((~(var_2))) : (min((max((((/* implicit */unsigned long long int) (signed char)127)), (var_8))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) var_3);
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1])), (arr_1 [i_1]))))))), (var_1)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_2])))) ^ (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (var_3)))));
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            var_22 = ((/* implicit */signed char) var_3);
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))));
            var_24 = ((/* implicit */unsigned short) arr_8 [i_2] [i_2]);
        }
        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
        {
            var_25 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4] [i_4 - 1]))));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((var_7) ? (((/* implicit */int) (signed char)-116)) : (((1709916817) / (((/* implicit */int) arr_6 [i_4 - 1])))))))));
            var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_4] [i_4 - 3] [i_4 + 1]))));
            var_28 = ((/* implicit */signed char) (unsigned char)152);
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            var_30 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_5] [i_2] [i_2]))));
        }
        arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))));
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_31 = ((/* implicit */_Bool) max((arr_3 [i_6]), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) || (var_9))))));
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 6; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (int i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_32 = ((max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_12 [i_6] [i_6])) : (((/* implicit */int) (_Bool)1)))))) ^ (((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_20 [i_6])))) ? (((((/* implicit */_Bool) arr_0 [i_9])) ? (var_10) : (var_10))) : (max((arr_16 [i_6]), (2052629553))))));
                        var_33 = (-(((/* implicit */int) max((arr_12 [i_7 - 3] [i_7 + 3]), (arr_12 [i_7 + 4] [i_7 + 1])))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_14 [i_6] [i_6])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_17 [i_9] [i_6]) : (((/* implicit */int) arr_24 [i_6] [i_7 - 2] [i_6] [i_6])))))))))))));
                        var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_26 [i_9 - 1] [i_8])))) ? (((/* implicit */int) arr_26 [i_6] [i_7 + 1])) : (((/* implicit */int) ((signed char) arr_26 [i_9 - 1] [i_9 - 1])))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_13 [i_6] [i_6])) ^ (((/* implicit */int) var_12))))))) ? (max(((-(var_8))), (((/* implicit */unsigned long long int) max(((signed char)-101), (((/* implicit */signed char) var_9))))))) : (max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-96)) <= (arr_20 [i_6]))))))));
    }
    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (signed char)-12)))))));
}
