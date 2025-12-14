/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144762
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
    var_10 = ((((/* implicit */int) var_5)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1382955317)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-26059))))) ? (((/* implicit */int) (short)26058)) : (8388604))));
    var_11 = ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) 8388604)), (9223372036854759424ULL))) > (9223372036854792192ULL)))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)11])), (9223372036854759421ULL))) : (min((arr_2 [(unsigned short)10] [i_1]), (var_3)))))));
                var_13 *= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-14)), (((((/* implicit */_Bool) min(((short)2394), (((/* implicit */short) (signed char)-58))))) ? (((/* implicit */int) (short)-26072)) : ((+(((/* implicit */int) (unsigned char)249))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_14 -= ((/* implicit */short) ((arr_2 [i_2] [i_0]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-14)) != (((/* implicit */int) (short)32745))))) : (((/* implicit */int) ((signed char) arr_1 [i_0])))));
                }
                var_15 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (((9223372036854759424ULL) | (((/* implicit */unsigned long long int) 8388604)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (short)-1);
}
