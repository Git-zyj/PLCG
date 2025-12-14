/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17336
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (-(1073741823LL)));
        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) var_5)) | (arr_1 [i_0 - 1])));
        var_21 = ((/* implicit */long long int) (+((-(15373050702084455237ULL)))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) min((-1073741824LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (var_17))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (((unsigned short) -1073741824LL))));
            var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((1073741824LL) << (((((/* implicit */int) arr_3 [i_2 + 2])) - (114))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(1073741824LL))))));
                arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_6)));
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((long long int) var_1));
            arr_14 [i_1] [i_1] = ((/* implicit */long long int) var_4);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_17 [i_5] = var_5;
        var_27 = ((/* implicit */signed char) arr_15 [i_5] [i_5]);
    }
    var_28 &= ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) var_0))));
    var_29 = ((/* implicit */unsigned short) var_16);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_16 [i_6 - 1]))))));
        var_31 = (+(arr_4 [i_6 - 2]));
    }
    for (unsigned int i_7 = 3; i_7 < 8; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_7 + 1] [i_7 - 3] [i_7]))))), (((var_10) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (var_3) : (var_8))))))));
        var_32 = ((/* implicit */signed char) ((long long int) var_1));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_33 = ((/* implicit */unsigned int) var_10);
        arr_26 [i_8] = ((/* implicit */unsigned char) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        var_34 = ((/* implicit */int) ((arr_1 [i_8]) >> (((arr_15 [i_8] [i_8]) - (2366369737U)))));
    }
}
