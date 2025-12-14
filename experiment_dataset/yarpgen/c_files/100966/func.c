/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100966
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
    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned int) var_5)), ((~(986493130U))))) : (var_17)));
    var_21 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) 986493130U);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)47195)) : (((/* implicit */int) (unsigned short)18313))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned short i_3 = 4; i_3 < 14; i_3 += 4) 
            {
                {
                    var_23 *= ((/* implicit */short) var_14);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_24 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) var_15)) + (986493118U)));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((int) 0ULL))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4]))))) ^ (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_19)))))))) : (var_13)));
                                arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50171))) & (3643184770U)))) ? ((+(((/* implicit */int) min((var_7), (var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_4 + 1] [i_2])))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_3 - 4] [i_3 - 2])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    arr_23 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12394)) ^ (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-8511)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_10))))))));
                }
            } 
        } 
        arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_13)))) ? (((/* implicit */unsigned long long int) min((3308474165U), (var_13)))) : (min((8602375603304598495ULL), (8602375603304598495ULL)))))));
        arr_25 [i_1] |= ((/* implicit */unsigned int) (unsigned short)30952);
    }
}
