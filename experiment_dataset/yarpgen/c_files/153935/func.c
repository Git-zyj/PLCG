/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153935
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) ((arr_0 [i_0]) && (arr_0 [i_0]))))));
        var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [10LL]))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_1])), (((arr_0 [i_1]) ? (-66192403) : (((/* implicit */int) arr_0 [i_1]))))))) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_1])) == (((((/* implicit */_Bool) 66192398)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (7841447799351750316ULL))))))));
        arr_5 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) ((3794992953U) | (((/* implicit */unsigned int) 66192396))))))), (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_2 [i_2]))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (-1557126347)));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_3 [i_2])) + (((/* implicit */int) arr_3 [i_2])))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))) ? (var_7) : (var_0)));
}
