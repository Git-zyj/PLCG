/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162640
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned short)10] [i_1] = ((/* implicit */signed char) (~(1098974756864LL)));
                var_14 = ((/* implicit */signed char) 1777261178);
                var_15 = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1098974756888LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (-1098974756861LL)));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(var_0))))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)28062)) >> (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_2])))) - (14)))));
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_3))));
    var_20 = ((/* implicit */unsigned short) ((var_3) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
