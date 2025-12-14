/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138727
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), ((((!(arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), (var_6))))) : (((((/* implicit */_Bool) -1LL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_16 = ((/* implicit */_Bool) (-(0ULL)));
            var_17 = ((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-126126802)))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_19 [i_0] [i_2] [(signed char)15] [i_0] = ((/* implicit */unsigned int) min((min((min(((signed char)12), ((signed char)0))), ((signed char)-19))), (((/* implicit */signed char) (!(((/* implicit */_Bool) min(((unsigned char)125), (((/* implicit */unsigned char) (signed char)-32))))))))));
                        var_18 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_15))))));
                    }
                } 
            } 
            arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (((~(2361798141U))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_18 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */short) (signed char)32))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                arr_25 [i_5] &= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_23 [i_5])))));
                var_19 = arr_23 [i_0];
                var_20 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */short) var_8))))), (min((var_4), (((/* implicit */unsigned long long int) 130023424))))))));
                arr_26 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)15)), (var_12)))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_6])))))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [(short)7]))) : (777461693059681516LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 33550336)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) arr_16 [i_0] [i_5] [i_6] [(signed char)2] [16ULL]))))))))));
            }
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(var_9)))), (777461693059681499LL)))) ? (max((((/* implicit */unsigned long long int) ((signed char) var_8))), (min((18446744073709551602ULL), (7448234055158263649ULL))))) : (((/* implicit */unsigned long long int) var_10))));
        }
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_33 [i_7] = ((/* implicit */long long int) ((signed char) (_Bool)1));
            var_22 = ((/* implicit */short) 119029284U);
        }
        var_23 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) -33550330)), (arr_28 [i_7])))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_24 ^= ((/* implicit */signed char) ((int) (-(arr_9 [(_Bool)1] [i_9] [i_9]))));
        var_25 = ((/* implicit */unsigned int) arr_5 [i_9] [i_9] [i_9]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            var_26 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_10] [i_9])) >= (var_13)))) % ((-(var_9)))));
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9])) >> (((((/* implicit */int) (signed char)87)) - (60))))))));
            var_28 = ((/* implicit */_Bool) (-(var_9)));
            arr_39 [i_9] [i_10] = ((/* implicit */unsigned int) arr_6 [i_10] [(unsigned short)8]);
        }
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_29 = ((/* implicit */signed char) arr_17 [i_11]);
            var_30 = ((/* implicit */unsigned long long int) (signed char)-1);
        }
    }
    /* vectorizable */
    for (unsigned int i_12 = 1; i_12 < 15; i_12 += 4) 
    {
        arr_44 [i_12] = ((arr_10 [i_12]) >> ((((+(((/* implicit */int) (signed char)-102)))) + (151))));
        var_31 = ((/* implicit */long long int) arr_12 [i_12] [(signed char)3]);
        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_3 [i_12])))));
    }
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) 4175938012U);
                    var_34 &= ((/* implicit */unsigned int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_14]))))) & (var_13))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (signed char)8))))) : (min((-1079732431), (((/* implicit */int) (signed char)1))))))));
                }
            } 
        } 
        var_35 *= ((/* implicit */short) min((((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (signed char)0)), (arr_14 [i_13]))) > (var_4)))), (((((((/* implicit */_Bool) 14809562846223669464ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : (9U))) << ((((+(119029284U))) - (119029278U)))))));
    }
}
