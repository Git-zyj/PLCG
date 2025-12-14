/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127921
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)39))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (signed char)-40))))), (min((((/* implicit */unsigned long long int) arr_0 [(unsigned char)8])), (min((var_3), (((/* implicit */unsigned long long int) (unsigned char)169)))))))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)-3)))), (((/* implicit */int) (unsigned char)95)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned char) arr_1 [i_0]))))), (6054909981041837089ULL)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (9U) : (0U))))) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1]))));
        arr_6 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3686317751U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-120))));
        var_21 = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        arr_7 [i_1] [14U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) * (((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)153), (arr_4 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)64), (min(((signed char)117), ((signed char)10))))))) : (3465824084441524784ULL)));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_3)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_17)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_8 [i_2])))))))));
    }
    var_24 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (unsigned char)85)))) : (((/* implicit */int) (signed char)-40)))));
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
}
