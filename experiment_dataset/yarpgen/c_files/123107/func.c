/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123107
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 14691538561697697121ULL)) ? (((/* implicit */int) var_1)) : (var_10)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
    var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (8527316800336607823LL)))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (17756117550820133141ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned char)3] [(_Bool)1] [i_3] [i_0] [(signed char)8] [(signed char)0] [5ULL] = (~(14083027693433953824ULL));
                                var_17 ^= ((/* implicit */_Bool) ((unsigned long long int) arr_7 [(short)12] [(unsigned char)13] [10LL] [i_4 - 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 8527316800336607823LL)) ? (((/* implicit */int) var_14)) : (1422887060))))))));
                                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)7))));
                                arr_22 [i_0] = arr_2 [(_Bool)1] [i_5] [i_6];
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)5] [i_1])) ? (arr_1 [15U] [i_0]) : (arr_1 [i_0] [(signed char)6])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])), (5ULL)))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [(short)16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [13U]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(unsigned short)12]))) : (arr_11 [i_0] [4] [i_1] [4ULL] [(_Bool)1])))))) ? (((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0] [16] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)0] [i_1] [(short)8] [i_1] [i_1] [1U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [(short)8] [i_1] [(unsigned char)11] [9U] [(_Bool)1] [(unsigned short)2]), (((/* implicit */unsigned short) arr_15 [i_1])))))) : (min((((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_1] [(unsigned char)9] [(_Bool)1])), (arr_19 [11ULL])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-((~(var_3))))))));
}
