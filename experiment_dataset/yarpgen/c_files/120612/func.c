/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120612
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
    var_12 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) (~(var_3)));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)21968)))))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)1))))) : ((~(arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) var_7);
        arr_6 [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-21969)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (_Bool)1))))))) ? ((~(-122786779470672019LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_5 [i_1])))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_1 - 1])), (-1873304067)))) ? ((((!(((/* implicit */_Bool) (short)21978)))) ? (((/* implicit */int) max(((short)-21969), ((short)(-32767 - 1))))) : (((/* implicit */int) ((_Bool) (short)21937))))) : (((/* implicit */int) (unsigned char)142))));
        var_16 = ((/* implicit */long long int) var_9);
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (7226425701720410059LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1689)))))) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) (~(arr_8 [i_2]))))))));
        var_18 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (var_7) : (((/* implicit */unsigned long long int) ((unsigned int) var_5)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_2))))));
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
    }
}
