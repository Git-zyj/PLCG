/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127030
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
    var_19 ^= var_13;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_8 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) min((arr_6 [i_0] [i_1 - 1] [i_0] [i_3] [i_0] [i_2 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 2] [i_3] [(unsigned char)11] [i_0])))))));
                            var_20 = ((/* implicit */unsigned char) (-(arr_4 [i_0] [i_2])));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 4; i_4 < 13; i_4 += 4) 
                            {
                                var_21 = arr_7 [(unsigned char)12] [i_1 - 2] [i_1 - 2] [(unsigned char)12] [i_1 - 2] [(unsigned char)1];
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_7 [i_0] [1U] [i_2 + 1] [i_1 - 3] [i_3] [i_4 + 1]), ((unsigned char)0)))))))));
                                var_23 = ((/* implicit */unsigned int) (((+(arr_6 [(unsigned char)11] [(unsigned char)11] [i_2 - 3] [i_3] [i_0] [i_0]))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4 - 1] [i_1 - 3] [i_1] [i_3] [i_2 - 1] [i_1])))))));
                                arr_12 [i_3] [6U] [i_3] [i_3] [i_3] [i_3] = (+(min((arr_3 [i_1 + 2] [i_2 + 1] [i_1 + 2]), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [(unsigned char)1] [(unsigned char)6] [(unsigned char)5])))));
                                var_24 = ((/* implicit */unsigned char) 2907779169U);
                            }
                            for (unsigned char i_5 = 4; i_5 < 10; i_5 += 3) 
                            {
                                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_5 + 3] [i_2 - 1] [i_2 + 1] [i_1 + 2] [i_1 + 2]))))), (((((((/* implicit */_Bool) (unsigned char)0)) ? (1387188126U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))) << (((((/* implicit */int) ((unsigned char) arr_5 [3U] [3U]))) - (188)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_2 - 1] [i_2] &= (-((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [6U] [i_1 + 2] [i_2] [i_5] [i_5]))) : (4294967272U))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                            {
                                arr_19 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4095U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139)))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 2] [i_2 + 1])))))))));
                            }
                        }
                    } 
                } 
                var_27 = (unsigned char)212;
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned int i_8 = 4; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_28 &= arr_11 [(unsigned char)6] [i_8 - 2] [(unsigned char)10] [(unsigned char)10] [i_1 - 2];
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)156))))) ? (arr_25 [6U] [i_7] [i_1] [i_1] [(unsigned char)7]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_1 - 3] [i_7] [(unsigned char)2] [i_8 + 2] [4U] [i_1 - 3]))))))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned char)170), (arr_14 [i_1] [i_7] [i_1 + 1] [(unsigned char)10] [i_7] [i_1 - 2])))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                            {
                                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (unsigned char)101))))))));
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((((/* implicit */_Bool) ((unsigned int) (unsigned char)86))) ? (min((min((((/* implicit */unsigned int) arr_17 [i_0] [(unsigned char)9] [i_0] [(unsigned char)10] [i_7] [(unsigned char)10] [i_0])), (arr_6 [(unsigned char)4] [i_8] [i_7] [i_7] [i_1 - 1] [(unsigned char)4]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)249))))))) : (min((((/* implicit */unsigned int) ((arr_24 [i_9] [i_0]) > (2015224528U)))), (3673284981U)))))));
                            }
                            arr_29 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) (+((~(((((/* implicit */int) arr_11 [10U] [3U] [(unsigned char)5] [7U] [7U])) * (((/* implicit */int) arr_28 [i_7] [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(unsigned char)12] [i_1 - 1] [(unsigned char)8])) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) min((arr_22 [i_1 - 2] [i_1 - 1] [i_1 - 3] [i_1]), (var_5))))));
            }
        } 
    } 
}
