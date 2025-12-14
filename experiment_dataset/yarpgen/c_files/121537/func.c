/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121537
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (short)-18050))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_3] [15ULL] [i_0])), ((((+(var_0))) ^ (((/* implicit */int) max((arr_1 [4]), (((/* implicit */short) arr_5 [i_4])))))))));
                                var_18 &= ((/* implicit */unsigned short) arr_4 [i_2]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_19 [12] [12] &= ((/* implicit */long long int) (+((~(((/* implicit */int) ((signed char) var_1)))))));
                            arr_20 [(short)14] [i_0] [5ULL] [i_1] [i_5] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 + 1])))), (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_17 [i_0] [i_0] [i_1 + 1] [i_1] [i_6 + 2]) : (((/* implicit */int) arr_5 [i_1 - 3]))))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((arr_0 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) (short)-21588)) ? (((/* implicit */int) var_6)) : (var_0))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [6U] [6U])), (var_16))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_16)))))) * (((((/* implicit */int) min((var_8), (((/* implicit */short) var_2))))) * (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_2))))))))))));
}
