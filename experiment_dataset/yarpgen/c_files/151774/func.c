/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151774
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_11))) % (((/* implicit */int) ((_Bool) ((1538433405986172476ULL) - (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (arr_2 [24U]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)97))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) max((var_17), (var_0)));
            arr_5 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) (unsigned char)0)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                arr_8 [i_2] [9] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0 - 4] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 1] [i_2 + 1]))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((short) -879121904)))));
                arr_9 [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) - (((/* implicit */int) var_7)))) >= (((/* implicit */int) var_3))));
            }
        }
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10)));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_13 [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5285970139936771363LL)) ? (7798269959188614804LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191)))))) : (min((3427601367456929600ULL), (((((/* implicit */unsigned long long int) arr_0 [i_3])) + (17419922687480370505ULL)))))));
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_0 [11U])))), (((6665018032315706918LL) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [(unsigned char)6]))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2983085635U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6)))) ? (((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) min((2983085651U), (((/* implicit */unsigned int) var_4))))))) > (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_11)))))))));
}
