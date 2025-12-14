/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108872
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = arr_2 [7LL];
                    arr_10 [i_0] [i_2] = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_1] [i_0] [i_1] [i_0] = max((((/* implicit */long long int) (+(((/* implicit */int) min((var_10), (var_10))))))), (((var_7) + (var_6))));
                                arr_18 [i_0] [i_0] [i_0] [i_3] [(signed char)10] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))), (arr_5 [i_0])));
                                arr_19 [(signed char)7] [i_0] [i_2] [i_2] [(unsigned short)10] = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)252)), (min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */short) (unsigned char)252)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((long long int) var_11));
    /* LoopSeq 4 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_22 [i_5] = ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned char)27)) ? (arr_20 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_2)))), (max((arr_20 [i_5]), (((/* implicit */unsigned long long int) (unsigned char)245))))));
        arr_23 [i_5] = ((/* implicit */signed char) var_3);
        arr_24 [i_5] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (short)508)))));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_6]), (-5437020774344676596LL)))) ? (max((arr_5 [i_6]), (arr_5 [i_6]))) : (((arr_5 [i_6]) / (arr_5 [i_6])))));
        arr_27 [i_6] [i_6] = ((/* implicit */signed char) ((4280892990U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 840073006U))))));
    }
    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (-1107734325705552578LL))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (unsigned char)238))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
        {
            arr_35 [i_8] = min((min((var_15), (((/* implicit */short) var_12)))), (((/* implicit */short) min((((/* implicit */signed char) ((12173462937394545936ULL) >= (((/* implicit */unsigned long long int) arr_33 [i_7] [i_8]))))), ((signed char)123)))));
            var_23 -= ((/* implicit */signed char) max((max((arr_20 [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_31 [(signed char)4] [(signed char)4] [i_8]) : (var_6)))))), (((/* implicit */unsigned long long int) ((signed char) arr_31 [(signed char)6] [(signed char)6] [(signed char)6])))));
            arr_36 [i_7] [i_8] = max((min((max((arr_21 [i_7]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5437020774344676599LL)) ? (arr_28 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (arr_30 [i_8] [i_7]));
        }
        arr_37 [i_7] = ((/* implicit */short) ((long long int) ((short) ((unsigned int) var_15))));
        var_24 = ((/* implicit */long long int) ((short) ((long long int) (unsigned char)21)));
    }
    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            arr_43 [i_10] [i_10] [(unsigned short)22] = ((/* implicit */signed char) ((var_16) != (((/* implicit */long long int) (+(arr_38 [i_10 + 1]))))));
            arr_44 [i_10] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((arr_40 [i_10] [i_10] [4U]), (arr_41 [i_10])))) ? (((12173462937394545921ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22201)))))))));
        }
        for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            arr_47 [i_9] [i_11] [i_11] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 4784411550826104429LL))))));
            arr_48 [i_9] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((long long int) var_12))) ? (((((/* implicit */_Bool) 18445729300906269400ULL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_17), (var_4)))))))));
        }
        var_25 *= ((/* implicit */signed char) (+(max((var_16), (((/* implicit */long long int) arr_41 [i_9]))))));
    }
}
