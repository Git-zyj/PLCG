/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178956
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
    var_10 = ((/* implicit */short) max(((((~(var_5))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_8))));
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [19U] |= ((/* implicit */short) ((signed char) var_3));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) (short)-10025))));
                    arr_10 [(signed char)8] [(short)4] [(signed char)6] = ((/* implicit */signed char) 849514907U);
                }
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (3445452383U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3])))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)13])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((short) arr_9 [i_1] [i_3] [i_1])))) ? (744146290U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_0 + 1] [i_1 - 1] [(_Bool)1] [i_0 + 1] [2U])))))));
                                var_14 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-16991))))) ^ (((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) + (744146295U))))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3]))))), (max((((/* implicit */unsigned int) (signed char)-120)), (1911863647U)))));
                        var_17 = ((/* implicit */_Bool) var_9);
                    }
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_3] [i_7 + 1] = ((/* implicit */signed char) var_6);
                        arr_25 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 2; i_8 < 18; i_8 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) arr_15 [13U] [i_3]);
                            arr_29 [(_Bool)1] [i_1 - 1] [i_1] [i_3] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) var_8);
                            var_19 = ((/* implicit */short) ((var_7) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 1] [i_7 - 1] [i_7 + 1]))));
                            arr_30 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (744146290U)));
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_20 -= var_3;
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((var_2) / (var_5)))));
                            arr_34 [i_0] [i_3] = ((/* implicit */_Bool) 744146290U);
                        }
                    }
                }
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 3445452373U))));
                arr_35 [i_0 + 1] = ((/* implicit */unsigned int) ((((_Bool) 3445452392U)) ? (((/* implicit */int) ((_Bool) max((var_7), (arr_9 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) ((short) arr_8 [(_Bool)1])))));
            }
        } 
    } 
}
