/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111665
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
    var_11 = ((/* implicit */_Bool) var_1);
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41014))) : (var_9))) > (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_13 = (-(((/* implicit */int) (unsigned short)24922)));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_10);
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0] [7LL])), (7333359740947253393ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))) ? (747855475169815837LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)158)), (arr_1 [i_0 + 1])))) ? (728380574) : (((/* implicit */int) (unsigned short)6)))))));
        }
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) (short)-3304)) % (((((/* implicit */int) (short)-32751)) & (793680880)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) arr_6 [i_0 - 1]);
            arr_8 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */short) 25ULL);
        }
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)24] [i_0] [(short)24]))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_2)))) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((max((max((728380574), (((/* implicit */int) (unsigned short)12439)))), ((+(0))))), ((((~(((/* implicit */int) arr_11 [i_3])))) / (((/* implicit */int) arr_7 [9ULL] [i_3]))))));
        arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) < (var_9))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_2 [i_3] [(signed char)17]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) != (((((/* implicit */_Bool) 620037202)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_3]))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_4)))));
        var_19 = ((/* implicit */_Bool) (~(arr_0 [(unsigned short)10])));
        arr_13 [i_3] [i_3] = ((/* implicit */int) arr_4 [i_3] [(short)10] [(short)10]);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? ((~(((/* implicit */int) min((arr_2 [(signed char)14] [(signed char)14]), (((/* implicit */unsigned short) var_5))))))) : (arr_10 [10LL] [i_3])));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                arr_19 [i_4] = ((/* implicit */short) arr_15 [i_4] [i_5 - 1]);
                var_21 = ((/* implicit */short) arr_1 [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_25 [(_Bool)1] [8LL] [i_4] [i_7] [7] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_7] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) (~(var_4))))));
                            arr_26 [i_4] [10] [i_6] [i_6] |= ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) -1476492333004283972LL);
}
