/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145152
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (5834656687918515731LL) : (((/* implicit */long long int) min((var_0), (((/* implicit */int) (_Bool)1))))))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_6)))) ? (((unsigned int) -3518637869338097039LL)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))))) + (((/* implicit */unsigned int) (-(var_6))))));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_5);
        var_17 += ((/* implicit */unsigned short) ((min((min((var_8), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_7) : (((/* implicit */int) var_10))))))) != (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-77)))))));
        var_18 = ((/* implicit */signed char) (~(max((arr_0 [i_1 - 1]), (((/* implicit */int) arr_1 [i_1 + 2]))))));
        var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) (short)-7))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) (short)16521)) : (((/* implicit */int) arr_2 [i_1 + 1])))));
    }
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (var_7) : (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (1496907978)))));
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (var_7))))) + (min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)-17))))));
}
