/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174323
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
    var_17 = ((_Bool) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((arr_3 [i_0] [i_3]) >= (arr_3 [i_0] [i_1 - 2])));
                            var_20 = ((/* implicit */_Bool) ((signed char) (signed char)122));
                            var_21 ^= ((/* implicit */int) ((_Bool) arr_3 [i_3] [i_1 + 1]));
                        }
                    } 
                } 
            } 
            var_22 -= (-(((unsigned long long int) 5094710356248369313ULL)));
            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-122))));
            var_24 = arr_4 [i_0] [i_0] [i_0];
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65509))));
        }
        var_26 = ((/* implicit */int) var_8);
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((arr_8 [i_0] [(_Bool)1] [i_0] [10LL] [i_0]) < (((arr_0 [(short)10]) >> (((/* implicit */int) (_Bool)0)))))))));
        var_28 ^= ((/* implicit */unsigned int) var_15);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        arr_24 [2LL] [2LL] [i_6 - 1] [i_5] = ((/* implicit */signed char) ((unsigned int) (signed char)-113));
                        arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (short)31379))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 5094710356248369299ULL))))))) == (max(((~(((/* implicit */int) arr_19 [i_9] [i_5] [i_7] [14ULL])))), (((/* implicit */int) arr_27 [i_5] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]))))));
                            var_30 |= ((/* implicit */_Bool) ((long long int) max(((signed char)123), (((/* implicit */signed char) (_Bool)1)))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_31 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 5094710356248369313ULL)) ? (((/* implicit */int) (unsigned short)15303)) : (((/* implicit */int) (unsigned short)50213))))));
                            var_32 &= ((/* implicit */unsigned short) max((max((-8021895934297613735LL), (((/* implicit */long long int) -38824069)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_26 [i_5] [i_6 - 1] [i_7] [i_7] [i_10] [i_8] [i_5]))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] &= (((~(arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) ^ (((/* implicit */int) (_Bool)1)));
                            arr_32 [i_5] &= ((/* implicit */short) arr_28 [i_7] [i_6]);
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_35 [i_5] [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_26 [i_8] [i_6 - 1] [i_7] [i_8] [i_6 - 1] [i_5] [i_11]), (((/* implicit */unsigned short) var_3))))), (max((-8982173628316763193LL), (((/* implicit */long long int) var_12))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) (short)14283)) - (14247)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 1] [i_6] [i_7] [i_8]))) | (var_1))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)20738)), (1407804951U))))));
                        }
                    }
                } 
            } 
        } 
        arr_36 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1313862871) : (((/* implicit */int) arr_13 [i_5] [i_5])))))) & (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5])) + (((/* implicit */int) (unsigned short)8124))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-30172)) : (var_13))) : (((/* implicit */int) ((signed char) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) - ((-(var_11)))));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (unsigned short)15292))));
        var_36 ^= (-(((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(signed char)2])) ? ((-(var_9))) : (var_1))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13352033717461182316ULL)))))) + (((((/* implicit */_Bool) var_3)) ? (var_5) : (5094710356248369304ULL)))));
        /* LoopNest 3 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (int i_15 = 3; i_15 < 15; i_15 += 3) 
                {
                    {
                        arr_47 [i_12] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (5094710356248369299ULL)));
                        var_38 *= ((/* implicit */signed char) (unsigned short)44797);
                        var_39 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */int) arr_23 [i_12] [i_13 - 1] [i_14] [i_12])) : (((int) var_8))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_13 - 1] [i_12])) ? (((/* implicit */int) arr_13 [i_12] [i_12])) : (((/* implicit */int) arr_42 [i_13 - 1] [i_12] [i_12] [i_12]))));
                        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */_Bool) (-(var_1)));
}
