/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169646
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
    var_16 = ((/* implicit */_Bool) (-(min((min((4116972800U), (var_5))), (((/* implicit */unsigned int) var_12))))));
    var_17 *= ((/* implicit */unsigned char) 4032U);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((long long int) 18446744073709551615ULL)) / (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned char) ((unsigned char) 2299996135066227683ULL))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) <= (var_5))))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) 253593592U);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_3 [i_1]) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) * (arr_1 [i_1] [i_1 + 1])));
        arr_5 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)213)), (arr_3 [i_1 + 1])))) ? (((((arr_1 [i_1] [i_1]) / (-1894342008))) >> (((var_10) - (3836857630U))))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 16146747938643323933ULL)) ? (((/* implicit */int) arr_4 [(unsigned char)7])) : (var_15))))), (((((/* implicit */_Bool) ((int) (_Bool)0))) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 - 1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) ((unsigned short) (unsigned char)93));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (((_Bool)1) ? (((max(((_Bool)0), ((_Bool)1))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((_Bool) var_4))))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_7 [i_2]))))) << (((((/* implicit */int) (unsigned short)28499)) - (28489)))))));
        var_24 |= ((/* implicit */unsigned char) ((_Bool) (~((+(arr_6 [i_2] [(_Bool)1]))))));
        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 1655801742U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned short) ((unsigned short) ((((/* implicit */int) (unsigned char)15)) * (arr_8 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_27 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) 3894865201U)), (min((var_0), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)52218)) : (((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_28 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (min((arr_1 [i_4] [i_3]), (((/* implicit */int) arr_16 [i_4])))) : (((/* implicit */int) arr_14 [i_3]))))));
            var_29 = var_6;
        }
    }
}
