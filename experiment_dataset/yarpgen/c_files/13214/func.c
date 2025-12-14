/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13214
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
    var_19 = ((/* implicit */long long int) min((var_19), (((-3297305537222192022LL) + (-3297305537222192022LL)))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-2147483637), (((/* implicit */int) (signed char)96))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-3297305537222192008LL))))))) : (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)88)), (-3297305537222192022LL)))) ? ((-(18446744073709551602ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)22)) ? (5528449234620273967LL) : (((/* implicit */long long int) 4294967295U))))))), (((/* implicit */unsigned long long int) arr_0 [1U])))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)112)) % (-378795401))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)))))) > ((-(arr_1 [i_0] [i_0 - 1])))))) : ((+(((/* implicit */int) arr_0 [i_0 - 2])))))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (1169284949U)))) + (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_4)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))) : (min((((/* implicit */unsigned int) var_3)), (arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) arr_5 [5LL]);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_4 [i_3])))), (((((/* implicit */unsigned long long int) 3125682344U)) + (18446744073709551602ULL)))))) ? (((arr_6 [i_1]) | (((/* implicit */unsigned int) ((int) (signed char)95))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [(signed char)4] [i_2] [(signed char)4])))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_2] [i_1])) % (((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_18)), (arr_6 [i_1]))))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) max(((((~(949045847100553081ULL))) | (((/* implicit */unsigned long long int) min((837216219U), (1169284960U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17625))) ^ (((((/* implicit */_Bool) -622404360)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1169284949U))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_1 [i_4] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_29 -= ((/* implicit */unsigned char) ((int) arr_5 [i_7 + 4]));
                                var_30 = ((/* implicit */unsigned char) arr_1 [i_4] [i_5]);
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_8] [i_8 + 2] [i_8] [i_8] [i_8] [i_8])) ? (arr_20 [i_7 - 2] [i_8] [i_8] [i_8 - 1]) : (arr_4 [i_7 + 2])));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) ((short) arr_2 [i_4]));
                    var_33 = ((/* implicit */short) ((arr_10 [i_5]) / (135544000)));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)12732))))) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_7))));
        var_35 = arr_17 [(unsigned char)4] [6ULL] [i_4] [i_4] [i_4] [i_4];
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) var_3))));
    }
}
