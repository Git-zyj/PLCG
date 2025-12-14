/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175137
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) var_14);
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0 + 3] [i_0]);
        var_18 = ((/* implicit */long long int) (signed char)99);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) arr_1 [i_0]);
                        var_20 = ((/* implicit */short) (~(var_12)));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) var_2);
            var_22 = ((/* implicit */long long int) arr_8 [i_4] [i_4] [i_4] [i_4]);
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_4]), (((/* implicit */int) arr_1 [i_4]))))) ? ((~(arr_0 [i_4] [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_9 [(_Bool)1]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */signed char) (-(arr_5 [i_4 - 1] [i_4] [i_4] [i_4 - 1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                var_26 = (+(arr_8 [i_4] [i_6] [i_4] [i_4]));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_9 + 1] [i_4 - 1])) ? (arr_10 [i_9 - 1] [i_4 - 1]) : (arr_10 [i_9 - 3] [i_4 - 1]))) - (((((/* implicit */_Bool) arr_10 [i_9 - 3] [i_4 - 1])) ? (arr_10 [i_9 + 1] [i_4 - 1]) : (arr_10 [i_9 - 2] [i_4 - 1]))))))));
                            var_28 -= ((/* implicit */short) arr_6 [i_7] [i_6] [i_7]);
                            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-99)) < (((/* implicit */int) (signed char)99)))) ? (max((((/* implicit */long long int) 2147483647)), (arr_11 [i_9 - 3] [i_9 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107)))));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */signed char) var_1);
            var_31 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-100))));
        }
        for (long long int i_10 = 1; i_10 < 15; i_10 += 3) 
        {
            var_32 = ((/* implicit */unsigned long long int) var_4);
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                var_33 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_10] [i_11] [i_4] [i_10 - 1] [i_11])) ? (((/* implicit */int) arr_1 [i_11])) : (((/* implicit */int) arr_1 [i_11])))))));
                var_34 |= ((/* implicit */unsigned long long int) -2147483647);
                var_35 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_28 [i_4] [i_10 + 1])), (arr_4 [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4 - 1] [i_11])) ? (arr_15 [i_4] [i_4 - 1] [i_10 + 1]) : (((/* implicit */int) arr_23 [i_11] [i_4] [i_11] [i_11] [i_10 + 1] [i_4] [i_10 + 2])))))));
                var_36 = ((/* implicit */short) arr_16 [i_4]);
            }
        }
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_4 - 1] [(unsigned short)0]) <= ((-(arr_29 [i_4] [14LL]))))))))))));
        var_38 = ((/* implicit */signed char) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    var_39 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            {
                var_40 = ((-1359883735427486741LL) & (((/* implicit */long long int) 449763469)));
                var_41 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (arr_11 [i_12] [i_13]) : (arr_11 [i_13] [i_12]))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_12] [i_13]))))))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_13] [i_13] [5LL])))))) ^ (arr_24 [i_12] [i_13])));
                var_43 = ((/* implicit */short) (+(((min((((/* implicit */long long int) var_14)), (-1359883735427486741LL))) * (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) arr_3 [i_13]))))))))));
            }
        } 
    } 
    var_44 = ((/* implicit */int) var_15);
}
