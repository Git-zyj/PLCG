/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108502
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
    var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)17523)))), (var_4))), (var_4)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [(unsigned short)7] = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 + 2]))))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((var_13) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 2])))) - (((/* implicit */int) min((arr_1 [i_0 - 2] [i_0 + 1]), (arr_1 [i_0 - 2] [i_0 + 1]))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? ((-(((((/* implicit */int) var_9)) << (((((/* implicit */int) var_2)) + (14091))))))) : ((-(((int) var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        for (int i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (unsigned char)245);
                            arr_13 [(short)2] [(short)2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((((arr_8 [i_4] [i_2] [i_2] [i_4]) | (var_5))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_6 [i_1] [(short)1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_4]))))) - (8583129605123350055LL))))) : (min((((/* implicit */int) min((((/* implicit */short) arr_6 [i_1] [i_2])), (arr_9 [i_4] [i_3] [i_1])))), (((((/* implicit */_Bool) var_8)) ? (var_5) : (arr_10 [i_1] [i_2 - 1] [i_3] [i_4] [i_2])))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 2] [i_4]))) | (var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_4] [i_1])) ^ ((+(((/* implicit */int) arr_5 [i_1] [i_3]))))))))))));
                        }
                    } 
                } 
                arr_14 [i_2] = ((/* implicit */short) min((((/* implicit */int) ((short) arr_5 [i_2 + 3] [i_2]))), (max((min((arr_8 [i_1] [i_1] [i_1] [(_Bool)1]), (arr_8 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_2])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 3; i_6 < 24; i_6 += 4) 
        {
            for (int i_7 = 2; i_7 < 22; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 23; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) arr_25 [i_5]);
                                arr_27 [i_5] [i_6] [i_5] [i_5] [i_5] = (i_6 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_6 + 1] [i_6] [i_9 + 2] [i_9 - 1])) << (((((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 2] [i_7 - 2] [i_6])) - (21604)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 1]))) % (min((var_4), (((/* implicit */unsigned long long int) var_12))))))))) : (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_6 + 1] [i_6] [i_9 + 2] [i_9 - 1])) << (((((((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 2] [i_7 - 2] [i_6])) - (21604))) - (388)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 1]))) % (min((var_4), (((/* implicit */unsigned long long int) var_12)))))))));
                                var_22 = ((/* implicit */unsigned short) max((min((arr_19 [i_5 - 1] [i_7 - 2] [i_8 - 1]), (arr_19 [i_5 - 1] [i_7 + 3] [i_8 - 1]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_6 + 1] [i_8 - 1] [i_8] [i_9] [i_5]))) : (arr_19 [i_5 - 1] [i_7 - 1] [i_8 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 2; i_11 < 24; i_11 += 4) 
                        {
                            {
                                arr_33 [i_6] [i_6] = ((/* implicit */unsigned short) arr_17 [i_11 - 2]);
                                var_23 = ((/* implicit */_Bool) (unsigned short)48029);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
