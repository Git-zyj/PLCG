/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146693
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
    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))))) ? (min((((((/* implicit */_Bool) (short)16810)) ? (((/* implicit */unsigned long long int) var_0)) : (16223166666040552331ULL))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] &= arr_0 [i_0];
        var_17 = ((/* implicit */int) ((2418666620144737326ULL) ^ (var_14)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_7) : (arr_6 [i_1]));
            var_18 = ((/* implicit */unsigned int) (~(((2053862666035776515LL) ^ (((/* implicit */long long int) var_7))))));
            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_3 [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -366356202)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (10298567200686928788ULL))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 366356202)) ? (arr_6 [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
        }
        var_21 = ((/* implicit */unsigned int) (-2147483647 - 1));
        var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (arr_3 [i_1]) : (((/* implicit */int) var_5))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) (-(var_7)))) : (((((arr_10 [i_3]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_9 [i_3])) - (25245))))))), (((/* implicit */long long int) (~(((/* implicit */int) max((arr_9 [i_3]), (arr_9 [i_3])))))))));
        arr_11 [i_3] = ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_3]))) ? (((arr_10 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))) : (((/* implicit */long long int) -2147483639)));
        var_24 = ((/* implicit */unsigned long long int) -2744933776220601956LL);
    }
}
