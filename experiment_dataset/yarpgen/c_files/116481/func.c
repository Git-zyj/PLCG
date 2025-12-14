/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116481
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
    var_16 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_1), ((unsigned short)18891)))) * (((/* implicit */int) var_4))))), (var_8));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (6385007918253564563ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), ((short)4583)))) ? (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_0)))) : (var_14))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = arr_2 [i_0];
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_6);
                                arr_16 [i_0] [i_1 - 3] [i_0] [i_1 - 3] [i_3] [i_3] [i_0] = ((/* implicit */int) ((long long int) ((short) arr_1 [i_0])));
                                var_20 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) % (max((7284433016689863297ULL), (((/* implicit */unsigned long long int) (unsigned short)18891)))))));
                                arr_23 [16LL] [i_0] [(unsigned char)4] [i_5] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 811627524)) ? (arr_13 [i_0] [i_5] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_6] [i_6] [i_0] [i_6] [i_0]))))) ? (((((/* implicit */_Bool) arr_19 [(short)15] [i_5] [i_0] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) ((short) arr_19 [(signed char)1] [i_1 - 3] [i_1 - 3] [i_0] [i_1 - 3] [i_1 - 3]))) : ((-(((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [(unsigned char)16] &= ((/* implicit */unsigned char) var_1);
        arr_25 [i_0] [i_0] = max((((unsigned short) (short)-4597)), (((/* implicit */unsigned short) arr_1 [i_0])));
    }
}
