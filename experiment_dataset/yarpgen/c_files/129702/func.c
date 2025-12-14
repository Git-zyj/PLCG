/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129702
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))), (var_5)))))));
        var_11 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (1702478202031896003ULL))) : (max((var_5), (((/* implicit */unsigned long long int) var_7)))))));
        var_12 = ((int) arr_1 [(_Bool)0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_13 += var_8;
                        var_14 = ((short) (short)-1);
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_6))));
                        var_16 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_3 [8U] [i_1 - 2]))) ? (1702478202031895997ULL) : (((16744265871677655612ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (arr_5 [(unsigned short)9] [i_2] [i_0] [i_2])))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (arr_6 [i_0] [i_0] [i_0] [i_0])))))) | (arr_9 [i_1 - 1] [i_1 - 2] [i_1] [6] [i_1 + 1] [8] [(_Bool)1])));
                        }
                    }
                    arr_13 [i_0] [(short)8] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_2 [i_0] [(short)0] [(signed char)0]))))) | (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 3]))))) > (16744265871677655590ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 3403851677567812012ULL)) ? (var_8) : (((/* implicit */unsigned int) arr_3 [i_1 - 3] [i_1 - 2]))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [9ULL] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 1702478202031896004ULL))))))) | ((~(min((arr_10 [i_1] [i_0] [i_1] [i_1] [(unsigned short)10] [i_1] [i_1 - 2]), (((/* implicit */unsigned long long int) var_7))))))));
                                var_18 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2]))));
                    var_20 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1])))) ? (((((/* implicit */_Bool) 16744265871677655632ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1702478202031896025ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 1] [i_1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_3 [(unsigned char)6] [i_0])))))));
            var_22 *= ((unsigned long long int) ((int) (!(((/* implicit */_Bool) var_8)))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (4294967295U)));
        arr_25 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_24 [i_8] [i_8])) + (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    }
    var_24 = ((/* implicit */unsigned char) var_8);
}
