/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176941
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned int) (-(arr_11 [(signed char)17] [(signed char)17] [i_1] [i_1 - 1] [i_1])));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((-(((((/* implicit */_Bool) var_4)) ? (arr_13 [2ULL] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1 - 1] [i_2] [i_0] [i_3 + 3] [i_0]))))))));
                        }
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_13 [i_0] [i_0] [i_2] [i_3]))))))))));
                        var_23 = arr_5 [i_1] [i_2] [i_0];
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [18U] [i_2] [i_3] [i_5] [i_0])) ? (((/* implicit */int) var_17)) : (var_6)));
                            var_25 = ((/* implicit */int) arr_4 [i_0]);
                            var_26 *= ((/* implicit */short) var_1);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) max((var_27), ((+((~(((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18))));
                            arr_23 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */int) var_15);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_3] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_12 [i_7] [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)));
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] [i_7] = ((/* implicit */signed char) (~(var_11)));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            arr_32 [i_0] [i_0] [i_1] [i_0] [7ULL] [i_3] [i_8] = (-(((/* implicit */int) arr_8 [i_0] [i_0])));
                            var_29 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_3))))));
                            arr_33 [i_0] [i_0] = arr_1 [i_0];
                            var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_11)))));
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) arr_22 [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) arr_34 [i_0] [i_9] [i_0]);
            var_33 ^= (-(((((/* implicit */_Bool) var_14)) ? (var_7) : (var_7))));
        }
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (-(var_8))))));
    var_35 = ((/* implicit */short) var_16);
}
