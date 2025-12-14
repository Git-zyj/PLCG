/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14521
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_19 += ((/* implicit */unsigned long long int) (signed char)57);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                arr_9 [i_2] [i_2] [i_3] = (((_Bool)1) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)62)));
                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)100))));
            }
            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                var_21 |= ((/* implicit */unsigned char) (~(-8754394776080077127LL)));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 506205211973821363LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_12 [(signed char)0] [i_2] [i_2]))) >= (((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                arr_15 [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_10)))) * (((var_17) ^ (var_5)))));
                var_23 *= ((/* implicit */short) var_1);
                var_24 = ((/* implicit */unsigned int) min((var_24), (arr_11 [i_1] [i_1] [i_1] [i_1])));
                arr_16 [i_5] [(signed char)1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) != ((-9223372036854775807LL - 1LL)))));
            }
            for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
            {
                arr_19 [i_1] [4LL] = ((/* implicit */unsigned int) var_12);
                var_25 = ((/* implicit */_Bool) ((2147483647) ^ (((/* implicit */int) var_18))));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_23 [i_7] [i_6] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_6 + 3] [10]))));
                    arr_24 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((-152366164) <= (((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)4] [(short)4]))))))));
                    var_26 = ((/* implicit */unsigned long long int) (((+(152366163))) >> (((/* implicit */int) ((_Bool) (unsigned char)100)))));
                }
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    arr_29 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [5U] = ((/* implicit */signed char) (-(((((/* implicit */int) var_12)) >> (((((/* implicit */int) (signed char)-1)) + (2)))))));
                    var_27 = ((/* implicit */unsigned long long int) var_11);
                    var_28 = ((/* implicit */short) (~(((/* implicit */int) ((short) 467482883U)))));
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        {
                            arr_38 [i_10] [i_10] [i_11] [5ULL] [i_10] [i_11] [i_10] = (+(((/* implicit */int) arr_7 [i_11] [i_11])));
                            var_29 = ((((var_5) + (2147483647))) << (((((/* implicit */int) var_18)) - (41))));
                            arr_39 [(short)5] [9U] [i_9] [i_9] [i_11] [i_11] = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        arr_40 [i_1] = ((/* implicit */_Bool) 2147483647);
    }
    /* LoopNest 3 */
    for (long long int i_12 = 2; i_12 < 16; i_12 += 1) 
    {
        for (signed char i_13 = 2; i_13 < 15; i_13 += 1) 
        {
            for (signed char i_14 = 1; i_14 < 15; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) (-(2094567181U)));
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_13 + 2])) || (var_10))))) : ((+(var_15))))))));
                }
            } 
        } 
    } 
    var_32 ^= ((/* implicit */unsigned int) var_10);
}
