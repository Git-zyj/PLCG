/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109785
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (arr_0 [3ULL])))) ? (((/* implicit */int) (signed char)63)) : (((int) var_12))))) : ((-(((arr_5 [7U] [i_0] [0ULL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_18 ^= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (95137919886752456ULL))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-26)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (2673680593U)))), (((((/* implicit */_Bool) (short)-8313)) ? (((((/* implicit */_Bool) 18351606153822799160ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(_Bool)1])) + (((/* implicit */int) arr_7 [i_0] [(unsigned char)1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((18351606153822799160ULL) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)255)), (arr_12 [i_4 + 3] [i_3])))))))));
                                var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8313))) < (var_13)))), (((unsigned short) arr_1 [i_2] [i_3]))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)-118))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_6)))))));
                                arr_13 [i_2] |= ((/* implicit */unsigned char) 1450429368U);
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
}
