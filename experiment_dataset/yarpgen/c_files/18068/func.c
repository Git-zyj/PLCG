/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18068
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
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) >> ((((+(var_17))) - (1272636820))))) - ((~((+(((/* implicit */int) (signed char)98))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 9575827252244152307ULL)) ? (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0])))) : (18249073405616249008ULL)));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1134907106097364992ULL)) || (((/* implicit */_Bool) (unsigned short)65516)))) ? (((((/* implicit */_Bool) var_16)) ? (arr_1 [9ULL] [i_0]) : (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
        var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_5 [(unsigned char)21] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [(_Bool)1])), (648037736)))) || ((!(((/* implicit */_Bool) 2942687504U))))));
        var_21 *= ((/* implicit */_Bool) max((min((((/* implicit */int) var_8)), (-2147483634))), (((/* implicit */int) (unsigned short)65533))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)44)) ^ (arr_3 [i_1 - 1]))) * (((/* implicit */int) arr_4 [i_1 - 2]))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_8 [(unsigned char)13] [(unsigned char)13] = ((/* implicit */short) arr_4 [19]);
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17456)) ? (-1474577918) : (((/* implicit */int) (signed char)-74))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)160)) && ((!(((/* implicit */_Bool) var_9))))));
}
