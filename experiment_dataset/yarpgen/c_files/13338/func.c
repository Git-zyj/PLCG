/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13338
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
    var_13 |= ((/* implicit */long long int) ((short) ((((((/* implicit */int) var_3)) / (((/* implicit */int) var_5)))) & (((/* implicit */int) var_3)))));
    var_14 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned int) var_7)), (0U))))) ^ (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] = (~(((min((((/* implicit */long long int) var_12)), (var_10))) << (((((/* implicit */int) var_9)) + (115))))));
                        arr_11 [i_0] [i_1] [4ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_8))))) ? (arr_9 [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) | (((/* implicit */long long int) (~(((((/* implicit */int) var_9)) | (((/* implicit */int) var_3)))))))));
                    }
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_8 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226)))))) ? ((~(arr_0 [i_2]))) : (arr_0 [i_2])));
                    var_15 = ((/* implicit */unsigned short) arr_0 [i_1]);
                }
            } 
        } 
    } 
}
