/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110527
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : ((~(arr_3 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_0] [i_0] [(unsigned short)13] = ((/* implicit */unsigned char) (~(max((arr_8 [i_0] [i_1]), (((/* implicit */long long int) min(((short)-23612), ((short)7483))))))));
                arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)23611)) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)23611)) + (((/* implicit */int) (short)-23612))))))))));
            }
            /* vectorizable */
            for (short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                var_12 = ((/* implicit */_Bool) var_8);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (signed char i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_4] [i_5 + 2] [i_5])) ? (arr_14 [i_3 - 1] [i_3] [i_5 + 2] [i_5]) : (arr_14 [i_3 - 1] [i_5] [i_5 + 2] [i_5])));
                            var_14 = ((/* implicit */long long int) (~(((unsigned long long int) var_8))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_3 + 1] [i_5 - 1])) ? (arr_7 [i_0] [i_1] [i_5 - 2] [i_4]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3 + 1] [i_5 - 4]))));
                        }
                    } 
                } 
            }
        }
        var_16 = ((unsigned char) (signed char)-87);
        var_17 |= ((/* implicit */unsigned short) ((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((unsigned short) (short)23611))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_4))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)87))))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)23602)) ? (arr_9 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))))) < ((+(arr_9 [i_6] [i_7] [i_8] [i_8])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (~(4775242456818789459ULL)));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (short)-7484))));
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)4096))));
                    }
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(arr_2 [i_6] [i_6])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)85)), (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6])))) : ((+((-(((/* implicit */int) (short)7490))))))));
                }
            } 
        } 
    } 
}
