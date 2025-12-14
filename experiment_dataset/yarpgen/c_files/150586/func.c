/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150586
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                arr_6 [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) | (((((/* implicit */_Bool) 872230408U)) ? (1040589318U) : (((/* implicit */unsigned int) arr_1 [i_1]))))))) ? (max((min((((/* implicit */unsigned int) var_1)), (4294967269U))), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */short) var_4))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((((int) arr_11 [i_3 + 1])), (var_9)));
                arr_14 [i_2] [i_3 + 1] = ((/* implicit */signed char) arr_10 [i_3 + 1] [i_3 + 1]);
                arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((arr_10 [i_2] [(_Bool)1]) & (4294967272U))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-26687)), ((unsigned short)63632)))))))) / (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2]))))) || (((/* implicit */_Bool) ((long long int) 26U))))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    arr_18 [i_2] [i_2] = ((/* implicit */int) arr_17 [i_2] [i_2] [i_2]);
                    var_11 = ((/* implicit */signed char) arr_4 [(short)16]);
                    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 + 1] [i_4 - 1] [i_4 + 1]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_10 [i_2] [i_2])) : (var_5))))) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_23 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_5] [i_2])) || (((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_2])), (1489398086)))))) ? (var_3) : (((((/* implicit */int) arr_8 [i_3 - 1] [i_3])) / (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1]))))));
                    var_13 = ((/* implicit */int) (-((+(max((((/* implicit */unsigned int) -127723487)), (4294967270U)))))));
                    var_14 |= min((((((/* implicit */_Bool) arr_12 [i_3 + 1] [10] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_12 [i_3 - 1] [i_3 - 1] [i_5]))), (((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) + (((unsigned int) 1981020855)))));
                }
                for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 - 1]))) : (arr_16 [i_2] [i_6 - 1] [i_3 - 1] [17U]))));
                                arr_32 [i_2] [i_3 - 1] [i_6] [i_7] [(short)10] = ((/* implicit */int) (~(max(((~(arr_27 [i_2] [i_6] [i_6]))), ((~(22U)))))));
                                var_16 = ((((/* implicit */int) var_2)) << (((max((((var_1) ? (((/* implicit */unsigned int) arr_1 [i_3])) : (30U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_2] [i_2] [(signed char)11])) - (var_3)))))) - (2258206692U))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_39 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_4);
                            arr_40 [i_6] [i_3 + 1] [i_3] [i_3] [9U] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) 4294967295U)))));
                            var_17 = ((int) -230547379);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_18 += ((/* implicit */unsigned short) var_3);
                            var_19 &= (-(((/* implicit */int) arr_17 [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_3))));
                            arr_44 [i_2] [i_3 - 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_2] [i_9] [i_11])) ? (((/* implicit */int) var_2)) : (arr_1 [i_11])))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((arr_26 [i_3 - 1] [i_3] [i_3 + 1] [i_3]) >= (arr_26 [i_3] [i_3] [i_3 + 1] [i_3 + 1]))))));
                        }
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_2] [i_2] [i_2])) / (((/* implicit */int) arr_19 [i_2] [i_3] [i_2] [i_9]))))) * (arr_41 [i_3] [i_3] [i_6 - 1] [i_9] [i_3 + 1])));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((short) 3244366938U)))));
                            var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_2] [i_2] [4] [i_9] [4]))))) ? (((/* implicit */int) arr_35 [i_6] [i_9] [i_2] [i_2] [i_6])) : (((var_0) ? (((/* implicit */int) (short)25826)) : (-194821957))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_2] [i_6] [i_2] [i_9] [i_13] = ((/* implicit */short) (-(-206767772)));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967265U)) ? (((/* implicit */int) var_6)) : (arr_1 [i_9])))) ? (((/* implicit */unsigned int) ((int) 194821952))) : (839172317U))))));
                            arr_52 [i_6] = ((/* implicit */signed char) arr_30 [i_2] [i_2] [i_9]);
                        }
                        arr_53 [i_6] [i_3 - 1] [i_6 - 1] [i_9] = ((((/* implicit */int) (short)-6404)) + (((/* implicit */int) (_Bool)1)));
                    }
                    arr_54 [i_2] [i_3] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) arr_3 [i_2] [i_2] [(_Bool)1]))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (3364024916273601279LL)));
                    arr_55 [i_2] [i_2] [i_6] [i_6 - 1] = (~(min((((((/* implicit */_Bool) arr_29 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3455794978U))), (((/* implicit */unsigned int) (_Bool)1)))));
                }
            }
        } 
    } 
}
