/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169122
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (short)-32648);
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)58739)) ? (((/* implicit */int) (short)12693)) : ((-2147483647 - 1))));
                    arr_10 [i_2] [i_2] [8ULL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)32648)) % (((/* implicit */int) var_7))))))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1])) ? (arr_7 [10] [i_2 + 1] [i_2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)101)))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32647))))) : (((/* implicit */int) var_8)))) * (((/* implicit */int) var_4))));
    var_13 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)12678)) : (var_3));
}
