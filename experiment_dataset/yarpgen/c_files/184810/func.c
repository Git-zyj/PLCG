/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184810
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
    var_16 = ((/* implicit */unsigned short) -259584546);
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)112)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) var_12)))))))) && (((/* implicit */_Bool) var_2))));
    var_18 = ((/* implicit */short) var_12);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)8192)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (+(((((((/* implicit */int) (unsigned char)178)) | (-182315489))) ^ ((~(((/* implicit */int) var_2))))))));
                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16625))) / (18446744073709551610ULL)))));
            }
        } 
    } 
}
