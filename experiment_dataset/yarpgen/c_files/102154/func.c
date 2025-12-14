/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102154
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
    var_17 = ((/* implicit */long long int) var_3);
    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((int) 3289525034748026487ULL))))));
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_7)))))) ^ (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_14))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_1] [i_2 + 3] [i_3 + 2] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_0 [i_3 + 2]);
                        arr_12 [1] [i_2] [(_Bool)1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) var_2)) >> (((15883385558508810728ULL) - (15883385558508810724ULL))))));
                        arr_13 [i_2] [i_1] [(unsigned char)12] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (8266863336453269415ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (256) : (((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((var_0) == (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((var_12) + (1720317993))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4] [i_4]);
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_4] [i_4]);
    }
    var_21 = ((((/* implicit */int) var_8)) | (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))) >> (((((((/* implicit */_Bool) var_7)) ? (-1718933256) : (((/* implicit */int) (unsigned short)27497)))) + (1718933275))))));
}
