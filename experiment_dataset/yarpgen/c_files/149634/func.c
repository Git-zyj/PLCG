/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149634
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (26U) : (((/* implicit */unsigned int) 1188268813)))) << (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1188268813)))) % (682613880U))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 1188268813))) ? (((((/* implicit */_Bool) (+(7936484041832747190LL)))) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_2 [i_0] [i_0]))) : ((((+(arr_2 [i_0] [i_0]))) >> (((max((134217216U), (((/* implicit */unsigned int) var_6)))) - (134217194U)))))));
        var_20 = ((unsigned char) min((((/* implicit */long long int) (-(-1188268813)))), (((((/* implicit */long long int) var_18)) + ((-9223372036854775807LL - 1LL))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -8945614022240922139LL)) ? (682613893U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))))) % (arr_1 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_22 -= ((/* implicit */unsigned char) (-((-(((unsigned int) var_14))))));
        var_23 = (((((!(((/* implicit */_Bool) (unsigned char)150)))) ? (max((497081619), (((/* implicit */int) (unsigned char)235)))) : (((((/* implicit */_Bool) 1282294689U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_6 [i_1])))))) + (((((/* implicit */int) arr_5 [i_1] [i_1])) & (((/* implicit */int) (unsigned char)55)))));
    }
    for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_2 + 2])), (1188268813)))) ? (((((/* implicit */_Bool) arr_6 [(unsigned short)4])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (arr_0 [3]))) : ((-(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 3]))))));
        var_25 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3612353415U)) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) 497081619))))))) ? (min((4207407132U), (((/* implicit */unsigned int) (unsigned char)55)))) : (((/* implicit */unsigned int) ((int) 295872930U))));
    }
    var_26 = ((/* implicit */unsigned short) ((2726749041U) + (((((((/* implicit */_Bool) var_10)) ? (3999094360U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) / (var_18)))));
}
