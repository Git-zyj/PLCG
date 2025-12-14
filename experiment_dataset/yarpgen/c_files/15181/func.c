/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15181
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_17))))) : ((((!(((/* implicit */_Bool) 4294967281U)))) ? ((~(15U))) : (((/* implicit */unsigned int) var_9))))));
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_20 += ((/* implicit */long long int) (~((-2147483647 - 1))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((var_12) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (3666933632U)))) : ((~(1753604017828078080ULL))))), (((/* implicit */unsigned long long int) (~(((unsigned int) var_15)))))));
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_0 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2] [i_3])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_15 [i_2] [i_4] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_1])) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])) : (var_8)))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967281U)) ? (arr_7 [i_5] [10LL] [i_3]) : (((/* implicit */unsigned int) 9)))))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((14U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))));
                                var_25 -= ((/* implicit */_Bool) (~(arr_8 [i_1] [i_2] [i_3] [i_5])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (~(var_2)));
                }
            } 
        } 
        var_27 = (~(arr_13 [i_1]));
    }
}
