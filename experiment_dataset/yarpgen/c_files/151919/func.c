/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151919
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
    var_17 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (short)1)))) < ((~(arr_0 [i_0]))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))))) : (min((((/* implicit */unsigned int) arr_0 [i_0 - 2])), (((var_1) ? (970044118U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38229)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_0 - 3])))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_0] [i_0 + 1])) ? (arr_5 [i_1 - 1] [i_0 - 3] [i_0 - 3]) : (arr_5 [i_1 - 2] [i_1 - 2] [i_0 - 4]))) : (arr_5 [i_1 - 3] [i_1] [i_0 - 3])));
                    arr_10 [i_0 - 2] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_2 + 2]), (((/* implicit */signed char) var_14))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_1 [i_2 - 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (arr_8 [i_1 + 1] [i_2 + 1] [i_2]))) <= (((((/* implicit */unsigned int) arr_15 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) / (arr_8 [i_1 - 3] [i_2 + 3] [i_2])))));
                                var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (arr_7 [i_0 - 4] [i_2 + 3] [i_3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)27886)) : (((/* implicit */int) var_6))))))));
                                var_20 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min(((short)9920), (((/* implicit */short) (unsigned char)164))))) ? (var_16) : (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255)))))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_5]) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned long long int) var_16))))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_5])) / (((/* implicit */int) arr_17 [i_5]))))) ? ((~(arr_18 [i_5]))) : (arr_19 [i_5])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_19 [i_5]))) > (min((((/* implicit */long long int) var_1)), (arr_19 [i_5])))))) : (((/* implicit */int) ((arr_19 [i_5]) > (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
    }
    var_22 |= ((/* implicit */unsigned short) ((short) var_14));
    var_23 = ((/* implicit */unsigned int) ((max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9601508110978473497ULL)) ? (var_10) : (((/* implicit */int) var_11))))))) > (max((((/* implicit */unsigned long long int) var_1)), ((~(var_5)))))));
}
