/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18825
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 139462161686911452LL))) ? (((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])) - (arr_12 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49663)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_7)) ? ((~(arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
                                arr_14 [(signed char)2] [(short)14] [17ULL] [i_0] [i_0] [0LL] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_4 + 1] [i_3] [i_2] [(short)16] [(short)16])) : (((/* implicit */int) arr_10 [i_4 + 2] [i_4] [16ULL] [4ULL] [i_3])))));
                                var_18 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_1] [i_2] [i_0] [10])), (arr_8 [i_1] [i_1] [i_0] [5U])))) ? (6451734014936370308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [(short)14] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_12);
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)97)), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) max((var_1), (((/* implicit */signed char) (_Bool)1)))))))));
    var_22 = ((/* implicit */unsigned char) var_0);
}
