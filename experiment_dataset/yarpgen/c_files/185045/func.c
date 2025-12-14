/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185045
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_20 = (((!(((/* implicit */_Bool) -4710252146434203432LL)))) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned char)130)));
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)23360))))) : (((var_18) % (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22496)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (1728076776U))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_24 = var_1;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 36028797018963968LL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34310))) : (2552232882U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2666805280U)) ? (((/* implicit */int) arr_7 [6LL] [6LL] [i_2])) : (((/* implicit */int) arr_7 [(unsigned short)20] [i_2] [i_2])))))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_7)))) ? ((-(var_7))) : (((/* implicit */long long int) (-(var_8)))))))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((arr_1 [(unsigned short)2]) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10U]))))))));
        }
        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)59))));
        arr_10 [i_1] = ((/* implicit */short) var_13);
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (unsigned char)48))));
    }
    var_30 = ((/* implicit */unsigned int) ((var_12) > (((((/* implicit */_Bool) (unsigned short)10352)) ? ((-(var_18))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)51301)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */int) var_5);
        var_31 = ((/* implicit */short) ((min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) arr_13 [i_3] [i_3])))) / (((max((2147483647), (((/* implicit */int) (unsigned short)63285)))) >> ((((~(((/* implicit */int) arr_13 [i_3] [i_3])))) + (13406)))))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_12 [i_3] [i_3]))));
    }
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_21 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (171206443U)))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35408))) : (var_7)))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned char)255))));
        }
        var_34 = max((((/* implicit */unsigned int) var_17)), ((-(((((/* implicit */_Bool) 125745185U)) ? (((/* implicit */unsigned int) arr_18 [i_4 + 2] [i_4 + 2])) : (var_18))))));
    }
}
