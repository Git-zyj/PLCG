/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178006
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
    var_19 = ((/* implicit */_Bool) (short)32744);
    var_20 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (-(min((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]), (((/* implicit */long long int) arr_3 [i_1]))))));
                                arr_14 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) (-(arr_8 [(short)3] [16LL])));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */unsigned short) (~(min((4966623701816376331ULL), (((/* implicit */unsigned long long int) (unsigned short)65522))))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])))), (((/* implicit */int) ((arr_5 [i_2]) < (((/* implicit */int) arr_4 [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
}
