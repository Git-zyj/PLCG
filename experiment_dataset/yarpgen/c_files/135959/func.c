/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135959
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_1 [i_0])))))));
        var_15 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) var_7)) : (var_11)))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (signed char)-91)), (arr_1 [i_1 - 1]))))));
                        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_3 + 1])) << (((((/* implicit */int) min(((unsigned short)63118), (((/* implicit */unsigned short) var_5))))) - (63117)))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) max((arr_6 [i_3 + 1] [i_1] [i_1 - 1]), (arr_6 [i_3 + 1] [i_1 - 1] [i_1 - 1])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_3 + 1] [i_1] [i_1 - 1]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) (+(((/* implicit */int) var_2)))))), ((-(3581453467U)))));
                        arr_15 [2U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1])))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */signed char) (_Bool)1)), ((signed char)-64))), (((/* implicit */signed char) arr_0 [i_1 - 1]))))) ? (((/* implicit */int) (_Bool)1)) : ((-((+(((/* implicit */int) (short)30720))))))));
                        arr_16 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_0] [i_1 - 1] [i_1])))) % (((((/* implicit */_Bool) 1125897759358976LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (1692615373U)))));
                        var_23 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-21412)) && (((/* implicit */_Bool) (unsigned char)209)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) var_10);
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (1125897759358976LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21411))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))));
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_12), ((-(9007061815787520LL))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            arr_24 [i_0] [i_6] [13] = ((/* implicit */_Bool) var_11);
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_2] [i_6] [i_7 + 1] = ((/* implicit */int) arr_1 [i_0]);
                            arr_26 [i_7 - 1] [i_6] [i_6] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_7 - 1] [i_2] [i_1 - 1] [i_7 - 1] [(signed char)21])) ? (((/* implicit */int) arr_23 [i_0] [i_7 + 1] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_23 [i_0] [i_7 - 1] [i_2] [i_1 - 1]))))));
                            arr_27 [17] [i_1 - 1] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_0)))));
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) ((_Bool) (signed char)-105));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((long long int) arr_12 [i_1 - 1] [22U] [i_2] [i_6] [i_8] [i_6])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_6] [i_6]))) <= (var_4)))))));
                            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_1 - 1] [i_1 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) == (((unsigned int) var_10))));
                            var_30 = ((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_17 [i_0] [i_1 - 1] [i_1 - 1] [(short)0]))))) - (((/* implicit */int) var_6)));
                            var_31 = ((/* implicit */unsigned short) (signed char)90);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_1 - 1] [i_2] [i_6] [i_9] [i_9] = ((/* implicit */unsigned short) ((((long long int) var_10)) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            arr_36 [22U] [i_9] [i_2] [i_9] [i_0] = ((/* implicit */unsigned short) var_5);
                            arr_37 [i_0] [i_9] [i_2] [i_9] [i_9] = ((/* implicit */unsigned char) arr_33 [i_9] [i_1 - 1] [i_1 - 1] [(short)2] [i_1 - 1] [i_1 - 1] [i_9]);
                        }
                    }
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            {
                arr_46 [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_40 [i_11]))))));
                arr_47 [i_11] = ((/* implicit */unsigned int) ((((unsigned int) arr_33 [i_11] [i_10] [i_11] [i_11] [i_11] [i_11] [(signed char)4])) > (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_11] [i_11])))));
                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)64545))));
                var_34 = ((/* implicit */_Bool) ((var_13) | (((/* implicit */long long int) var_11))));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-13461), (((/* implicit */short) ((((/* implicit */long long int) 1401767925U)) > (8070450532247928832LL))))))) && (((/* implicit */_Bool) ((signed char) (short)5384)))));
            }
        } 
    } 
}
