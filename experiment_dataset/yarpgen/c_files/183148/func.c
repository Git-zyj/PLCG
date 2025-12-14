/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183148
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
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-112)) == (((/* implicit */int) var_12))))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_7)))))));
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43591)))) ^ (max((((((((/* implicit */int) (short)-23832)) + (2147483647))) << (((((/* implicit */int) (unsigned char)62)) - (62))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43591)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_0 + 1] [i_2] [i_1] [i_2] [i_2] [i_3 + 2]), (arr_7 [(unsigned short)8] [i_0 + 1] [(unsigned short)8] [i_1 - 2] [i_1] [i_2])))) ? (((/* implicit */int) min((arr_3 [i_0] [i_0 + 1] [i_1]), (arr_7 [i_0] [i_0 + 1] [i_1] [i_1] [i_1 - 1] [i_3])))) : (((/* implicit */int) arr_10 [19ULL] [i_0 + 1] [i_2] [i_0] [i_2] [i_0 + 1] [i_3 + 3]))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_0 - 1] [i_1 - 2])) ? ((~(((/* implicit */int) (unsigned char)157)))) : (((/* implicit */int) arr_8 [i_2] [i_0 + 1] [i_1 - 2]))));
                                var_19 = ((/* implicit */signed char) (((-(arr_4 [i_3] [i_3 + 2] [i_3] [i_3 + 2]))) + (((arr_4 [i_3] [i_3 + 2] [i_3] [i_3 + 1]) - (arr_4 [i_3] [i_3 - 1] [i_3] [i_3 + 1])))));
                            }
                            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_3), (var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(short)6])) || (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_1), (((short) (_Bool)1))))) : (((((/* implicit */int) arr_8 [i_1] [i_1] [i_3 + 2])) / (((/* implicit */int) arr_8 [i_1] [i_1] [i_3 + 2]))))));
                            arr_12 [i_2] = ((((((/* implicit */_Bool) min(((unsigned short)43611), ((unsigned short)46094)))) ? (((arr_0 [i_3]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))) : (((((/* implicit */_Bool) 2304508880U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)199)))))) < (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [14ULL])));
                        }
                    } 
                } 
            }
        } 
    } 
}
