/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184472
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
    var_14 *= min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % ((-(((/* implicit */int) var_8))))))), (min((((/* implicit */unsigned long long int) (-(-1LL)))), (((unsigned long long int) var_9)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(18446744073709551614ULL)));
        var_15 = min((((((/* implicit */_Bool) (short)-19661)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (-((~(var_2)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((min((((/* implicit */unsigned short) (short)-29601)), (var_8))), (((/* implicit */unsigned short) var_13)))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (+(arr_4 [i_1])));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(arr_1 [(short)13])))))))))));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) arr_8 [4U]);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_18 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_9 [i_2]))))));
            arr_13 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))), (((unsigned long long int) (~(((/* implicit */int) arr_11 [i_2])))))));
            arr_14 [i_2] [i_3] [i_2] = ((/* implicit */signed char) arr_12 [i_2] [i_2] [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (arr_9 [i_2]))) <= (arr_17 [i_2] [i_2])));
            var_19 = (-(arr_12 [i_2] [i_2] [i_2]));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_24 [i_5] [i_6] [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((unsigned short) var_3))) << (((max((((/* implicit */unsigned long long int) (short)-29611)), (10789670991018715563ULL))) - (18446744073709521994ULL))))));
            var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1945212115U)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5])))), (((/* implicit */int) arr_19 [i_6]))));
        }
        var_21 ^= ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_7 [i_5]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_6);
    var_23 = ((/* implicit */unsigned long long int) var_7);
}
