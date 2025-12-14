/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165565
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) (signed char)65);
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) << ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((var_0) - (1970476682))))))))) : (((/* implicit */int) (unsigned short)0))));
                    var_12 *= ((/* implicit */unsigned char) ((_Bool) ((short) (unsigned short)65535)));
                    arr_7 [(short)16] [i_1] [0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (+(((long long int) 2147483632)))));
                }
            } 
        } 
    } 
    var_13 = max((((/* implicit */unsigned char) var_1)), (var_5));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) max((arr_12 [i_3] [i_3] [i_3]), (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) / (418240573947344486LL))))))));
                    var_15 = ((/* implicit */unsigned char) arr_8 [(short)3] [i_5]);
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_3] [i_5]))));
                    arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) max((arr_10 [i_3] [i_4 + 1]), (var_0)))) : (min((((/* implicit */long long int) (signed char)-53)), (-1145901413968121921LL)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) var_8)) : (((13293050905534155290ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? ((((((~(7961426682729300367LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (short)4357)) - (4357))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) | (var_10))))))));
}
