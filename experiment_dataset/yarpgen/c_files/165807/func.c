/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165807
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)147)))))));
                            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_3] [i_1 + 2] [i_2]))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)127)))) ? (max((((/* implicit */long long int) arr_5 [i_0 + 2] [i_0] [(unsigned char)2])), (arr_7 [i_0] [i_3]))) : (((/* implicit */long long int) (+(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_13))))))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_22 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))));
                                var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((-1) >= (((/* implicit */int) arr_1 [i_0])))));
                                var_24 |= ((/* implicit */unsigned short) min((arr_2 [i_1] [i_1 - 1]), ((-(arr_2 [i_1] [i_1 + 1])))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                            {
                                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */int) var_17)) : ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))));
                                var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_1 - 1]))));
                                var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 + 1]))));
                                arr_15 [i_0] [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~((-2147483647 - 1))));
                            }
                            for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [0] [i_2] [i_6] [i_6 + 1] = ((/* implicit */long long int) ((int) (unsigned char)140));
                                var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) arr_11 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_10)))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((/* implicit */int) ((arr_2 [i_1 - 1] [i_6 - 1]) >= (arr_2 [i_1 - 1] [i_6 + 1])))))))));
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) (+((~(arr_17 [i_1 + 2] [5] [i_1 - 1] [i_1 + 1])))));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_13 [(short)7] [i_0 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0 - 2] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_14 [i_0 + 2] [i_1] [1] [i_0 + 2] [i_1])))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_16);
    var_33 = ((/* implicit */short) var_14);
}
