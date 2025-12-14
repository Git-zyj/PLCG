/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10494
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
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((_Bool) var_10))), (var_2)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((536870911) + (((/* implicit */int) arr_3 [12LL] [6ULL] [0ULL]))))) ? (((/* implicit */unsigned long long int) 8044960957705308054LL)) : (((unsigned long long int) arr_4 [i_2 - 1] [12] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 3])) && (((/* implicit */_Bool) (signed char)19)))))) * (arr_1 [i_0 + 3]))) : (max((max((arr_0 [i_0 - 1] [i_1]), (arr_0 [21ULL] [i_2 + 1]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 2])) ? (arr_1 [i_2 - 3]) : (((/* implicit */unsigned long long int) 120861509U))))))));
                    arr_8 [i_1] [i_0] [i_2 + 2] [i_0 - 1] = ((/* implicit */unsigned long long int) min((min((arr_2 [i_2 - 4] [i_0 + 2]), (((/* implicit */long long int) min((120861509U), (((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_1]))))))), (((long long int) arr_2 [i_2 - 3] [i_0 + 2]))));
                }
            } 
        } 
        var_14 = ((/* implicit */signed char) min((((((/* implicit */long long int) arr_7 [i_0])) ^ (8044960957705308057LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 8044960957705308061LL)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
        {
            var_15 |= ((/* implicit */long long int) arr_9 [i_3 + 3]);
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned int) arr_2 [i_4] [i_4 + 1]);
                        var_17 = ((/* implicit */int) (+(((arr_6 [i_4] [i_4]) + (arr_11 [i_6])))));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 23; i_9 += 3) 
                {
                    {
                        arr_25 [i_3] [i_8] [i_3] [i_3] = ((long long int) (signed char)-20);
                        var_18 += ((/* implicit */unsigned long long int) ((arr_18 [i_3 + 1]) + (((/* implicit */long long int) arr_9 [i_3 + 3]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_10 = 3; i_10 < 22; i_10 += 4) 
            {
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_7] [i_7 - 2])) / (((/* implicit */int) (signed char)-22))));
                var_20 = ((/* implicit */unsigned long long int) ((long long int) arr_17 [i_10 - 2] [14LL] [i_10 - 2] [i_3]));
            }
            var_21 = ((/* implicit */signed char) ((((2616894040050424373ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [14LL]))))) != (((arr_11 [i_3]) ^ (((/* implicit */unsigned long long int) 1743529752U))))));
            arr_29 [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 + 3])) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 + 1])));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    {
                        arr_39 [i_3] [i_11] [i_11] [i_12 - 2] [i_3] = ((/* implicit */unsigned int) (((~(-8044960957705308051LL))) << (((arr_23 [i_12 - 1] [i_11] [i_3 + 1]) - (2216073108U)))));
                        var_22 = ((/* implicit */_Bool) ((signed char) arr_26 [i_3 + 2] [i_11] [i_12 + 2] [i_13]));
                        arr_40 [i_3 + 1] [i_11] [i_3 + 1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3 + 2])) ? (((unsigned long long int) arr_37 [i_3 - 1] [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((8044960957705308053LL) != (((/* implicit */long long int) arr_17 [i_3 + 2] [i_11] [i_12] [i_13]))))))));
                        arr_41 [i_11] [3ULL] [i_13] = ((/* implicit */long long int) var_9);
                        arr_42 [(unsigned char)10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) ((arr_3 [i_3 + 1] [i_13] [i_3 + 2]) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_12] [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3 + 1] [i_12] [i_3 + 1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(arr_0 [i_3 + 3] [i_3 + 2]))))));
        }
        arr_43 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [20U] [i_3 + 3] [20U])) ? (((/* implicit */unsigned long long int) ((long long int) arr_27 [3LL]))) : (arr_10 [i_3 + 3])));
    }
    var_24 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_4)));
    var_25 = ((/* implicit */long long int) min(((-(var_1))), (((/* implicit */unsigned long long int) 8044960957705308066LL))));
}
