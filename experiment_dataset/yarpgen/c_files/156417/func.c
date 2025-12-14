/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156417
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
    var_12 = var_5;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((var_3) * (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((long long int) var_3)))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] = (short)19912;
            arr_11 [i_1] = ((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) (+(0ULL)))) ? (((/* implicit */unsigned int) arr_0 [i_1] [i_1])) : (((((/* implicit */_Bool) var_8)) ? (arr_8 [(_Bool)1] [i_1]) : (((/* implicit */unsigned int) var_10)))))) - (2107174925U))));
            var_14 = ((/* implicit */short) var_10);
        }
        for (int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            arr_14 [i_1] [i_1] = ((/* implicit */long long int) var_2);
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_6 [i_3 - 1] [i_1]))));
        }
        for (int i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_7))));
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) || (((/* implicit */_Bool) 13ULL))));
            arr_19 [i_1] [i_1] = ((/* implicit */short) (~(19ULL)));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((var_9) % (((/* implicit */int) (signed char)-84)))))));
            arr_20 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */unsigned long long int) -1509703218)) : (18446744073709551597ULL)));
        }
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (5090757771262546548ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_4))))))))));
    }
    var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 4224657720827310534LL)) ? (var_7) : (var_9))) : (((/* implicit */int) var_11))))));
    var_20 = ((/* implicit */signed char) var_3);
    var_21 = var_8;
}
