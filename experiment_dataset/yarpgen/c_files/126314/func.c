/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126314
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
    var_10 = var_0;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5LL] [i_0]))) != (11020451197743735379ULL)));
        var_11 = ((/* implicit */int) max((var_11), (((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_1))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_8 [i_1] [(unsigned char)3] [(unsigned char)3]) - (((/* implicit */int) var_5))))) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        arr_17 [i_1] [i_1] [7] [i_4] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)45572))))));
                        arr_18 [i_1] = ((/* implicit */signed char) arr_11 [i_3] [i_3] [i_3]);
                        arr_19 [17ULL] [i_1] [i_1] [i_2] [i_1] [i_4] = (-(((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_4 [i_2 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_13 [14ULL] [i_2 + 2] [14ULL] [i_3])) : (arr_14 [i_2 - 3] [i_5 + 2] [i_5])));
                        arr_22 [(signed char)11] [i_1] [(_Bool)1] [9] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [12LL] [7ULL])) ? (arr_20 [i_1] [i_2 - 3] [(signed char)17] [i_5 + 1]) : (((/* implicit */long long int) var_1))));
                        arr_23 [i_1] [(signed char)12] [i_3] [i_1] [i_5 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_3]));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned short) 8647853044376193009ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8592586183966701785ULL))));
                        var_16 *= ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_3)))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((_Bool) arr_13 [i_2 - 2] [i_2 + 1] [i_1] [i_2 + 1])))));
                        var_18 = ((/* implicit */int) (~(16885190004709345632ULL)));
                        var_19 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)51601));
                    }
                    var_20 = ((/* implicit */int) min((var_20), (min((min((arr_14 [i_1] [(unsigned char)6] [i_2 - 2]), (((((/* implicit */_Bool) 1561554069000205996ULL)) ? (arr_21 [(signed char)14] [(signed char)14]) : (1717419300))))), ((-(((/* implicit */int) arr_9 [(unsigned char)18] [0] [0]))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_6 [(unsigned char)8]))) ? (((((/* implicit */_Bool) arr_14 [(unsigned short)16] [(unsigned short)16] [i_1])) ? (((/* implicit */int) (unsigned short)46737)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])))) : (arr_8 [i_1] [i_1] [i_1]))), (((/* implicit */int) var_5)))))));
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1765994680)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) : (12989361012804048174ULL))))));
}
