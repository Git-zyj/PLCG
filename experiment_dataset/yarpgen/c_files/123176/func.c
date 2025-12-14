/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123176
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [(unsigned short)3] = ((/* implicit */long long int) ((min((max((-7191544578168748558LL), (-7191544578168748558LL))), (((/* implicit */long long int) ((unsigned short) var_10))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25160)))));
            var_14 = ((((/* implicit */_Bool) max((var_10), (var_4)))) ? (((7191544578168748548LL) & (-7191544578168748545LL))) : (((((-7191544578168748558LL) & (-7191544578168748558LL))) + ((~(-7191544578168748548LL))))));
        }
        var_15 = ((/* implicit */long long int) ((int) ((long long int) 33554431LL)));
        arr_7 [14] [i_0] = ((/* implicit */long long int) 1969651299);
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) var_6);
        arr_12 [i_2] = (~(((long long int) arr_3 [i_2] [(signed char)12] [10LL])));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            {
                arr_18 [i_3] [i_3] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_16 [0LL] [i_4 - 1] [0LL])) | (var_3)))), (((((/* implicit */long long int) -1969651300)) + (7191544578168748542LL)))));
                var_17 = max((min((var_10), (((/* implicit */long long int) arr_11 [i_4 - 1])))), (var_10));
                var_18 = ((long long int) ((-46237823996814699LL) % (8564382546310913044LL)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    arr_22 [13LL] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)37464))));
                    arr_23 [i_4] [2LL] [i_5] = ((/* implicit */long long int) (signed char)116);
                    var_19 = ((-8564382546310913013LL) - (-3415065267377858012LL));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)-8)) | (((/* implicit */int) arr_17 [i_3]))))))));
                }
                for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) 
                {
                    var_21 = (+(7191544578168748548LL));
                    arr_26 [i_4] [i_4] [1LL] [i_6] = ((/* implicit */int) min((((((-618902967) < (-1620922176))) ? (var_4) : (-6816060871956401562LL))), (((var_6) / (((/* implicit */long long int) -1969651299))))));
                    var_22 = 5048584277495157391LL;
                }
            }
        } 
    } 
}
