/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132506
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((int) max((((/* implicit */unsigned int) var_5)), (arr_1 [i_0])));
        var_17 = ((/* implicit */unsigned long long int) 0U);
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) 7727201960805439528ULL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_4]));
                            arr_13 [i_2] = (!(((/* implicit */_Bool) var_9)));
                        }
                    } 
                } 
                arr_14 [i_2] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) arr_9 [i_2])) | (10719542112904112087ULL)))));
                arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2 + 2] [i_2 + 3] [i_1] [i_2 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (7727201960805439529ULL)));
            }
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) < (((/* implicit */int) (unsigned char)204))));
            arr_16 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)12268))));
            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_1] [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 4; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                arr_29 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)0))))), (max((2947669393U), (((/* implicit */unsigned int) (short)20230))))))) ? (((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_5] [i_6 - 4] [i_7] [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) < (var_14))))) : ((+(var_11))))) : (((/* implicit */long long int) ((int) var_8)))));
                                arr_30 [i_8] = (((!(((/* implicit */_Bool) 9223372036854775787LL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_5] [i_7]))))) ? (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) : (1195033665013284607ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-20231)), (var_8)))))) : (((/* implicit */unsigned long long int) (~(var_7)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((~(var_4))) + (min((((/* implicit */unsigned long long int) ((_Bool) arr_26 [i_0]))), (var_0))))))));
                    var_23 = ((/* implicit */int) 9223372036854775807LL);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) min((3035034408U), (((unsigned int) ((int) var_0)))));
}
