/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109530
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
    var_10 = ((/* implicit */_Bool) ((var_1) & ((+(((var_5) ? (((/* implicit */long long int) var_0)) : (var_1)))))));
    var_11 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = arr_6 [i_1] [i_1] [i_1] [i_1];
                    arr_9 [i_2] = ((/* implicit */unsigned short) max((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((arr_3 [i_0]) + (var_3))))), (((/* implicit */long long int) var_4))));
                    arr_10 [i_2] [i_0] = ((/* implicit */signed char) max(((+((+(var_1))))), (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_3] [i_3]))));
        arr_15 [i_3] = ((/* implicit */_Bool) (+(842689497U)));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */int) arr_16 [i_4 - 1]);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                for (int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    {
                        arr_28 [i_6] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) (+(min((((/* implicit */int) ((unsigned short) arr_21 [i_4] [i_4] [i_6]))), (((((/* implicit */_Bool) arr_17 [i_7] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
                        arr_29 [i_4] [i_6] [i_6] [i_4] = ((/* implicit */int) var_1);
                        arr_30 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_19 [i_6])) == (((/* implicit */int) arr_19 [i_4 - 1]))))), ((+(-1252926497)))));
                    }
                } 
            } 
        } 
    }
}
