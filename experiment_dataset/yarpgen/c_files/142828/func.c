/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142828
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] [(signed char)16] = ((/* implicit */signed char) var_6);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (var_12) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_18)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((+(((/* implicit */int) var_13)))) <= (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(var_13))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_31 [i_7] [i_9] [i_8] [i_7] [19U] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) (_Bool)1))));
                                arr_32 [i_5] [i_5 + 2] [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (var_1)));
                                var_19 &= ((/* implicit */signed char) ((var_13) ? (((/* implicit */int) (!(var_3)))) : ((-(((/* implicit */int) (_Bool)1))))));
                                arr_33 [i_5] [i_5] [i_7] [i_5] [i_5 + 2] = var_2;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_39 [i_7] [i_6] = ((arr_38 [i_5] [i_5 + 3] [i_6] [i_7] [i_10] [i_5 + 3]) || (((/* implicit */_Bool) (signed char)127)));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) arr_23 [i_7] [i_10])) ? (var_8) : (2266953704U)))));
                            arr_40 [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */signed char) (+(-1212765473)));
                            arr_41 [i_5] [i_5] [i_7] [i_7] [i_7] [i_11] = var_18;
                        }
                        var_22 = ((/* implicit */signed char) ((_Bool) var_13));
                        arr_42 [i_7] [i_6] [i_7] [i_10] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (signed char i_12 = 4; i_12 < 21; i_12 += 2) 
                    {
                        arr_45 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) arr_29 [i_12] [i_12] [i_7] [i_6] [(_Bool)1] [i_6] [i_5 + 3])) : (var_0)));
                        var_23 += ((/* implicit */_Bool) var_4);
                        var_24 = ((/* implicit */int) (-(var_12)));
                    }
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((/* implicit */int) arr_44 [i_5] [i_6] [i_7] [(signed char)16] [i_7] [i_7])))))));
                }
                for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                                var_27 = ((/* implicit */_Bool) var_1);
                                var_28 |= (_Bool)0;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (int i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_58 [i_5] [i_6] [i_13] [i_5] [i_17] = ((/* implicit */_Bool) (((~((+(((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */_Bool) ((int) arr_35 [i_5] [i_5] [13U] [i_5]))) ? (((/* implicit */int) arr_55 [i_6] [i_13])) : (((arr_44 [i_17] [(signed char)18] [i_16] [i_13] [i_6] [i_5]) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-127))))))));
                                arr_59 [i_5] [i_5 + 2] [i_5] [i_5] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) ((unsigned int) (_Bool)1));
                    /* LoopNest 2 */
                    for (signed char i_18 = 3; i_18 < 21; i_18 += 4) 
                    {
                        for (unsigned int i_19 = 1; i_19 < 20; i_19 += 4) 
                        {
                            {
                                arr_64 [i_5] [i_19] [i_5] [i_5] [i_19] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_22 [i_19 + 1] [i_18 - 1] [i_18 - 1] [(signed char)11])) ? (arr_22 [i_19 - 1] [i_19] [i_18 - 3] [i_5]) : (arr_22 [i_19 - 1] [i_19] [i_18 - 3] [i_5])))));
                                var_30 = ((/* implicit */signed char) -1817311382);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_6))), (((/* implicit */int) max((var_13), (arr_61 [i_5 - 2] [i_6] [i_13] [i_6]))))))) ? (((/* implicit */int) min((arr_35 [i_5] [i_6] [i_6] [17]), (((/* implicit */signed char) var_11))))) : (((/* implicit */int) min(((signed char)-107), (arr_34 [i_13] [i_6] [i_13]))))));
                }
                arr_65 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((((arr_53 [i_5 + 2] [i_5] [i_5 + 1] [i_5 - 1] [12U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_5 - 2] [i_5] [i_5 + 2] [i_5 + 1] [i_6]))) : (var_12))), (((/* implicit */unsigned int) max((arr_53 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 + 3] [i_5 + 3]), (var_14))))));
                arr_66 [i_5] [i_5] [i_5 + 1] = ((/* implicit */_Bool) (signed char)-110);
            }
        } 
    } 
}
