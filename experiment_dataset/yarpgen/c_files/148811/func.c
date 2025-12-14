/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148811
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((((/* implicit */_Bool) (unsigned char)204)) ? (var_10) : (((/* implicit */int) (unsigned char)2)))) - (1623869666)))))) * (var_0)));
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)248))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [i_1]);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_20 = ((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (var_4))), (14313329298475735575ULL))) - (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 2])))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)768)) && (((/* implicit */_Bool) (short)4096))))))))));
                arr_7 [12ULL] |= ((/* implicit */signed char) 3001881362U);
            }
        } 
    } 
}
