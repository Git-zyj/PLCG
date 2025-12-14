/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14484
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_0] [i_2 + 2] [i_2])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) min(((_Bool)1), (arr_1 [6LL] [6LL])))))) : (((/* implicit */int) (unsigned char)106))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] = ((/* implicit */_Bool) var_0);
                                arr_14 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] [i_1]));
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_0] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [(unsigned char)13])) : (((((/* implicit */_Bool) 2492907395U)) ? (((/* implicit */unsigned long long int) 2492907397U)) : (arr_8 [i_1] [i_1] [i_2 + 3] [i_2])))));
                                var_12 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) % (((/* implicit */int) arr_2 [i_4] [i_4]))))) % (arr_8 [i_0] [i_4] [i_0] [i_0])));
                                var_13 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (max((((/* implicit */unsigned long long int) (~(var_0)))), ((~(arr_11 [i_4] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_9)), (var_1))), (var_1)));
}
