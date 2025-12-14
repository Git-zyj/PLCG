/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105421
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_9 [15U] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_1] [15ULL] [i_1])), (var_5)))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((-2546515896606103815LL) - (((/* implicit */long long int) var_4))))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_4 [i_0] [(signed char)19]))))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (var_2))))));
                        arr_10 [i_3] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (min((2546515896606103814LL), (((/* implicit */long long int) (unsigned short)65514))))))));
                        arr_11 [i_3] [(unsigned char)5] = ((/* implicit */signed char) var_7);
                        var_11 = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_3]))))), ((+(max((var_9), (((/* implicit */long long int) arr_6 [i_0]))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) max((var_12), (min((((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_0])) + (74))) - (22))))), (((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) < ((~(((/* implicit */int) var_1)))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_15 [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4])) ? (var_6) : (((/* implicit */int) (signed char)-11))));
        /* LoopSeq 4 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_5])) ? (((/* implicit */int) arr_12 [i_5])) : (arr_14 [i_5])));
            arr_18 [(unsigned char)17] [(unsigned char)17] [(unsigned char)4] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) ? (2546515896606103800LL) : (((/* implicit */long long int) 134217712U))));
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
        {
            arr_22 [i_4] [i_6] = ((/* implicit */_Bool) arr_14 [i_6]);
            var_14 = ((((/* implicit */_Bool) arr_12 [i_6])) ? (arr_17 [i_4] [i_4]) : (arr_17 [i_4] [i_6]));
        }
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) arr_14 [i_4]);
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(5168045602679417550LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4])))));
        }
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
        {
            var_17 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_24 [i_4] [i_8])))) * (((/* implicit */int) (unsigned short)0))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                var_18 = (-(((long long int) arr_2 [i_8])));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            arr_37 [i_8] [i_8] [i_9] [i_10] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (0ULL)));
                            arr_38 [i_4] [i_8] [i_4] [i_10] [i_11] [i_11] &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_6 [i_4])))) > (((/* implicit */int) arr_7 [i_4] [i_8] [i_9]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    for (signed char i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (~(arr_36 [i_8] [i_12] [i_9])));
                            var_20 = ((/* implicit */unsigned char) 134217712U);
                            arr_45 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_13 + 1])) ? ((+(((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)101))))) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) var_2))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_4] [i_8] [i_8] [i_4] [i_8])) ? (((/* implicit */int) arr_29 [i_4] [i_8] [i_4])) : (((((/* implicit */_Bool) arr_4 [i_8] [(signed char)20])) ? (((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [(signed char)13])) : (-330505692)))));
        }
    }
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (signed char)-64)) * (((int) -8)))));
    var_24 *= ((/* implicit */_Bool) max((((((/* implicit */int) var_1)) >> (((var_9) + (2017703872214207831LL))))), (((int) var_4))));
}
