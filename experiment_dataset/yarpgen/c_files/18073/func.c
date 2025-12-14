/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18073
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
    var_15 = ((/* implicit */unsigned int) (short)6246);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) 2147483647))), ((unsigned short)14425))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned int) var_5);
                                var_18 = ((/* implicit */short) ((unsigned char) (unsigned short)65535));
                                arr_15 [i_4] [i_4] [i_4] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL)))))) / ((~(var_7)))))));
                                arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_1] [i_0 + 3]) : (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 3]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0])), (arr_2 [i_0 - 2] [i_0 - 2]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min(((-(min((((/* implicit */unsigned long long int) 2147483647)), (arr_3 [i_0] [i_0 + 1] [i_0 + 1]))))), (((/* implicit */unsigned long long int) min((-2147483647), (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_4);
}
