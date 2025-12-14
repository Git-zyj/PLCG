/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186747
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
    var_15 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((var_6) - (3902787889476020537LL)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))) & (var_5))) | (((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
        var_17 |= ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [(short)2] [i_0 + 1])))) + (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)62))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) 5677827504337138334LL);
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) ^ (((/* implicit */int) (unsigned short)35637))))), (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_11))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)35623)) & (-263612637))))))));
        arr_3 [(unsigned short)4] |= ((/* implicit */long long int) 3098837078U);
    }
    for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        var_19 = ((/* implicit */short) ((9358994151099478316ULL) ^ (((/* implicit */unsigned long long int) 8266371409882325117LL))));
        var_20 ^= ((/* implicit */unsigned short) max((4294967295U), (((/* implicit */unsigned int) -263612616))));
    }
    var_21 ^= ((/* implicit */_Bool) var_5);
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)29898)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (unsigned short)35649)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-8266371409882325127LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-8266371409882325118LL))) : (((/* implicit */long long int) 263612637))));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (~(-263612653)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)7)), (var_4))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_4))))))));
}
