/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142800
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (+(481525149U)));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)56)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) var_5)) ? (874135432) : (((/* implicit */int) (short)-25548)))) : ((~(var_3)))));
                        var_18 -= ((/* implicit */_Bool) var_4);
                        var_19 ^= ((/* implicit */unsigned char) (~(var_8)));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)46)))) : (((/* implicit */int) (signed char)-69)))))));
                    }
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((max((874135418), (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)56188)))))), (1152656891))))));
                }
                arr_10 [i_0] [i_0] [i_1] = (_Bool)1;
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (+((~(((/* implicit */int) min(((unsigned char)62), ((unsigned char)84))))))));
}
