/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177340
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
    var_16 = ((/* implicit */unsigned char) (~(max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (1494205981) : (((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) 3329963431U)) ? (((/* implicit */unsigned long long int) 1626831918)) : (0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)23027)) != (0)))))))));
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_7), (((/* implicit */long long int) 2029336025)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (-14) : (((/* implicit */int) (unsigned short)33437)))))))) ? (((/* implicit */int) arr_3 [i_0] [12] [i_2])) : (((/* implicit */int) (unsigned short)14611))));
                    var_18 *= ((/* implicit */unsigned char) ((unsigned long long int) (signed char)0));
                    var_19 = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_1])) >> (((((/* implicit */int) (short)32767)) - (32762))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)23045)) : (var_5)))) ? (70030409) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((-5401618977678476367LL), ((+(((long long int) var_2)))))))));
    var_21 = ((/* implicit */unsigned short) var_10);
}
