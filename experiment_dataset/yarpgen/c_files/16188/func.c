/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16188
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (-(-8222895650879111212LL)));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_17 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [(unsigned char)10] [(unsigned char)10] [i_2])))))))));
                    var_18 = ((/* implicit */int) ((signed char) (unsigned char)0));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (arr_2 [i_2] [(unsigned char)4] [i_0])));
                }
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [14] [i_0]), ((unsigned char)255))))) : (((((/* implicit */_Bool) (short)-2007)) ? (((/* implicit */long long int) 3756925051U)) : (-1796948015289235821LL)))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [2U])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(short)1] [i_0] [i_1])) >> (((((/* implicit */int) var_3)) - (192)))))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_7))))) : (((/* implicit */int) min(((short)-30317), (((/* implicit */short) var_7)))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31796))) | (var_6)));
}
