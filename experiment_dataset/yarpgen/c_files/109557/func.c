/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109557
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_1] = (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] = ((((/* implicit */unsigned int) (+((~(var_5)))))) ^ (max(((~(var_6))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0])), (var_3)))))));
                            var_13 ^= ((/* implicit */signed char) ((unsigned char) ((max((((/* implicit */long long int) arr_10 [i_0] [(short)0] [6U] [i_3])), (arr_6 [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 4; i_4 < 11; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4])))) - (((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_22 [i_6] [i_7])))) | (((/* implicit */int) ((unsigned char) (signed char)118)))))));
                                arr_27 [i_4] [i_6] [i_5] [i_7] [i_8] = ((/* implicit */signed char) arr_25 [i_4] [i_4] [i_4] [i_5 - 1] [i_5 + 1]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) arr_18 [i_5] [i_5] [i_5 - 2]);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_10);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (var_6))))) : (-1LL)))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_2))))), (var_4)));
}
