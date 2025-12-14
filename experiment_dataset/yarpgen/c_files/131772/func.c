/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131772
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
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) max(((short)14348), (((/* implicit */short) (unsigned char)206)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) 1629285430720618816LL))));
        arr_4 [i_0] = ((/* implicit */short) min(((((!(((/* implicit */_Bool) 1048575U)))) ? (((1048575U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (14123366976517867690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (arr_2 [i_0 + 2]) : (max((1591986924U), (((/* implicit */unsigned int) (short)29916))))))));
    }
    for (short i_1 = 4; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_17 *= ((/* implicit */int) arr_1 [i_1]);
        var_18 += arr_5 [i_1] [(short)5];
        arr_9 [i_1] = ((/* implicit */signed char) (+((-(-8092727135018610527LL)))));
        arr_10 [(signed char)6] = 6598195421081733434LL;
        var_19 = ((/* implicit */short) max(((-(((/* implicit */int) ((signed char) (signed char)114))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1]))) - (arr_2 [i_1])))) ? (((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1])) : (((/* implicit */int) arr_0 [5LL])))) : (((/* implicit */int) arr_5 [(unsigned char)2] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_14 [(signed char)11]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15210472543541483789ULL))))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
        arr_15 [i_2] &= ((/* implicit */short) (signed char)125);
    }
    var_21 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        arr_20 [i_3] [i_3] = ((((/* implicit */_Bool) min((arr_13 [i_3 + 1]), (arr_13 [i_3 - 1])))) ? (min((arr_13 [i_3 - 1]), (arr_13 [i_3 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_3 - 1])) ? (arr_13 [i_3 + 1]) : (arr_13 [i_3 + 1]))));
        arr_21 [i_3 - 2] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-32756)), (max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) >= (arr_11 [i_3])))), (4293918730U)))));
    }
    for (signed char i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        var_22 = ((/* implicit */_Bool) (((-(((arr_22 [i_4 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4]))) : (1085528987458902214ULL))))) ^ (((/* implicit */unsigned long long int) (((_Bool)0) ? ((-(((/* implicit */int) (short)20981)))) : (((/* implicit */int) arr_23 [i_4])))))));
        arr_24 [i_4] = ((/* implicit */int) arr_23 [i_4]);
        arr_25 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned short)27346)))) ? ((+(((/* implicit */int) arr_22 [i_4])))) : (((/* implicit */int) max((((/* implicit */short) arr_22 [i_4])), (arr_23 [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_4])) > (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)104)), ((unsigned char)64))))))) : (((/* implicit */int) ((arr_22 [i_4 - 1]) && (((((/* implicit */int) arr_23 [i_4])) >= (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        arr_28 [i_5] = ((/* implicit */long long int) (!(((arr_11 [i_5]) != (min((arr_11 [i_5]), (((/* implicit */long long int) arr_26 [i_5]))))))));
        arr_29 [i_5] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */long long int) 3181433177U)) : (8666932305970343636LL)))))) ? (min((((/* implicit */long long int) (+(-1114886448)))), (-6598195421081733435LL))) : (max((min((((/* implicit */long long int) arr_22 [i_5])), (-5950715264017548446LL))), (((/* implicit */long long int) (+(634459343U))))))));
    }
}
