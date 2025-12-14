/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180393
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_2])), (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]))) ? (arr_3 [i_1]) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3))))))));
                    var_14 = ((/* implicit */unsigned long long int) var_13);
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [8LL])) ? (arr_3 [12ULL]) : (((/* implicit */int) var_11))))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) var_11);
                        var_17 = min((((/* implicit */int) min((((/* implicit */unsigned short) (short)-6866)), ((unsigned short)58262)))), ((~(((/* implicit */int) arr_7 [i_3 + 1] [i_1] [i_1])))));
                        arr_13 [i_0] [i_3 - 1] [i_1] [i_3 + 1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_3))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1095308759)) ? (4294967295U) : (3020582024U)));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((short) arr_8 [i_4] [i_0 - 1])))));
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                        arr_17 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)11]))))) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1]) : (((/* implicit */int) var_10)));
                        var_21 = ((/* implicit */unsigned int) (~(arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        arr_18 [4] |= ((/* implicit */int) var_8);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_4);
    var_23 *= ((/* implicit */_Bool) var_3);
    var_24 = var_11;
}
