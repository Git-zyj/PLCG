/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148284
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
    var_16 += ((/* implicit */unsigned char) ((unsigned int) ((int) ((unsigned int) var_3))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (var_2))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 722668335U)) % (var_7))))))) ? (((((((var_15) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15)))) + (2147483647))) << ((((((((_Bool)1) ? (((/* implicit */int) var_0)) : (var_12))) + (64))) - (23))))) : (((((/* implicit */_Bool) ((int) var_12))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (-65569732))) : (((((/* implicit */_Bool) 722668335U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((((((/* implicit */_Bool) ((36020000925941760LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36757)))))) ? (((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) ^ (((/* implicit */int) arr_2 [(_Bool)1] [22])))) : (((((/* implicit */_Bool) 134209536)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))) == (max((max((((/* implicit */int) arr_0 [i_0 + 1] [i_0])), (arr_1 [i_0]))), (((((/* implicit */int) (unsigned short)28778)) + (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36788)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (144115188075854848LL)))) ? (((/* implicit */int) ((unsigned char) 1789950345))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [(unsigned short)18])))))) & ((((((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 1789950323)))) + (9223372036854775807LL))) << (((/* implicit */int) min((var_8), (var_4)))))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -36020000925941761LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-36020000925941760LL))))) < (max((((((/* implicit */_Bool) (unsigned char)62)) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) (unsigned short)28778)))), (min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_1 [i_0 + 1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -965255689)) ? (134209519) : (arr_1 [i_1 - 3])))) : (((((/* implicit */_Bool) (unsigned short)28747)) ? (62685974U) : (22U))))))));
            arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0])))));
            arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_2 [i_0] [20])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)38)) && (((/* implicit */_Bool) 1665112111))))) : (((int) arr_2 [i_0 + 1] [i_1]))));
        }
    }
}
