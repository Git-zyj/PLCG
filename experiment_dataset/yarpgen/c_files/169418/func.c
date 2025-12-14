/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169418
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30089)) ? (min((((/* implicit */int) (signed char)-88)), ((-(-831844383))))) : (((/* implicit */int) (unsigned short)24762))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_21 = ((/* implicit */int) arr_1 [i_0]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((var_11), (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (var_11)))) ? ((-(arr_1 [2ULL]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) > (var_7)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)201)) : (var_18)))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) (signed char)-88)))), ((~(((/* implicit */int) (_Bool)1)))))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)24786)), (arr_1 [(short)5])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (short)12452))))))));
        var_23 |= ((/* implicit */short) (+(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_2])) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) arr_8 [i_2] [i_2]);
    }
}
