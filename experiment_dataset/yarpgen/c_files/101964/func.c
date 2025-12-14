/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101964
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)17236)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) var_3)) : (var_2)))))) < (((unsigned long long int) max((((/* implicit */unsigned short) (signed char)-78)), (var_10))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_22 |= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_2]);
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                    var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) 103917769U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) & (((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_4 - 2])) ? (((((/* implicit */int) arr_5 [i_3 + 1] [i_4 - 1])) ^ (((/* implicit */int) arr_5 [i_3 + 3] [i_4 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_4 - 1])) || (((/* implicit */_Bool) -8981800545102224349LL)))))));
                                var_25 |= ((/* implicit */short) ((((((((/* implicit */_Bool) (short)32762)) && (((/* implicit */_Bool) 8981800545102224346LL)))) && (((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_4])))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (4191049546U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_11);
    var_27 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_4)) ? (-8981800545102224338LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) >= (((/* implicit */long long int) ((/* implicit */int) ((3592953348U) < (((/* implicit */unsigned int) var_2)))))))) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
}
