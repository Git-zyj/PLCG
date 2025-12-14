/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162800
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
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9058))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2)))) ? ((-(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_0 [i_0 + 1]))))));
        arr_4 [i_0 - 1] [i_0 - 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9062)) || (((/* implicit */_Bool) var_6))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 |= ((/* implicit */signed char) -109043454);
        var_16 = -891900704795680742LL;
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) arr_7 [i_2]);
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (unsigned char)119))))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) min(((~(((/* implicit */int) (short)-9062)))), ((~(((((/* implicit */int) var_8)) & (((/* implicit */int) var_5))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_19 |= ((((/* implicit */_Bool) -884553068)) ? (((/* implicit */long long int) -353495472)) : (-3597660951170100076LL));
                                arr_24 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((short) (((+(((/* implicit */int) var_1)))) == (((/* implicit */int) (signed char)(-127 - 1))))));
                                var_20 ^= ((/* implicit */long long int) ((short) (+(arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (-((+(8954285486084967042ULL)))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >> (((9492458587624584574ULL) - (9492458587624584548ULL)))));
                }
            } 
        } 
        arr_25 [i_3] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (unsigned char)224)), (arr_7 [i_3])))));
        arr_26 [i_3] = ((((/* implicit */_Bool) -1245329436533323700LL)) ? (2896242112U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))));
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_6 [i_8])))) ? (((/* implicit */long long int) 861525154)) : ((-(-1673120981205083205LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8]))) : (arr_7 [i_8]));
        arr_30 [i_8] &= -1133593749;
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_8] [i_8])), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_5 [i_8] [i_8]))))) : (1398725180U)));
        arr_31 [i_8] [i_8] = ((/* implicit */_Bool) arr_5 [i_8] [i_8]);
    }
    var_25 = ((((/* implicit */_Bool) -12LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 861637280U)));
}
