/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154869
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
    var_18 &= ((/* implicit */unsigned short) (((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)204)))))) >> (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_16))))))));
    var_19 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1170909290U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (unsigned short)27036)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_13))))))) >> (((max((7059210852828623970ULL), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) - (13438616823592352780ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) min(((+(min((var_4), (arr_5 [i_0] [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) min((var_15), (arr_2 [2ULL])))))))));
                arr_7 [i_0] [i_0] = ((short) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])), (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) arr_3 [i_0 + 2] [i_1 + 1]))), (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_1 - 1])), (var_7)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */short) var_9);
}
