/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149124
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103)))))) ? (arr_2 [i_0] [(unsigned char)5]) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2]))) : (16483701921050434726ULL)))))) || (((/* implicit */_Bool) var_7))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (var_4)))) : ((+((-9223372036854775807LL - 1LL))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) var_14)))), ((-(-1))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [2ULL])) ? (4449346363384059622ULL) : (576460752299229184ULL)))))))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0 - 1] [i_0] = var_2;
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)140)) & (((/* implicit */int) (unsigned char)85))))) : (var_6)))) || (((/* implicit */_Bool) 10038678486431937449ULL))));
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551613ULL)));
    var_21 += ((/* implicit */long long int) max((((/* implicit */int) var_14)), (var_0)));
}
