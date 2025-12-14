/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112422
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
    var_17 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */int) arr_1 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */signed char) var_1);
                                var_20 = ((/* implicit */_Bool) min((min((((var_7) % (1464467227))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_0] [16] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */int) (unsigned char)254)) % (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_9 [i_0] [7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [(short)10] [(_Bool)1]))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] [i_4 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0 + 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned char)242)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) : (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) : (arr_10 [i_4 + 3] [i_1] [i_2] [i_2] [i_4] [i_3])))));
                                arr_13 [i_1] [i_1] [i_0] [i_2] [i_4] [15ULL] = ((/* implicit */_Bool) var_12);
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [9] [i_2] [i_3] [i_3] [i_4 - 2]))) != ((-(var_9))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) arr_5 [i_2] [1] [i_0]);
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)31539)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23798)) >> (((((/* implicit */int) var_2)) - (30999)))))) ? (var_13) : (((/* implicit */int) (unsigned char)167))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_16))))))));
    var_25 = ((/* implicit */unsigned long long int) var_13);
}
