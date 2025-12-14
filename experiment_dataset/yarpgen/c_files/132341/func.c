/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132341
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
    var_11 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) var_0);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_1 [i_0])) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) : (4294967295U)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) max(((signed char)-43), ((signed char)-52)));
        arr_9 [5] = ((/* implicit */_Bool) ((max((var_0), (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) ((arr_4 [i_1]) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_6 [i_1]))) - (56222LL)))));
    }
    var_13 = ((/* implicit */signed char) var_5);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_8))), (var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (((((/* implicit */_Bool) var_2)) ? (8332860547346196356ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26520))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
