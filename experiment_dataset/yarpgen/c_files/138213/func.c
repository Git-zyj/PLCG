/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138213
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) min((min(((unsigned char)191), ((unsigned char)65))), (max(((unsigned char)65), (var_1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967295U)))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)65)), ((short)24420)))) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (~(16U)));
        var_13 += ((/* implicit */short) var_7);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))));
        arr_4 [(signed char)9] = var_10;
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [(unsigned short)8] [i_1] [4] = ((/* implicit */short) var_5);
                        arr_14 [(unsigned short)8] [i_1] = ((/* implicit */signed char) (+(6U)));
                        var_14 -= ((/* implicit */_Bool) var_10);
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [(short)1]))));
                    }
                } 
            } 
        } 
    }
}
