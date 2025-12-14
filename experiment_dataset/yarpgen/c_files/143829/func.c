/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143829
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
    var_16 = ((/* implicit */_Bool) ((short) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1257535202U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    var_17 ^= ((/* implicit */unsigned long long int) (+(((3037432093U) * (var_13)))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) * (((((/* implicit */int) (short)-20270)) ^ (((/* implicit */int) (unsigned char)216))))));
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
                    var_18 = ((/* implicit */short) var_0);
                }
                for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) (unsigned char)200))), ((-(((/* implicit */int) var_1))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_5))));
                }
                arr_15 [i_0] [10] [i_1] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))))), (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (759074083U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned char)187)) : (var_15))), (((/* implicit */int) min((var_14), (((/* implicit */short) (_Bool)1)))))))) >= (var_0)));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_4)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)12068))))))) ? (max((min((((/* implicit */unsigned int) var_10)), (var_11))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2309116878092460725LL)) ? (793025989) : (((/* implicit */int) (short)-1621)))))));
}
