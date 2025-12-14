/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187839
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -770792948)) * (15864800761118960637ULL)));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [(unsigned char)6])))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))) * ((~(arr_3 [(unsigned short)1] [9] [i_0])))))) * ((-(arr_2 [i_0])))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) - (arr_2 [(_Bool)1])));
            var_15 = ((/* implicit */unsigned short) 3039442610524239996LL);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_3);
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((-721357301), (((/* implicit */int) (unsigned short)63476))));
            var_16 = ((/* implicit */int) arr_8 [i_2] [i_0]);
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) max((((arr_7 [i_0] [i_0] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) arr_0 [i_0]))));
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                var_17 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((arr_1 [(unsigned short)0]), (arr_1 [(short)4]))))));
                arr_13 [(signed char)10] [i_2] [(unsigned char)6] [i_2] &= var_9;
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (var_2))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_3 - 3] [i_3 - 1]))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_3]))) - (((/* implicit */unsigned long long int) 7942459168268975016LL))))) ? (((int) arr_1 [i_0])) : (((arr_5 [i_3 + 1] [i_3 + 1]) - (arr_5 [i_3 + 1] [i_3 - 3])))));
            }
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(arr_8 [i_0] [i_0])))), (min((((/* implicit */long long int) var_5)), (arr_7 [5] [i_0] [10ULL])))))) - (max((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63476)))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_21 ^= ((/* implicit */unsigned char) 0ULL);
        arr_17 [i_4] &= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)226))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [(unsigned short)2] [i_5] [i_5])) - (((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))))));
        }
        for (short i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) arr_19 [(unsigned char)0] [i_6 + 2] [i_6 - 1]);
            var_25 = ((/* implicit */signed char) arr_19 [i_6 + 3] [i_4] [i_4]);
            var_26 = ((/* implicit */unsigned short) arr_14 [i_6]);
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_18 [i_6 - 1] [10] [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_18 [(unsigned char)4] [(unsigned char)4] [i_6]))))));
        }
        arr_24 [i_4] = ((/* implicit */unsigned char) ((_Bool) arr_16 [i_4] [i_4]));
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_28 [i_8 - 1] [i_7 + 1] [i_7] [i_7 - 1])) : (((/* implicit */int) arr_28 [i_8 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))))));
                    arr_29 [i_8] [i_8] [i_8] = (!(((/* implicit */_Bool) (signed char)3)));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((unsigned char) (unsigned char)209))) - ((-(((/* implicit */int) (unsigned char)226)))))), (max(((+(((/* implicit */int) (unsigned char)184)))), (((arr_30 [i_9] [i_9]) - (((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                {
                    var_29 = var_0;
                    var_30 ^= var_3;
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                arr_44 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_33 [i_13] [i_12])));
                arr_45 [i_12] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max(((unsigned char)184), ((unsigned char)15)))) ? (max((((/* implicit */int) arr_16 [i_13] [0])), (arr_12 [i_13] [i_12] [i_13] [i_12]))) : (((((/* implicit */int) arr_15 [i_13])) * (((/* implicit */int) var_8)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) ((unsigned long long int) (+(var_7))));
}
