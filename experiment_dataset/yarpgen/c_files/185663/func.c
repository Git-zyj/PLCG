/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185663
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)19595), ((unsigned short)54307)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) var_4)), (-699820255662369610LL)))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165)))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4194176)))) ? (((/* implicit */int) ((_Bool) var_2))) : ((+(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */int) (short)17639)) + ((+(((/* implicit */int) (short)-17274)))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0 + 1]) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0 + 1]) : (((/* implicit */int) var_9))))));
        arr_2 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) - (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0 + 1]);
    }
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (-1967595368159145986LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) min((((/* implicit */int) (short)-22714)), (var_7)))))))))))));
    var_21 = ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */short) (+(-231986874)));
}
