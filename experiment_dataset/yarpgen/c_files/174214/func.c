/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174214
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
    var_10 = ((/* implicit */unsigned int) var_4);
    var_11 -= ((/* implicit */signed char) 3871189154U);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_0))))) ? (max((3871189147U), (((/* implicit */unsigned int) 1329698005)))) : (((/* implicit */unsigned int) (-(var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_2)) / (var_8)))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (min((var_6), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */short) arr_2 [i_2]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)-20838)))), (((/* implicit */int) ((short) arr_7 [i_2 + 2] [i_2 - 2] [i_2 + 2])))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_1)) : ((((!(((/* implicit */_Bool) arr_4 [(unsigned char)1])))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))));
                        var_16 = ((/* implicit */int) (~(arr_0 [2U] [5U])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)4] [(signed char)4] [i_2] [6LL]))) > (3871189157U)))) / (((((/* implicit */_Bool) ((short) var_7))) ? (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)155)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) var_9))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0]) : (15283804836321221230ULL))))))) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_1]))));
                            var_19 = ((/* implicit */unsigned int) ((signed char) var_3));
                            var_20 = ((/* implicit */short) (signed char)8);
                            var_21 *= ((/* implicit */short) min((((/* implicit */unsigned int) (short)-20848)), (max((var_2), (((/* implicit */unsigned int) (unsigned char)160))))));
                        }
                        arr_17 [i_1] [i_0] [i_1] [(unsigned char)9] [i_2 - 1] [i_4] = ((/* implicit */short) var_7);
                    }
                    var_22 = ((/* implicit */short) (signed char)-21);
                    arr_18 [i_0] [i_1] [i_2] = max((((unsigned long long int) arr_13 [i_2 + 1] [i_2] [i_1] [i_1] [i_0] [i_0])), (((/* implicit */unsigned long long int) max((arr_11 [0U] [i_1] [i_1] [i_0]), (arr_13 [i_2 - 1] [1LL] [i_1] [i_1] [(signed char)8] [1LL])))));
                }
            } 
        } 
    } 
}
