/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140351
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
    var_16 = ((/* implicit */signed char) 839518280U);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [0U]))))) ? (((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [(_Bool)1])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)42890)), (var_10)))) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((((/* implicit */int) (unsigned char)163)) >> (((((/* implicit */int) var_12)) - (33)))))))));
        var_18 &= ((/* implicit */int) -1560913514889362734LL);
        var_19 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_21 = ((/* implicit */long long int) 18446744073709551599ULL);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_5 [6LL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [(signed char)0] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (short)-17344))))));
        var_22 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24563))) : (4649580140656810561LL))) ^ (((/* implicit */long long int) ((unsigned int) -4649580140656810561LL))))), (((/* implicit */long long int) (((+(-4649580140656810561LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42888))))))));
        var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (_Bool)0))));
        var_24 *= ((/* implicit */_Bool) max((((long long int) arr_3 [i_1])), (((/* implicit */long long int) (unsigned short)17705))));
        var_25 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */long long int) arr_3 [i_1])), (-4649580140656810562LL))));
    }
}
