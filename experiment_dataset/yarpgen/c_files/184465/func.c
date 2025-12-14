/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184465
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_11 += ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_12 -= ((/* implicit */signed char) (-(-5284304751685993784LL)));
                        var_13 = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2 - 1] [i_2]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) var_3);
                        var_14 = ((/* implicit */signed char) ((5284304751685993783LL) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0 + 3])))));
                        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [5ULL]);
                        arr_14 [i_0] [i_1 - 1] [i_2] [i_4] [i_4] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_1 + 1] [i_4]))));
                    }
                    arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_10 [i_1 - 1] [i_1 - 1] [i_2] [i_2])), (var_0)))) ? (((arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]) / (((((/* implicit */_Bool) arr_12 [i_2] [i_1 + 1] [i_1] [i_0 - 2] [i_0 - 1])) ? (arr_5 [(unsigned char)1] [i_1 + 1] [i_1 + 1] [i_0 + 2]) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [8LL])) ? (5284304751685993768LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_16 = ((/* implicit */signed char) arr_19 [i_6]);
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) arr_2 [i_5]);
                var_18 = ((/* implicit */signed char) arr_4 [i_5] [i_5] [i_5]);
            }
            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
            {
                var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_8 - 1] [i_8 + 1] [i_5]))));
                arr_26 [i_8] [i_8] [i_8 + 1] = ((/* implicit */unsigned long long int) arr_6 [i_5] [i_5]);
            }
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_20 += ((/* implicit */unsigned char) (-(-5284304751685993782LL)));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) ? (6722457254266854363ULL) : (arr_22 [10LL] [(signed char)12] [i_5]))))));
                var_22 = ((/* implicit */signed char) arr_5 [i_5] [i_5] [i_5] [(signed char)1]);
            }
        }
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (long long int i_11 = 2; i_11 < 15; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_13 = 3; i_13 < 15; i_13 += 2) /* same iter space */
                        {
                            arr_40 [i_5] [14LL] [i_11] [0ULL] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15864843746174900723ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (5281326811822533024ULL)));
                            var_23 = ((/* implicit */unsigned char) (signed char)-75);
                            arr_41 [i_5] [i_10] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_10] [i_11] [i_10] [i_10]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)156)) ? (arr_23 [i_5] [i_11] [i_12]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_1 [i_10] [i_12])) : (15864843746174900723ULL)))));
                        }
                        for (signed char i_14 = 3; i_14 < 15; i_14 += 2) /* same iter space */
                        {
                            arr_44 [i_5] [i_14] [i_11] [i_12] [i_14] [i_14] = ((/* implicit */long long int) var_6);
                            var_25 ^= var_2;
                            var_26 = ((/* implicit */signed char) (-(arr_34 [i_5] [(unsigned char)3] [i_11 - 2])));
                            var_27 = ((/* implicit */long long int) arr_38 [i_14] [i_14 - 1] [i_14 - 2] [i_14 - 3] [(unsigned char)9] [i_14 - 3]);
                        }
                        for (signed char i_15 = 3; i_15 < 15; i_15 += 2) /* same iter space */
                        {
                            arr_47 [i_12] [i_15] [i_11] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (unsigned char)225);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_11 - 1] [i_11 + 2])) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_1))))));
                        }
                        var_29 &= ((/* implicit */long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)209))));
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */unsigned char) (~(arr_27 [i_5] [(signed char)10])));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            for (unsigned char i_17 = 2; i_17 < 16; i_17 += 1) 
            {
                {
                    var_31 = 5643195756090176355LL;
                    var_32 = ((/* implicit */unsigned long long int) arr_35 [i_17 + 1] [i_5] [i_5] [i_5]);
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_5] [i_16]))))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_6)))))));
                    var_34 = ((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]);
                    arr_53 [i_16] [(signed char)5] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_5] [(signed char)3] [i_17 + 1]))));
                }
            } 
        } 
    }
}
