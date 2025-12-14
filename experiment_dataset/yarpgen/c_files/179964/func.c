/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179964
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
    var_14 = ((/* implicit */int) var_3);
    var_15 = ((/* implicit */short) max((var_15), (((short) var_11))));
    var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) -1182428702)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)6644))))) : (((/* implicit */long long int) var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (4205545353U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)6625))))) : (((long long int) (_Bool)1)))))));
            var_18 *= ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1] [i_0]))));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-10751)) ? (((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1431219223U)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_7 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (short)32386)) % ((+(((/* implicit */int) arr_1 [i_2]))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_2])))))));
            arr_8 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_1 [i_0]))));
            var_22 += ((/* implicit */unsigned char) ((arr_10 [i_0] [i_3]) - (((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3])) | (arr_10 [i_0] [i_0])))));
        }
        arr_11 [i_0] = ((/* implicit */long long int) (unsigned short)65535);
    }
}
