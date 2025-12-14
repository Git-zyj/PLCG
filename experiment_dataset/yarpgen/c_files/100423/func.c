/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100423
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (-(var_10)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_0))))) & (((/* implicit */unsigned long long int) (~(-381884259443787437LL)))))))));
                    var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13448)) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 3678429055172259859LL)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_6 [i_2 + 2] [0] [3] [i_2 + 1])))));
                    var_19 = ((/* implicit */short) max((((/* implicit */signed char) ((min((381884259443787449LL), (((/* implicit */long long int) 2147483647)))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -2017723602))))))), ((signed char)4)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((var_5), (((/* implicit */signed char) arr_14 [i_0] [i_0] [i_4] [i_6 - 3] [i_0]))))), (arr_13 [i_0] [i_6 - 1] [(unsigned short)16] [i_0] [i_6] [i_6])));
                                var_20 += ((/* implicit */_Bool) max((((unsigned short) var_16)), (min((((/* implicit */unsigned short) var_5)), (arr_13 [i_0] [i_0] [14] [i_5] [i_6 + 1] [i_0])))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_3] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (-381884259443787428LL) : ((-9223372036854775807LL - 1LL))))));
                    arr_18 [i_0] = ((/* implicit */signed char) var_13);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_11))));
            arr_22 [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_0] [i_0]))));
            arr_23 [i_0] = ((/* implicit */int) ((unsigned int) arr_7 [i_7] [(_Bool)1] [i_7]));
        }
        var_22 = ((/* implicit */short) var_4);
    }
    var_23 |= ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */long long int) min((var_1), (((/* implicit */int) var_16))))) : (((((/* implicit */long long int) var_12)) / ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_28 [i_8] [i_8] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 381884259443787441LL))))));
                arr_29 [i_8] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_24 [i_8] [i_8]), (((/* implicit */short) var_3))))) ? (((((/* implicit */_Bool) (signed char)-95)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(var_1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((-9223372036854775788LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((arr_27 [i_9]) ? (((/* implicit */int) arr_8 [i_8] [i_8] [i_9])) : (((/* implicit */int) arr_11 [i_8] [2U] [2U] [i_9])))) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        for (short i_11 = 1; i_11 < 8; i_11 += 2) 
        {
            for (long long int i_12 = 1; i_12 < 8; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (var_11)))), (min((-381884259443787435LL), (((/* implicit */long long int) var_9)))))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                arr_44 [i_10] [i_12] [i_12] [i_12] [(_Bool)1] = ((/* implicit */_Bool) (short)(-32767 - 1));
                            }
                        } 
                    } 
                    arr_45 [i_12] [i_12] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    arr_46 [i_10] [i_11] [i_10] |= ((/* implicit */long long int) max((var_6), (((((arr_4 [i_10] [i_12 + 3]) + (2147483647))) << (((381884259443787443LL) - (381884259443787443LL)))))));
                    var_25 = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        arr_50 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 381884259443787440LL)) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_5)) == (623416085)))), (arr_24 [i_15] [i_15])))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (arr_4 [i_15] [i_15])))) : (((/* implicit */int) var_4))))));
        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
