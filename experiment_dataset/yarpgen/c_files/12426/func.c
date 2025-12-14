/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12426
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
    var_15 = ((/* implicit */long long int) ((int) ((((min((var_10), (((/* implicit */int) var_1)))) + (2147483647))) << (((/* implicit */int) var_6)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (unsigned char)39);
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */int) var_11)), (var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (18446744073709551608ULL)));
        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (min((10ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-39)) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 4]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 2])));
        }
        for (long long int i_3 = 1; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551596ULL)));
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */short) arr_8 [i_3]);
        }
        arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)74))))) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1])))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */signed char) (~(-384287329)));
        arr_20 [i_4] [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        arr_25 [i_5] = ((/* implicit */_Bool) var_7);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((596467578) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)38))))) ? (((/* implicit */int) (signed char)1)) : (((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [(unsigned char)6]))))));
        arr_26 [i_5] |= ((/* implicit */signed char) max((arr_23 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_21 [i_5]))));
    }
    var_21 = var_1;
}
