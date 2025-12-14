/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101488
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_1)))))))));
    var_11 = ((/* implicit */unsigned long long int) min((max((-3516020876444525914LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_4)), (var_7)))))), (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)126)) < (((/* implicit */int) var_5))))), (max((arr_0 [i_1]), ((unsigned char)239)))))), (((max((((/* implicit */long long int) var_6)), (-3516020876444525914LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) (unsigned char)14);
                            var_13 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_1 - 1]))))));
                            var_14 -= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((long long int) arr_11 [i_1] [i_1]))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_2])) << (((((/* implicit */int) var_1)) - (65)))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1]))) : ((-(((/* implicit */int) arr_8 [i_1] [i_0] [i_1]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1])), (arr_4 [i_0] [i_1] [i_1 - 2])))) : (((/* implicit */int) var_4))));
                            var_16 = ((/* implicit */unsigned int) (((+((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))) == (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2] [i_3])) > (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 1])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_17 -= ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_0 [i_1 - 1]), (var_2))))));
                        arr_18 [i_0] = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_9))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)147))))))), (var_6)));
                        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) -6206919768338359263LL)));
                    }
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned char)0)))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_7 [i_0] [i_0]))) - (683040254U))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = (_Bool)0;
                                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)122)) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_14 [i_1] [i_1] [i_0])) / (((/* implicit */int) arr_14 [i_0] [i_6] [i_0])))) : (((/* implicit */int) arr_12 [i_7] [i_0] [i_7 - 1] [i_1 - 2] [i_0] [i_1 - 2]))))) != (((((/* implicit */_Bool) min((arr_10 [i_7] [i_6] [i_0] [i_1] [i_0]), (((/* implicit */signed char) arr_8 [i_7] [i_0] [i_0]))))) ? (9028421196957830486LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_6])) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_6])))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) 1601552673U);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_22 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_15 [i_8] [i_1] [i_0])), (((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) arr_11 [i_0] [i_0])) : (-3516020876444525934LL))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)126)), (arr_19 [i_1] [i_1]))))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_20 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_9] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                arr_35 [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_28 [i_0]);
                                var_25 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0]))) & (4294967295U)))) & (min((((/* implicit */long long int) arr_19 [i_0] [i_1])), (arr_33 [i_0] [i_1] [i_9] [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 22; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_1] [i_0] [i_0]) ? (1103307915U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_13])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))) : (max((((/* implicit */long long int) (unsigned char)0)), (9028421196957830474LL))))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((arr_43 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) ? (((((268435456U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_9] [i_9]))))) | (max((var_9), (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            {
                arr_49 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_14] [i_14] [i_14] [i_15] [i_15])) != (((/* implicit */int) ((((/* implicit */int) (short)384)) != (((/* implicit */int) arr_15 [i_15 - 1] [i_15 - 1] [i_15 - 1])))))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_38 [i_14] [i_14] [i_14] [i_14]), (arr_38 [i_14] [i_14] [i_14] [i_14])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) != (4294967295U)))) : (((/* implicit */int) ((_Bool) (short)32767)))));
            }
        } 
    } 
}
