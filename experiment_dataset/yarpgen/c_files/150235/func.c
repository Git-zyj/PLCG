/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150235
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                                arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16425160771321297311ULL)) ? (var_12) : (((/* implicit */long long int) arr_7 [i_0] [i_4 - 2] [i_2] [i_3] [i_0] [i_4]))))) ? (((arr_9 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 1]) - (arr_9 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 749781502U)) ? (((/* implicit */int) (unsigned short)55399)) : (((/* implicit */int) (short)-5556))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1]))))) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (short)14218)) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) || (((/* implicit */_Bool) (short)-18043)))))))));
                    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12636)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [12ULL]))))) ? (max((((6464373287107949939LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))), (((/* implicit */long long int) min((((/* implicit */short) var_10)), (var_7)))))) : (((/* implicit */long long int) max((749781518U), (((/* implicit */unsigned int) (short)-26690)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)55399))));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (var_1)));
}
