/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188160
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
    var_19 = ((/* implicit */short) var_14);
    var_20 |= ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_6 [i_0] [(_Bool)1] [i_1] [i_0]))))))))));
                    arr_8 [i_1] = (signed char)126;
                    arr_9 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((arr_2 [i_1 - 1]) + (2147483647))) >> (((arr_2 [i_1 - 1]) + (1204919536))))) >> (((((arr_6 [i_1] [i_1 - 1] [(short)0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)5455))) : (-8309133856550108164LL))) - (5444LL)))))) : (((/* implicit */unsigned long long int) ((((((arr_2 [i_1 - 1]) + (2147483647))) >> (((arr_2 [i_1 - 1]) + (1204919536))))) >> (((((((arr_6 [i_1] [i_1 - 1] [(short)0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)5455))) : (-8309133856550108164LL))) - (5444LL))) + (8309133856550113608LL))))));
                }
            } 
        } 
    } 
}
