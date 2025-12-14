/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162006
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) ((short) var_5));
                    var_19 -= ((/* implicit */unsigned int) (((((_Bool)1) ? ((+(arr_5 [i_0] [i_1] [i_0 + 2] [i_0 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)129)) && (((/* implicit */_Bool) var_12)))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))))) >= (min((((/* implicit */unsigned long long int) arr_4 [i_2] [(_Bool)1] [i_0])), (var_14)))))))));
                }
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)146))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_3)) : (var_11)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 1139529490628215636ULL))))) << (((/* implicit */int) ((arr_3 [i_0 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) : (((/* implicit */int) ((_Bool) (~(var_14)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)166))))) ? (var_1) : (((/* implicit */long long int) 268822891U))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)39605)) : (((var_15) / (((/* implicit */int) (short)9947)))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned char)122)))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_17))));
}
