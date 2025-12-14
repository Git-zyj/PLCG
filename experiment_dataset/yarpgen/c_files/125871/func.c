/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125871
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
    var_13 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) var_5)))));
    var_14 = (unsigned short)65526;
    var_15 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) var_1);
                    var_17 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((7613395219232173519ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
                    var_18 = ((/* implicit */int) min((((arr_1 [i_1 + 2]) >> (((arr_1 [i_1 + 3]) - (2748323862U))))), (((/* implicit */unsigned int) var_4))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)63)) && (((/* implicit */_Bool) (unsigned char)255))))), ((-(var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)19)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)58217))))))) : (var_0)));
}
