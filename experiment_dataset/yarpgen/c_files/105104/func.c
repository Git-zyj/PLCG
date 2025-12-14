/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105104
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
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned int) max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((arr_0 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min((((unsigned int) arr_6 [i_1] [i_1] [i_1 - 2] [0LL])), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
                        var_18 ^= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((unsigned int) min((min((arr_3 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) var_2)))), (arr_3 [i_1] [i_3]))));
                        var_19 = ((/* implicit */signed char) var_12);
                    }
                } 
            } 
        } 
        var_20 &= ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_11 [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) arr_12 [i_4]);
        var_21 *= ((/* implicit */signed char) ((unsigned char) ((unsigned int) var_14)));
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_19 [i_5] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) 1771867315))), (min((var_13), (((/* implicit */unsigned long long int) arr_12 [i_5]))))));
        var_22 &= ((/* implicit */long long int) max((((signed char) arr_1 [i_5] [i_5])), (((/* implicit */signed char) ((_Bool) arr_1 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
    {
        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_8 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_6] [i_6 + 1] [i_6 - 1]))));
        arr_23 [i_6 + 1] = (!(((/* implicit */_Bool) arr_12 [i_6 - 1])));
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) (+(((int) (unsigned short)3624))));
        arr_27 [i_7] = ((/* implicit */signed char) ((int) arr_24 [i_7]));
        var_26 = ((/* implicit */unsigned char) var_5);
    }
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_8])))) - ((+(arr_24 [i_8])))))), (min((((var_13) - (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_12 [i_8]))))));
        var_28 *= (+(min((((/* implicit */unsigned long long int) (-(arr_28 [2LL])))), (max((var_13), (((/* implicit */unsigned long long int) arr_12 [i_8])))))));
    }
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        arr_34 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_26 [i_9] [i_9])), (arr_21 [i_9] [i_9]))), ((-(arr_3 [i_9] [i_9])))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_13 [i_9] [i_9]))))));
        /* LoopNest 2 */
        for (long long int i_10 = 4; i_10 < 14; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_30 = ((/* implicit */_Bool) arr_36 [i_11] [i_10 - 4] [i_9]);
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 3; i_12 < 13; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((min((arr_28 [i_9]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((unsigned short) var_2)))))), (arr_31 [i_11] [i_11])));
                                var_32 += ((/* implicit */signed char) min((((_Bool) var_0)), ((!((!(((/* implicit */_Bool) arr_41 [i_9]))))))));
                                var_33 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (max((arr_0 [i_10 - 4] [i_10 - 2]), (arr_0 [i_10 - 4] [i_10 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_31 [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_35 [i_12] [i_10] [i_12])))))))))));
                                arr_45 [i_9] [i_9] [i_9] [i_9] [i_9] |= (+(((/* implicit */int) var_2)));
                                var_34 = ((/* implicit */unsigned int) (+(min((arr_5 [i_10 + 2] [(_Bool)1] [i_10] [i_12 - 3]), (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_38 [i_9] [i_9] [i_10 - 4] [i_10 - 1])), (var_7))))));
                }
            } 
        } 
    }
}
