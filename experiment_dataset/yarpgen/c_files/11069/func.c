/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11069
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
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) var_4))))) : (11225165570932697085ULL))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_0] [15ULL] [i_2] [i_1] [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)18891))))))) * (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) var_2)) / (arr_9 [i_0] [i_0] [i_2 + 1] [i_2] [(_Bool)1]))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((7221578502776854530ULL), (((/* implicit */unsigned long long int) (signed char)-24))));
                        arr_13 [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */short) arr_6 [i_2]))))) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) var_6)))))));
                        arr_14 [i_0] [i_2] [(_Bool)1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)20)), (max((((/* implicit */unsigned long long int) (signed char)-78)), (var_8)))))) ? (((/* implicit */int) (unsigned short)48213)) : (((/* implicit */int) ((max((arr_2 [3]), (((/* implicit */int) arr_4 [i_2 - 2])))) != (((/* implicit */int) var_5)))))));
                        arr_15 [i_2] [i_2] [i_2] [17LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-4096))));
                    }
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) var_4)), (arr_9 [i_0] [(signed char)4] [i_4 + 1] [i_2] [(signed char)20])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_2] [i_2 - 4] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) arr_4 [i_0])))))), (((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_0] [i_5]))));
                            arr_22 [19U] [i_1] [19U] [19U] [i_2] [(_Bool)1] = ((/* implicit */int) (((!(var_12))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2548)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (var_9)))), (min((((/* implicit */unsigned long long int) var_1)), (16983009358402518060ULL))))))));
                            arr_23 [i_0] [i_0] [19U] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) arr_10 [i_0] [11ULL] [i_2] [i_4 - 1] [11ULL]))))) ? (((/* implicit */long long int) max((211222501U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))) : (var_0)));
                        }
                    }
                    arr_24 [i_1] = 4294967295U;
                    arr_25 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)127)), (min((var_2), (((/* implicit */int) (short)-22491))))))) % (max((var_8), (((((/* implicit */unsigned long long int) arr_0 [i_0])) * (7837993624576577264ULL)))))));
                    arr_26 [6U] [6U] [6U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */int) max((var_10), (var_10)))), (max((var_2), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
}
