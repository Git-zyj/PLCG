/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118855
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), (var_0)))) ? ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-28027)))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_2] [(unsigned short)10] [(unsigned short)10] [i_3 + 2] = (short)2398;
                        arr_12 [(unsigned short)8] [i_2] [i_1] [i_1] [i_1] [(signed char)10] = var_0;
                        var_16 = ((/* implicit */signed char) arr_7 [i_2] [i_2] [i_2]);
                    }
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_2] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) arr_15 [i_4] [i_4 + 1] [i_2] [(_Bool)1])), ((short)0)))) <= (((/* implicit */int) arr_15 [i_0] [i_4 + 1] [i_0] [i_4]))));
                        arr_17 [i_2] = ((/* implicit */unsigned int) var_7);
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [(unsigned short)10]))));
                        arr_18 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) max((0ULL), (((/* implicit */unsigned long long int) (signed char)19))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        arr_22 [i_2] [(short)2] [(signed char)10] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_5 - 1] [(short)13] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_15 [i_5 - 1] [i_1] [i_1] [i_1]))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_5] [i_0] [i_0])) : (((/* implicit */int) var_6)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_19 *= 16777215U;
                            var_20 = ((/* implicit */unsigned int) var_9);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0] [(signed char)6]))));
                            var_22 = ((arr_7 [i_2] [i_2] [i_6 + 3]) | (1351715667U));
                        }
                        for (short i_8 = 4; i_8 < 14; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(var_1))))));
                            arr_32 [i_0] [i_1] [i_2] [i_6] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_2] [i_6] [i_8]);
                        }
                        var_24 -= ((/* implicit */signed char) arr_30 [i_0] [2ULL]);
                        /* LoopSeq 2 */
                        for (short i_9 = 2; i_9 < 13; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_6] [i_2] [(short)14]) : (((/* implicit */int) (signed char)3))))) ? (((/* implicit */int) (_Bool)1)) : (var_3)));
                            arr_35 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 133169152)) ? (var_3) : ((-(((/* implicit */int) var_7))))));
                            arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_12)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_2])))))));
                            arr_41 [i_0] [i_1] [i_2] [i_6] [i_2] [i_10] [i_10] = arr_26 [i_0] [i_1];
                            arr_42 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_24 [i_6 - 1] [i_2] [i_6 - 1] [i_6] [(_Bool)1] [i_6]))));
                        }
                    }
                    var_26 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)10558)), (4032944836U)))) ? (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1] [(_Bool)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [(signed char)1]))))), (((/* implicit */unsigned int) var_7))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) | (1678543763)));
}
