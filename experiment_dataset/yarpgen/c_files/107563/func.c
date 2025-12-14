/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107563
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)64))))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))))) : (((/* implicit */int) var_4))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1 + 1]))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) arr_0 [i_1])))))) <= (((((/* implicit */_Bool) 15964613978356261080ULL)) ? (var_5) : (((/* implicit */long long int) var_2))))))));
        arr_6 [11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])) ? ((~(var_11))) : (((((/* implicit */_Bool) var_13)) ? (var_6) : (var_9)))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_19 = ((/* implicit */signed char) arr_8 [i_2] [i_2]);
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)-123))));
    }
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_11)))) ? (((/* implicit */int) min((var_3), ((signed char)-113)))) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? ((-2147483647 - 1)) : ((-2147483647 - 1)))))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))) ? (((((((/* implicit */int) arr_8 [i_3] [i_3 - 1])) < (((/* implicit */int) arr_11 [i_3])))) ? (max((var_11), (((/* implicit */unsigned long long int) arr_8 [i_3 - 2] [i_3 - 1])))) : (((/* implicit */unsigned long long int) max((134209536U), (((/* implicit */unsigned int) (unsigned char)83))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)121)) / (((/* implicit */int) (unsigned short)36987)))))));
        arr_14 [i_3] [i_3] = (_Bool)1;
    }
    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)68)) <= (((((/* implicit */_Bool) var_2)) ? (2147483623) : (((/* implicit */int) (signed char)-125)))))))));
    var_23 = var_10;
}
