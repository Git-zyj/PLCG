/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188669
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((signed char) ((arr_1 [i_0]) ^ (arr_1 [i_0 - 2]))));
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 688224786U)) ? (((/* implicit */int) (unsigned char)33)) : (-122296106)));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((max((arr_3 [i_1 + 1]), (arr_3 [i_1 - 2]))) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_1 - 1]))))));
        var_17 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1])))));
    }
    var_18 = ((/* implicit */short) 18446744073709551603ULL);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551608ULL))))), (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) -122296106))))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_13);
        var_20 += ((/* implicit */unsigned long long int) arr_7 [i_2]);
        var_21 = ((/* implicit */int) var_2);
        var_22 = ((/* implicit */unsigned int) arr_7 [i_2]);
    }
}
