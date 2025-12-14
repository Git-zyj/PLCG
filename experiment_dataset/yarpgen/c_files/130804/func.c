/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130804
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
    var_10 *= ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_11 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4294967295U)))) % (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */_Bool) var_8);
    }
    for (int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_9);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1 + 1]);
            var_12 = ((/* implicit */int) ((arr_9 [i_1] [i_1] [i_1 - 2]) * (((/* implicit */unsigned int) arr_0 [i_1 - 1]))));
        }
        for (long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            arr_13 [i_1] = min((4294967295U), (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_5 [i_1 - 2] [7U]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))));
            arr_14 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (max((var_4), (((/* implicit */unsigned int) arr_12 [0U] [i_1 - 1] [i_3])))) : (var_4)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        arr_23 [(signed char)6] [i_1] [(unsigned short)8] [i_5] [i_6] [(unsigned char)7] = ((/* implicit */unsigned int) arr_16 [i_1 - 2] [i_4]);
                        arr_24 [i_1] [i_1] [i_1] [i_4] [3LL] [i_6] = ((/* implicit */int) (+(var_0)));
                        arr_25 [i_1 - 1] [i_4] [i_5] [i_6] = (-(((unsigned int) max((arr_17 [(unsigned short)0] [i_5]), (arr_17 [i_1] [i_1 - 4])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) max((var_13), (min((((((/* implicit */_Bool) arr_4 [i_1])) || (((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), ((!(((/* implicit */_Bool) var_7))))))));
                        arr_33 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_2), (((/* implicit */signed char) arr_11 [i_1] [i_7] [i_1 - 4]))))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) 1641830544U)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) max((((arr_31 [i_8] [i_1 + 1] [i_9 - 2] [i_9 - 1]) ? (((/* implicit */int) arr_31 [i_8] [i_1 + 1] [i_9 + 1] [i_9 + 2])) : (((/* implicit */int) var_1)))), (((arr_31 [i_8] [i_1 - 2] [i_9 - 3] [i_9 - 3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_31 [i_8] [i_1 - 2] [i_9 - 1] [i_9 + 2]))))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_2))));
                        }
                        var_16 = ((/* implicit */unsigned short) arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 2]);
                    }
                } 
            } 
            arr_37 [i_1] [i_4] = ((/* implicit */signed char) (-(var_4)));
        }
        arr_38 [0LL] = ((/* implicit */unsigned long long int) (-(max((arr_15 [(_Bool)1]), (((/* implicit */long long int) arr_29 [i_1] [i_1 - 3] [i_1 - 3]))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                {
                    var_17 += ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), ((-(var_8))))) * (((/* implicit */long long int) min(((+(2151238673U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))))));
                    var_18 = var_1;
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */long long int) var_1)), (((max((4428318904714470297LL), (((/* implicit */long long int) (unsigned char)189)))) * (((/* implicit */long long int) 1U)))))))));
                                arr_54 [i_1] [i_12] [i_11] [i_10] [4ULL] [i_10 - 1] [i_13] |= ((/* implicit */unsigned int) arr_42 [(unsigned short)4] [i_12] [(unsigned short)4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) max((var_3), (var_3))))));
}
