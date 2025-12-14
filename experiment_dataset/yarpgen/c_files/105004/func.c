/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105004
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_18 = arr_5 [i_0] [i_1];
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (arr_3 [i_0]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)8))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) (_Bool)0))))) : (-1474774279)));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) arr_1 [i_3]);
                            arr_16 [i_1] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_3] [i_2] [i_0] [i_0]))) : (var_11));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) == (var_8))))));
                            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_3] [i_3]))));
                            var_23 |= ((/* implicit */unsigned char) arr_6 [i_0] [i_3] [i_3]);
                        }
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (signed char)20))));
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */int) ((((((var_11) + (9223372036854775807LL))) >> (((arr_11 [i_2] [i_2] [i_6 - 1] [i_6]) - (5223865289566524314LL))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_6 + 1] [i_1])) != (((/* implicit */int) arr_12 [i_0] [i_1] [i_6 + 1] [i_6]))))))));
                        var_26 = ((/* implicit */long long int) var_17);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (var_15))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_0] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_0] [i_6 + 1]))) : (var_6)))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [i_2] [i_0] [i_1] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_7]))) : (19LL)));
                            var_28 = ((((/* implicit */_Bool) arr_3 [i_6 - 1])) ? (arr_6 [i_6 - 1] [i_1] [i_7]) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_6 - 1] [i_6] [i_7])));
                            var_29 *= ((0) != (((/* implicit */int) var_7)));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((4194303LL) >> (((((/* implicit */int) (signed char)-28)) + (91))))))));
                            var_31 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_6 + 2]))))), (((((/* implicit */_Bool) arr_3 [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), ((_Bool)1))))) : (((unsigned int) arr_22 [i_1] [i_2] [i_2] [i_2]))))));
                            arr_29 [i_0] [i_6] [i_1] [i_1] [i_8] = ((/* implicit */long long int) arr_4 [i_2] [i_8]);
                        }
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
                        {
                            var_32 = ((((/* implicit */_Bool) arr_30 [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_9] [i_1] [i_1])) : (((unsigned long long int) var_15)));
                            var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767))));
                            var_34 = ((/* implicit */signed char) arr_2 [i_6 + 2] [i_9 - 1]);
                        }
                        for (short i_10 = 1; i_10 < 23; i_10 += 4) 
                        {
                            var_35 *= ((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1333425971)))) ? (((/* implicit */int) arr_22 [i_0] [i_2] [i_0] [i_10 - 1])) : (((/* implicit */int) arr_20 [i_0] [i_10] [i_0] [i_6] [i_10])))))));
                            var_36 |= ((/* implicit */long long int) ((unsigned char) (_Bool)0));
                            var_37 = ((/* implicit */unsigned long long int) (-((-(min((arr_4 [i_6] [i_6]), (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] [i_1]))))))));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) var_17))));
                        }
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) (short)12727)))))) >> (((((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (2834345598U)))))) ? ((+(var_15))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
}
