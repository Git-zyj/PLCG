/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120419
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */short) var_5);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [12ULL] [i_1] [i_1] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2])), (2394322275069974667LL))) % (min((((/* implicit */long long int) var_6)), (((-2394322275069974667LL) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) arr_1 [(short)5] [i_1])) : (((/* implicit */int) var_9))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2] [i_0])) % (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_2])))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((max((min((((/* implicit */int) var_9)), (arr_11 [i_0] [(short)10] [i_2] [i_2] [i_0] [i_0]))), (((/* implicit */int) ((short) arr_2 [i_0] [i_1] [i_2]))))) * (max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]), (((/* implicit */int) (!(((/* implicit */_Bool) (short)24625)))))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3] [i_2]))))))))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (min((2394322275069974666LL), (((/* implicit */long long int) arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_2]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), ((-(max((0U), (var_6)))))));
                        arr_18 [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_1 [i_1] [i_4])))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                        var_16 = max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1] [i_0]))))))), ((-(((/* implicit */int) arr_0 [i_1] [5LL])))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_5])))))) / ((~(2394322275069974667LL)))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [1ULL] [i_1] [i_1] [i_5] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_5] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_2] [i_5] [(unsigned char)0])) + (var_3)))) : ((-(var_1)))));
                        }
                        var_19 = ((/* implicit */long long int) 251659850U);
                    }
                    var_20 -= arr_19 [i_0] [i_0] [i_2];
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (short)-29124);
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
                    arr_29 [i_9] [i_9] [i_8] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2394322275069974667LL)), (max((((/* implicit */unsigned long long int) ((unsigned char) arr_26 [i_7]))), (max((var_5), (((/* implicit */unsigned long long int) arr_2 [i_9] [i_8] [i_7]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) 8809774430029965375ULL);
}
