/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108904
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
    var_18 = ((/* implicit */unsigned long long int) min(((unsigned short)24709), ((unsigned short)40826)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 2] = (-(max((((/* implicit */unsigned long long int) arr_3 [i_2] [3LL])), ((~(var_11))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)38)), ((unsigned short)40827)))), (max((var_13), (((/* implicit */unsigned long long int) var_14)))))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (arr_6 [i_2 - 2] [i_2 - 2] [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_11);
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19232))) / (max((var_11), (((/* implicit */unsigned long long int) var_9))))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)24713)))) << (((((/* implicit */int) var_6)) - (190))))), (((/* implicit */int) (unsigned short)40822)))))));
}
