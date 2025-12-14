/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137752
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 - 2]);
            arr_6 [i_0] [i_1] |= ((/* implicit */short) ((arr_1 [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1])))));
        }
        for (short i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            var_15 = ((/* implicit */_Bool) (~(arr_1 [i_2 + 2] [i_0])));
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_0] [i_2 + 1] [i_2 + 2] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_3 - 1] [i_2 + 1]))));
                            arr_21 [i_0] [i_2] [i_2] [i_0] [i_5] [i_5] [i_5] = var_4;
                        }
                    }
                } 
            } 
        }
        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(signed char)1])))));
        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) > (((unsigned int) var_5))))), ((~(((/* implicit */int) ((unsigned short) 3601125763U)))))));
    var_20 = ((/* implicit */short) ((((_Bool) (short)30057)) ? (((/* implicit */long long int) max((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_13))))))) : (var_10)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (-1LL) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((_Bool) 2108146677890838987LL)))))) ? (((long long int) var_8)) : (((/* implicit */long long int) max(((-(((/* implicit */int) (short)24877)))), (var_4))))));
}
