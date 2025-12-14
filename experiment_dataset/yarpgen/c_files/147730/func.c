/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147730
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -1243636105)) ? (((/* implicit */long long int) -1867113964)) : (0LL))))), (max((((/* implicit */unsigned short) ((signed char) arr_1 [i_0]))), (var_3)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) max((max((var_0), (((/* implicit */unsigned short) arr_1 [i_0])))), (((/* implicit */unsigned short) arr_1 [i_0])))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_1)))) : ((~(-1243636105)))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [(signed char)10])) : (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) var_1)) : (1243636099)));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_14 += ((/* implicit */unsigned int) var_10);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] = max((arr_9 [i_1] [i_1]), (((/* implicit */int) var_1)));
            var_15 += ((/* implicit */signed char) var_11);
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_13 [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (((unsigned short) min((((/* implicit */unsigned short) var_9)), (var_4))))));
            var_16 = arr_4 [20ULL];
            arr_14 [i_1] [(signed char)16] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3]))) : (min((var_7), (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((14U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_2))));
                var_18 &= ((/* implicit */signed char) max((min((min((var_6), (var_6))), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) arr_12 [i_1] [i_3] [(unsigned short)18]))));
                var_19 *= ((/* implicit */short) (!(var_5)));
            }
        }
        arr_19 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65514)), (18446744073709551606ULL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_18 [20] [i_5] [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_5]))))))))));
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_22 [i_1])) ? (((/* implicit */int) var_3)) : (arr_4 [i_1])))))) ? (arr_5 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (var_6))))));
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_2))))))) ? (arr_9 [i_6] [(short)5]) : (((/* implicit */int) arr_8 [i_6]))));
            arr_27 [i_6] [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) max((((/* implicit */short) var_5)), (arr_8 [(unsigned char)7]))))))));
        }
        var_22 = ((/* implicit */unsigned char) ((arr_4 [17ULL]) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    }
    for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        arr_32 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_7] [i_7 + 1] [i_7 - 1])), (var_7)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_7 - 1]) : (((/* implicit */unsigned long long int) arr_7 [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7 - 1])))));
        /* LoopSeq 2 */
        for (signed char i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            arr_35 [i_7] = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7))))))));
            arr_36 [i_7] = ((/* implicit */unsigned int) var_0);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_6))));
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_3)), (var_7))) * (((/* implicit */unsigned long long int) (-(arr_7 [7U]))))))) ? (arr_37 [(short)3] [i_9] [(short)3]) : (((((/* implicit */_Bool) arr_7 [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7 - 1]))) : (arr_7 [i_7 - 1]))))))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (int i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 8; i_12 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) arr_20 [i_9] [i_11] [i_12]);
                            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((4164183085U), (2U))), (((/* implicit */unsigned int) arr_6 [i_7 - 1] [(unsigned short)4]))))) ? (arr_7 [i_9]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            } 
            var_27 -= ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_33 [i_7 - 1])), (max((((/* implicit */unsigned short) var_10)), (var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */int) var_8)) : (((arr_34 [i_9]) ? (((/* implicit */int) arr_18 [i_7] [i_7 - 1] [i_7] [i_9])) : (((/* implicit */int) arr_1 [i_7]))))))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_7] [i_7 + 1] [i_7]))) : (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            var_29 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_43 [i_7] [i_7] [i_7] [i_7])))), ((!(var_5)))));
        }
        arr_49 [i_7] = ((/* implicit */unsigned int) min((1243636104), (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 9; i_13 += 3) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_54 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) min((var_11), ((~(9U)))));
                    var_30 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    }
}
