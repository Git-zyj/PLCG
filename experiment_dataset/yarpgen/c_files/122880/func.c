/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122880
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) (!(((_Bool) var_6))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((signed char) 4294967295U))))) : (var_2))))));
    var_12 += ((/* implicit */signed char) ((unsigned short) (!((_Bool)1))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | (var_1)))) ? (((/* implicit */int) ((unsigned char) arr_1 [(_Bool)1] [i_0 - 2]))) : ((-(((/* implicit */int) ((short) var_3)))))));
        var_14 -= ((/* implicit */int) arr_0 [(short)16]);
        var_15 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((((-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) arr_5 [i_1]))))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((arr_3 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))))));
        var_17 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)7216)))))))) ^ (((/* implicit */int) arr_5 [i_1])));
        var_18 += ((/* implicit */unsigned short) arr_4 [(unsigned short)14]);
        arr_6 [(unsigned short)20] [i_1] |= ((/* implicit */signed char) (+((~(((arr_4 [i_1]) + (arr_4 [6U])))))));
        arr_7 [i_1] = ((1410028383U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_19 = ((unsigned short) arr_5 [i_2]);
        arr_10 [(short)6] |= ((/* implicit */short) ((unsigned short) arr_5 [(_Bool)1]));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_2]))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_5 [i_3]))))))))));
        }
        var_21 -= ((/* implicit */short) (~(((/* implicit */int) arr_11 [(unsigned char)6] [i_2] [i_2]))));
    }
}
