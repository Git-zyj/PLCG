/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114442
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
    var_17 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((var_15) && ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((var_9), (((/* implicit */unsigned long long int) (short)8188))))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((short)-5105), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) (_Bool)1))));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (4294967295U)))))) ^ ((~(((var_9) >> (((/* implicit */int) (unsigned char)31))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) 18446744073709551596ULL);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((short) ((unsigned long long int) (short)-32668)));
        var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (4294967280U))) | (((unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)8188)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_13)))))) && ((!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))));
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
}
