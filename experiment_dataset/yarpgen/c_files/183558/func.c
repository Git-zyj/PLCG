/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183558
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
    var_11 = ((/* implicit */_Bool) var_10);
    var_12 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_8)))) ? (((((/* implicit */_Bool) (short)14142)) ? (1970741272) : (((/* implicit */int) (signed char)108)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) == (4746765332846721906ULL))))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (min((var_9), (((/* implicit */long long int) (unsigned char)253))))))) : ((-(((/* implicit */int) max(((unsigned char)251), (arr_1 [(short)7] [i_0]))))))));
        var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (short)-14143)) : (((/* implicit */int) (short)14148)))))));
    }
    var_15 = ((/* implicit */signed char) 13699978740862829709ULL);
}
