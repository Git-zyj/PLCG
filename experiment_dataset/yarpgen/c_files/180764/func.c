/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180764
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((9223372036854775807LL) | (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (898953780U))))));
                        arr_10 [i_3] [i_3] = ((/* implicit */signed char) arr_2 [i_0] [i_2] [i_3]);
                        var_20 += ((/* implicit */signed char) var_5);
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) var_7);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_4] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (signed char)30));
                            var_22 = ((/* implicit */unsigned short) (~(arr_9 [i_4 - 3] [i_4 - 2] [i_4 + 3])));
                            arr_18 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] &= ((/* implicit */unsigned char) (-(((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_2] [i_2]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))));
                            arr_20 [i_5] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_15))) ? (10869645460984763628ULL) : (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (6511596787742440902ULL)))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 898953780U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3174))) : (arr_9 [i_2] [i_0] [i_1])));
                }
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)28594);
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!((((+(((/* implicit */int) (signed char)-31)))) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    arr_30 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (arr_24 [i_0] [i_1] [i_0]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1068))) : (arr_24 [(signed char)20] [(signed char)20] [i_7])))));
                    arr_31 [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (var_8)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
    {
        var_24 *= ((/* implicit */short) var_14);
        var_25 *= ((/* implicit */unsigned char) 3396013507U);
        arr_35 [i_8] = var_15;
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_12)))))))) == (var_3))))));
    var_27 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (max((var_12), (var_4))))))));
}
