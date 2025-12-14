/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114627
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
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (1000859835U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)45256)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))));
    var_14 += ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_10)))))) + (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (-674191097)))) >= (arr_1 [i_0])))), (((((((/* implicit */unsigned long long int) var_4)) + (arr_1 [i_0]))) << (((((/* implicit */int) var_0)) - (37828)))))));
        var_15 = ((/* implicit */int) ((unsigned int) 3775421590021854686LL));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_3 [i_1])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3821615431185157670LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)32752))))));
        var_17 = ((/* implicit */long long int) arr_4 [i_1]);
        var_18 ^= ((/* implicit */signed char) ((unsigned long long int) (short)-1));
        arr_5 [2LL] [i_1] |= ((/* implicit */unsigned char) (signed char)124);
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_19 += ((/* implicit */_Bool) (short)-30159);
        var_20 = ((/* implicit */unsigned int) max((var_20), ((-(((((/* implicit */_Bool) 3995409449U)) ? (1489398800U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    }
    var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (288230238712758272ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((var_6) << (((/* implicit */int) var_12)))))));
}
