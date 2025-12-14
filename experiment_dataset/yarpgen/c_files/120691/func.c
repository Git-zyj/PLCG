/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120691
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)62290))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~((+(((((/* implicit */int) (unsigned short)12331)) & (((/* implicit */int) (short)22456)))))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)183)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_20 -= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (short)-11892)) || (((/* implicit */_Bool) arr_2 [(unsigned char)14]))))), (arr_8 [14U] [12U] [i_1] [i_6])));
                            arr_19 [i_6] [i_0] [11U] [i_0] [15LL] [i_0] [i_0 - 2] = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2]);
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned char)2))));
                        }
                        var_22 ^= (~(2164373261U));
                    }
                }
            } 
        } 
    } 
    var_23 = -5428008885040087164LL;
}
