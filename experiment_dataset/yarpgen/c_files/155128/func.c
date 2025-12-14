/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155128
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_1)) ? ((+(var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)13)))))))));
                    var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [0U] [(short)2] [0U])) ? (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (max((((/* implicit */int) (short)9622)), (arr_0 [i_0] [i_2 - 2]))) : ((~(arr_4 [(short)12] [2] [i_1]))))) : (((((/* implicit */_Bool) max((arr_3 [i_2] [i_2] [i_2]), (arr_0 [i_2 - 2] [i_1])))) ? (arr_4 [i_2 + 3] [(signed char)6] [i_2 + 1]) : ((~(((/* implicit */int) (unsigned char)159))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
