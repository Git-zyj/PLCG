/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187809
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
    var_14 = ((/* implicit */unsigned char) (~((-((-(((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min(((!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))))), (var_7)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) -1547912987))))) - (((/* implicit */int) ((short) var_5))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_0)))));
        var_15 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_8)))))) % ((+((~(((/* implicit */int) var_5))))))));
        var_16 = ((/* implicit */_Bool) var_11);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (max((var_9), (var_6)))))), (max((((/* implicit */unsigned int) var_10)), (var_11)))));
        arr_11 [i_2] [i_2 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)3072))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            {
                arr_17 [i_4] = ((/* implicit */long long int) (-(max((((/* implicit */int) var_13)), ((-(((/* implicit */int) var_1))))))));
                arr_18 [i_3] [i_4] = ((long long int) ((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) - (13092)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((((/* implicit */int) var_7)), (var_6)))), (((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) var_12)) + (138))) - (56))))))), (((/* implicit */long long int) var_8))));
}
