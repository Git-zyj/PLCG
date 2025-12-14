/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144102
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 1774274210))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */int) (short)-1)) : (var_6)))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 - 2])) * (((/* implicit */int) arr_3 [i_1 - 2])))))));
                var_15 *= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)65527)), ((~(((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (short i_3 = 4; i_3 < 9; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_3])) : (((/* implicit */int) arr_7 [i_3 + 1] [9])))) : (max((-1699909871), (((/* implicit */int) (unsigned char)51)))))))));
                arr_10 [i_2] [i_3 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_3 - 3] [i_3 - 3])) : (((/* implicit */int) arr_8 [i_3 - 4] [i_3 - 4])))))));
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) min(((signed char)67), (((/* implicit */signed char) arr_4 [i_2] [i_2]))))) > (((/* implicit */int) arr_1 [i_2]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                var_18 |= ((/* implicit */_Bool) (+(((var_1) ? (1394195293U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_4])))))));
                arr_15 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned char)16), (((/* implicit */unsigned char) arr_12 [i_4] [i_5]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))) ? (((var_10) / (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4] [i_5])) * (((/* implicit */int) var_13))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-18230)) : (arr_11 [8]))), (((1956192630) / (((/* implicit */int) var_9)))))))));
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_5]))) : (var_11)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (short)4095)) : (var_6)))))))));
}
