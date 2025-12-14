/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186239
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((unsigned int) max((arr_0 [i_1]), (arr_1 [i_0] [i_0 + 1])))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_21 = ((/* implicit */long long int) min((var_19), (((((/* implicit */int) ((unsigned short) var_17))) * (((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 = min((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_13)), (var_1))))), ((~(((/* implicit */int) ((short) 2519418082U))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (2519418096U))))) * (((/* implicit */int) ((_Bool) arr_8 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 2])))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)1741)), (357870744U))), (((/* implicit */unsigned int) ((903046512287274027LL) >= (((/* implicit */long long int) var_4)))))))) ? (((/* implicit */long long int) max((((arr_9 [i_3]) ? (((/* implicit */int) var_8)) : (arr_4 [i_3 + 1]))), ((~(((/* implicit */int) arr_1 [i_3 + 1] [i_4]))))))) : (max((max((arr_6 [i_0]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_4 - 1] [i_4]))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    arr_15 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)116)))), ((~(((/* implicit */int) var_1))))))) * (min((var_7), (((/* implicit */unsigned long long int) (signed char)-117))))));
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_1])), (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                    var_26 &= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((short)-32097), (((/* implicit */short) arr_2 [11ULL] [i_5]))))) < (((/* implicit */int) (!(arr_9 [i_0])))))))) ^ ((~(((long long int) 8019653721222637134LL)))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((unsigned int) max((((/* implicit */long long int) var_4)), (max((-903046512287274017LL), (var_10))))));
}
