/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141549
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
    var_19 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = var_8;
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (signed char)38))));
                    var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(arr_7 [i_0] [10U])))) ? (var_13) : (((/* implicit */unsigned long long int) 612193799U)))), (((/* implicit */unsigned long long int) ((((var_3) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (var_4)))))))));
                    var_22 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)63)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [1LL])) ? (1364610100572698340LL) : (arr_0 [i_1]))))));
                    var_23 -= ((/* implicit */unsigned char) arr_3 [i_0] [(_Bool)1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) 1364610100572698340LL);
                arr_16 [i_3] = arr_14 [i_3];
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) arr_17 [i_6] [i_5] [i_4] [i_3]);
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5 - 2] [i_4] [i_5 - 1])) ? (((((/* implicit */_Bool) arr_15 [i_5 + 2] [i_5 + 2] [8])) ? (((/* implicit */long long int) arr_15 [i_5 + 2] [i_5 + 2] [i_5])) : (1364610100572698340LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_4] [i_5 + 2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
