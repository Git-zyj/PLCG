/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170332
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
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) var_5))))))));
    var_20 = ((/* implicit */int) var_7);
    var_21 = ((/* implicit */short) var_10);
    var_22 -= ((/* implicit */unsigned int) var_14);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 3847198732321849847ULL)) && (((/* implicit */_Bool) var_12))))) | (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_2] [i_2])) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : ((((!(((/* implicit */_Bool) 14599545341387701769ULL)))) ? (max((14599545341387701768ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_18))))))));
                    arr_9 [i_2] [i_1 - 3] [i_2 + 2] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) arr_5 [i_0] [i_2] [i_1] [(unsigned short)11]))), (3847198732321849857ULL)))) ? (((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_4 [i_2] [i_1 + 1] [i_1] [i_2]))) ^ (((/* implicit */unsigned long long int) (~(arr_7 [i_2] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-361)))));
                }
            } 
        } 
    } 
}
