/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181229
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (((var_10) - (var_14))))))));
    var_17 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [8] [8] [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) var_12))))));
                        var_18 += ((/* implicit */int) ((((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (var_13) : (410168483))) != (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (arr_9 [i_2])))), (min((((/* implicit */unsigned int) arr_11 [i_2] [i_1] [i_2])), (1434322118U))))) : (((/* implicit */unsigned int) var_5))));
                        arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) << (((/* implicit */int) (_Bool)0)))) + (max((arr_0 [7ULL]), (((/* implicit */int) var_8))))))) & (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_12)))))));
                        arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 3136329357699000093ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) : (1100742078U)))));
                        arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned char)12] [i_2] [i_4 + 3]))))) ? (((/* implicit */unsigned long long int) arr_2 [i_4 + 3])) : (((var_4) * (((/* implicit */unsigned long long int) var_0))))));
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_0]))))) ? (min((var_12), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))) <= (arr_1 [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_13)) + (var_9)));
                        arr_20 [0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */int) (unsigned char)3))));
                        arr_21 [i_5] [i_2] [i_1] [i_2] [3U] = ((/* implicit */unsigned short) ((((long long int) arr_7 [i_2] [i_2])) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_2] [i_2] [1]) : (var_9)));
                        var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    }
                    arr_22 [i_0] [i_1] [i_2] = max((((arr_17 [i_2]) - (((/* implicit */unsigned int) var_15)))), ((+(min((4200218978U), (((/* implicit */unsigned int) (unsigned char)155)))))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15310414716010551511ULL)) ? (max((1554114487), (((/* implicit */int) (unsigned short)28482)))) : (((/* implicit */int) (unsigned char)219))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (var_6)))) : (((/* implicit */int) (unsigned char)248)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((4209362236U), (((/* implicit */unsigned int) -614351143)))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))) <= (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) var_10))))));
}
