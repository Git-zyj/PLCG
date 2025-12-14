/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115047
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
    var_16 |= ((/* implicit */unsigned char) max((1203020383427272787ULL), (((/* implicit */unsigned long long int) var_7))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (short)-1))) ? ((~(-751547165267942937LL))) : (((/* implicit */long long int) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_2] [i_2] [i_1] [i_0]))))));
                            var_19 |= ((/* implicit */short) arr_6 [i_0] [i_1] [i_0] [i_0]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                                arr_10 [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) var_14)) : (2147483647)));
                            }
                            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                var_21 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_3])))) ? (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_1 - 3] [i_3]) != (arr_6 [i_1] [i_1] [i_1 + 2] [i_3])))) : ((~(((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                                var_22 = ((/* implicit */unsigned int) (short)-1);
                                var_23 = ((/* implicit */short) var_0);
                            }
                            var_24 = ((/* implicit */signed char) ((((((var_11) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_3] [i_3]))))) != (arr_0 [i_0]))) ? (((((/* implicit */_Bool) max((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) (signed char)-126))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)62)) > (1170512046)))) : ((~(((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        arr_15 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned short) (short)-2)), ((unsigned short)7))))), (((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (2960437955U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_6])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    {
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (arr_16 [i_6])));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_27 ^= arr_20 [i_6] [i_6] [i_9];
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_4))))));
                        }
                        var_29 = ((/* implicit */unsigned char) arr_19 [i_6]);
                        var_30 += ((/* implicit */signed char) ((_Bool) (_Bool)1));
                        var_31 = ((/* implicit */unsigned char) (short)2);
                    }
                } 
            } 
            arr_26 [i_6] [i_7] [i_7] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_6]))));
        }
        for (short i_11 = 2; i_11 < 17; i_11 += 1) 
        {
            var_32 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_20 [i_11] [i_11 - 2] [i_11 - 2])), (((arr_28 [i_11 - 1] [i_11 - 2]) % (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) max((((/* implicit */long long int) arr_14 [i_6])), (((((long long int) arr_25 [i_6] [i_11] [i_12])) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))))))))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11])) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (((unsigned long long int) arr_22 [i_11])))) : (((/* implicit */unsigned long long int) arr_28 [i_13] [i_12]))));
                    }
                } 
            } 
            arr_36 [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) < (2147483647))) ? (((((((/* implicit */int) (short)-2)) <= (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((unsigned char) arr_33 [i_6] [i_6] [i_11 + 1] [i_11] [i_11 + 1] [i_11]))) : (((/* implicit */int) ((unsigned char) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4225245804U)))))));
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [i_6])) ? (((/* implicit */int) arr_31 [i_11 - 2])) : (((/* implicit */int) arr_31 [i_6])))) * (((/* implicit */int) ((unsigned short) arr_21 [i_6] [i_11 + 1] [i_11 + 1] [i_11]))))))));
        }
    }
}
