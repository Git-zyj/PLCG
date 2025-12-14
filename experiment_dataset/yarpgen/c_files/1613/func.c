/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1613
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((unsigned long long int) arr_4 [(short)0] [i_0 - 2] [i_0 + 1])) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20539))))))));
                var_11 = ((unsigned int) ((((/* implicit */int) (short)20552)) != (((/* implicit */int) (short)20552))));
                var_12 = ((min((0ULL), (((/* implicit */unsigned long long int) (short)20539)))) - (((/* implicit */unsigned long long int) arr_4 [i_0] [5ULL] [i_0 + 1])));
                arr_6 [10ULL] [i_1] &= ((long long int) min(((~(arr_4 [6LL] [i_0] [i_0]))), (((/* implicit */unsigned int) ((-117568341) | (((/* implicit */int) (signed char)15)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(0U))) | (min((((/* implicit */unsigned int) var_9)), (arr_14 [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 + 1] [i_5 - 1] [i_5 - 1] [i_5] [i_4 - 1]))))) : ((-(max((-117568341), (((/* implicit */int) (short)-22885))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2] [19LL] [(unsigned short)0] [i_4 + 2])) ? (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_6] [11LL] [i_6 - 1] [i_6 - 1] [i_6]))))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [9]))) + (arr_13 [i_2] [i_3] [i_5])));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_6] [i_6 + 1] [i_4 - 1] [i_3]))));
                        }
                        var_18 = ((/* implicit */unsigned short) ((long long int) (~(((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */unsigned int) -117568327)) : (524160U))))));
                        var_19 = ((/* implicit */unsigned short) arr_17 [i_2] [19]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) arr_7 [i_8] [(signed char)12]);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_27 [i_2]) ^ (((/* implicit */unsigned long long int) arr_10 [13LL] [i_7])))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (short)20539)) : (((/* implicit */int) (short)0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)20552)), (arr_14 [(signed char)13])))) ? (((((/* implicit */_Bool) -117568341)) ? (((/* implicit */int) (unsigned char)135)) : (-776647491))) : (((/* implicit */int) arr_20 [i_2]))))) : ((+(((((/* implicit */unsigned long long int) arr_9 [i_7] [i_2])) ^ (var_2)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) ((arr_23 [i_10] [i_10] [i_10]) << (((arr_23 [i_10] [i_10] [4ULL]) - (20308682195400939ULL)))))) ? (((unsigned long long int) arr_23 [i_10] [i_10] [i_10])) : ((~(arr_23 [i_10] [(short)3] [i_10])))))));
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 19; i_11 += 1) 
        {
            for (long long int i_12 = 4; i_12 < 16; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 18; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [11] [14U] [i_11])) ? (arr_32 [i_10]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_10] [(short)2] [i_10] [i_10] [i_13] [i_10]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_34 [i_10] [i_13] [i_14]) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_31 [i_12] [(short)6] [i_12]))))))));
                                arr_41 [i_11] [i_12] [i_12] [i_12] [i_11] [(unsigned short)12] [i_11] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-77)) + (((/* implicit */int) (unsigned char)28))))) + (max((((/* implicit */unsigned long long int) (signed char)66)), (var_2))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)77)) ? (4620920772456258776LL) : (-4789779199815354874LL))))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((max((min((((/* implicit */unsigned long long int) arr_34 [i_10] [(unsigned short)15] [i_10])), (arr_37 [i_12] [6LL] [i_12] [i_13] [i_14] [i_10]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-16)), (arr_14 [19U])))))) * (max((arr_21 [i_13] [i_11 + 1] [i_12] [i_12] [i_13] [i_11 + 1]), (((/* implicit */unsigned long long int) max((arr_28 [i_13 - 1]), (((/* implicit */long long int) var_0))))))))))));
                                var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 155086895U)), (var_7))) << (((((min((var_8), (((/* implicit */long long int) (short)20565)))) + (2974395899491051412LL))) - (1LL)))))), (((((/* implicit */_Bool) ((arr_36 [i_10] [11U] [i_12] [i_11] [i_11] [i_11]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)20565)))))) ? (((/* implicit */unsigned long long int) arr_11 [i_10] [(unsigned short)7] [i_12])) : (((unsigned long long int) 0ULL))))));
                                var_26 = ((/* implicit */long long int) (-(((arr_22 [i_10] [i_12 - 4]) - (arr_22 [i_10] [i_11 - 1])))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-20540)) ? (((/* implicit */int) (short)-20529)) : (((/* implicit */int) (signed char)89)))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 8540149410496533391LL)) <= (min((((/* implicit */unsigned long long int) 3303883436575041480LL)), (max((((/* implicit */unsigned long long int) var_4)), (0ULL)))))));
}
