/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165818
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) ((signed char) var_2)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) max((arr_2 [i_0]), (arr_2 [i_0]))))), (var_11)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (max((((/* implicit */long long int) var_12)), (((((-4543038753344346614LL) + (9223372036854775807LL))) >> (((var_14) - (1736014000176823676LL)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_21 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((short) (unsigned char)133))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
        }
    }
    var_23 = var_1;
}
