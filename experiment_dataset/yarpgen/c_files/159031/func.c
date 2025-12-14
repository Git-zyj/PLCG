/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159031
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) (signed char)0))))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)29)), (8682186502501601760LL)))) ? (15620731090745417421ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)99)))))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */_Bool) var_8)) ? (arr_0 [9LL]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56413)) << (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (signed char)-30);
    var_14 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) var_5);
                    arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max(((-(6752728852564751746ULL))), (max(((~(var_7))), (((/* implicit */unsigned long long int) arr_1 [i_2]))))));
                    var_16 = ((((((/* implicit */_Bool) (short)29)) ? (((/* implicit */unsigned long long int) ((595696971560944014LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3])))))) : (min((arr_13 [i_2]), (((/* implicit */unsigned long long int) (short)29)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [(_Bool)1] [i_3])))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) (signed char)99);
        arr_15 [i_2] = ((/* implicit */long long int) ((signed char) (unsigned char)188));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) 6752728852564751746ULL))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) (unsigned short)9544)), (var_4))))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2])))))));
        var_19 = ((/* implicit */unsigned long long int) (-(2259815035U)));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) arr_6 [i_5]));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((2259815035U) - (2259815010U))))))));
        arr_26 [i_6] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))) : (0U)));
        var_21 = ((/* implicit */_Bool) (~(arr_24 [i_6] [i_6])));
    }
}
