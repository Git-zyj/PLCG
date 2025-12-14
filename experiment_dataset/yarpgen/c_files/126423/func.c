/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126423
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
    var_10 = ((/* implicit */signed char) ((var_3) != (max((((/* implicit */long long int) var_9)), (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_3)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [14ULL] [(unsigned char)18] [(unsigned char)2] = ((((/* implicit */unsigned int) -1629618976)) != (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1474993984751294053ULL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)166))))) : (((127U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 + 3] [11]))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((arr_5 [i_2]) * (((/* implicit */int) ((((((/* implicit */_Bool) -779326959)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned short)38492)))) == (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)0) ? (354392597) : (var_8)))) ? (var_4) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_7) : (((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) (_Bool)1))));
}
