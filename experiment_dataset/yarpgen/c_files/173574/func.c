/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173574
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
    var_11 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) 3097964160U);
                            var_13 = ((/* implicit */short) ((max((arr_9 [(_Bool)1] [i_2] [(_Bool)1]), (((((/* implicit */int) var_5)) != (((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3097964164U))))) == (((/* implicit */int) arr_10 [i_3] [i_1] [(short)4]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(signed char)3] [i_1] [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned long long int) ((unsigned int) arr_0 [i_3]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) max((arr_4 [i_4] [i_1] [i_0]), (arr_2 [i_0] [i_1]))))))));
                    arr_17 [i_1] = ((/* implicit */long long int) ((int) max((3097964164U), (((/* implicit */unsigned int) (short)26564)))));
                    arr_18 [i_1] [i_1] = (((-(arr_13 [i_0] [i_1] [i_4] [i_4]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((1197003132U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) arr_8 [i_0]))), (arr_0 [(unsigned short)11])))) ? ((+(((((/* implicit */_Bool) var_8)) ? (arr_14 [i_0] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_4])))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1197003132U))))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(var_6))) : (((/* implicit */int) ((signed char) arr_0 [i_1])))))) ? (arr_13 [i_0] [i_5] [(unsigned short)5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_6] [i_0])))));
                                var_18 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1]);
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1751517780U)) ? (1751517780U) : (1197003116U)));
                                var_20 = ((/* implicit */short) arr_20 [i_5] [i_6] [i_5]);
                                var_21 = ((/* implicit */int) arr_9 [i_7] [i_1] [i_5]);
                            }
                        } 
                    } 
                    arr_28 [(signed char)6] [i_0] [i_0] [i_0] |= max((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_1] [i_0] [i_0]))) + (((((/* implicit */_Bool) arr_23 [i_5] [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_5])));
                }
                arr_29 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_8 [i_1]);
            }
        } 
    } 
    var_22 -= var_3;
    var_23 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(var_9))))));
}
