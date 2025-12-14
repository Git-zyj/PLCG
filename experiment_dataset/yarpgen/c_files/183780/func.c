/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183780
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
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 702173847U)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_21 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) + (3599772224006438921LL))), (((/* implicit */long long int) max((1093586766U), (((/* implicit */unsigned int) (unsigned char)101)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) != (((((/* implicit */int) (unsigned char)83)) * (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_8 [i_1] [i_1 + 1] [i_3 - 1] [i_3 - 1]))));
                        }
                        var_24 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) & (-1374403799))) : (((var_14) ? (((/* implicit */int) (short)-12034)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_25 -= min(((!((!(((/* implicit */_Bool) arr_13 [i_1] [10LL] [i_5])))))), ((!(((/* implicit */_Bool) (signed char)(-127 - 1))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10741)) ? (((/* implicit */int) (unsigned short)32538)) : (((/* implicit */int) (unsigned char)221))))) ? (2094710761647385241LL) : (328558047314393644LL)));
                            var_27 *= ((/* implicit */unsigned char) var_18);
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_1 [i_0 - 1] [i_3 - 1]))))));
                            var_29 = ((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_0]);
                            var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_6])) ? (arr_13 [i_1 + 2] [(_Bool)1] [i_1 + 2]) : (arr_13 [i_0] [10] [10])))) ? (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)40))))) + (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_19 [i_0] [i_1 - 3] [i_2] [i_3 - 1] [i_6])))))));
                            var_31 &= ((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), (arr_5 [i_3 - 1] [i_1 + 1] [i_0 - 1])))) > (((/* implicit */int) arr_5 [i_3 - 1] [i_1 + 1] [i_0 - 1]))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_32 *= ((/* implicit */unsigned int) min((((/* implicit */int) arr_19 [i_0] [i_3] [i_0] [i_0] [i_0])), (var_15)));
                            var_33 = ((/* implicit */signed char) ((long long int) max((arr_10 [i_3] [i_3] [i_3] [i_3 - 1]), (arr_10 [i_3] [i_3] [i_3] [i_3 - 1]))));
                            var_34 *= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-125))))) ? (((/* implicit */int) arr_8 [i_1] [i_3 - 1] [i_1] [i_0 - 1])) : (((/* implicit */int) (!(arr_9 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0])))))));
                            var_35 = ((unsigned char) ((_Bool) arr_18 [i_1 - 1] [i_0 - 1]));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) arr_0 [i_2] [i_2]);
                        var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_10 [i_8] [i_0] [i_0] [i_0])))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1])) >= (((/* implicit */int) (signed char)86))));
                    }
                }
            } 
        } 
        var_39 = var_9;
    }
    var_40 = ((/* implicit */unsigned int) max(((+(var_7))), ((-(((((/* implicit */int) var_17)) + (((/* implicit */int) var_9))))))));
}
