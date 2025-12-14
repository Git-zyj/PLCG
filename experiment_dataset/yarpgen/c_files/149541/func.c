/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149541
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned char) var_8);
        var_19 = ((/* implicit */unsigned short) (((((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-116)) && (var_4))))) < (arr_1 [i_0]))))));
        var_20 = max((((/* implicit */long long int) (-(arr_1 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22283)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */long long int) arr_0 [i_0])))))));
        arr_3 [i_0] = max((((unsigned int) arr_1 [i_0])), ((+(max((((/* implicit */unsigned int) (signed char)-4)), (arr_0 [(unsigned char)21]))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_15))))) - (((/* implicit */long long int) ((unsigned int) var_3))))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_0))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((var_15), (((/* implicit */signed char) var_10))))) << (((/* implicit */int) max(((signed char)4), (((/* implicit */signed char) var_13)))))))) : (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
