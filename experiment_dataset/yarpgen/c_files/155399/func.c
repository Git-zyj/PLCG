/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155399
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) 1969430923)) + (arr_0 [i_0]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) 1969430923);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)17115))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) 201326592U)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)58729)))))));
        arr_12 [i_0] = ((/* implicit */unsigned short) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_17 &= min((((/* implicit */unsigned int) var_8)), ((+((-(var_6))))));
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (max((max((201326592U), (((/* implicit */unsigned int) (unsigned short)17117)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535))))))) : (var_13)));
}
