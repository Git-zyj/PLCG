/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18908
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [3U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775806LL) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))) - (arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 2])))) ? (((((/* implicit */_Bool) ((var_0) << (((var_0) - (1341178120U)))))) ? (((arr_2 [i_0]) << (((/* implicit */int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32767))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1])) ? (((/* implicit */int) (short)10479)) : (((/* implicit */int) var_13)))))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (short)14642)) : (((/* implicit */int) (short)32760))))) & (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2]))) / (4294967291U)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) | (var_11))) : (var_10)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32760))))) ? ((-(((/* implicit */int) max(((short)-32746), ((short)-9)))))) : (((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)207)))) + (141)))))));
    var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 5135211013103382331ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32745)))) % (((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) (short)-15573))))))))) ? (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5135211013103382331ULL)))))))) : (((/* implicit */long long int) ((((1489801157U) * (var_2))) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
}
