/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101146
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
    var_14 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65512)))))) ? (((/* implicit */int) arr_3 [i_0])) : ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_5 [i_2]))))))) : (min(((~(((/* implicit */int) arr_3 [(unsigned short)4])))), (var_10))));
                    var_16 |= ((/* implicit */int) var_11);
                    arr_8 [i_0] [i_1] [(unsigned char)5] = var_3;
                    var_17 = min(((~(((/* implicit */int) max((arr_3 [i_2]), ((short)-4096)))))), (((((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_1])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)11)))) + (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
}
