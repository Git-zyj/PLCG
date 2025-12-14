/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134819
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
    var_13 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)58467))));
    var_14 = ((((/* implicit */_Bool) (unsigned short)58475)) ? (((/* implicit */int) (unsigned short)59215)) : (((/* implicit */int) (unsigned short)6321)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */_Bool) (~((+(((/* implicit */int) var_4))))));
        var_16 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)52)))), (((/* implicit */int) (signed char)58))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */long long int) var_0);
            arr_5 [i_1] = ((/* implicit */unsigned long long int) var_9);
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-124)), ((unsigned short)32610)));
        }
        var_18 |= ((/* implicit */int) var_4);
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned short)6327)) : (((/* implicit */int) (signed char)-52)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)21439)))))));
            var_21 = ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_3])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24471))) | (9495991191861976243ULL))));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13697)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */unsigned int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (arr_1 [(short)10]) : (arr_9 [i_3] [i_2]))))))));
            arr_12 [i_2] [i_2] [16ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21374)) ? (arr_9 [(short)1] [17U]) : (((((/* implicit */_Bool) (short)-14949)) ? (((/* implicit */unsigned int) -928554451)) : (arr_9 [i_2] [i_3])))));
        }
        arr_13 [i_2] |= ((((/* implicit */_Bool) 1805646675U)) ? (((/* implicit */int) (unsigned char)136)) : (-196942030));
        arr_14 [i_2] = ((/* implicit */unsigned char) min(((+(arr_9 [i_2] [i_2]))), ((~(152926934U)))));
    }
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_23 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)7077)), (2405099609U)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned long long int) min((max((max((var_9), (((/* implicit */unsigned int) (unsigned short)7077)))), (((((/* implicit */_Bool) -5686351185663747842LL)) ? (152926934U) : (((/* implicit */unsigned int) -707653383)))))), (3280049954U)));
                        var_25 = ((/* implicit */unsigned long long int) arr_26 [i_6] [i_6]);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17786354210684938795ULL)) ? (((/* implicit */int) (short)-5113)) : (((/* implicit */int) (signed char)-38))));
                    }
                } 
            } 
        } 
    }
}
