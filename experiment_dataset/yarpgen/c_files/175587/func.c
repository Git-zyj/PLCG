/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175587
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
    var_12 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) -1596407919)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */short) ((unsigned short) var_11));
    var_14 &= ((/* implicit */long long int) ((short) min((var_5), (((/* implicit */unsigned short) var_9)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (2936076776172908460ULL) : (((/* implicit */unsigned long long int) var_1)))))))));
        var_16 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (var_10))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */short) ((unsigned short) var_10));
            var_18 = ((long long int) arr_5 [i_1] [i_1]);
        }
        var_19 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_3 [i_1])) ? (var_3) : (((/* implicit */unsigned int) -1642923998)))))) < (var_8)));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_5 [i_1] [i_1]))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((arr_3 [i_3]) - (arr_3 [i_3]))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        arr_11 [12LL] = (+(((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)255)))));
        var_21 = ((/* implicit */int) ((unsigned long long int) var_10));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)209))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2019858769)))))) % (min((arr_15 [i_5 - 1] [i_5 - 1]), (((/* implicit */long long int) var_8))))));
            arr_19 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_8)));
        }
    }
}
