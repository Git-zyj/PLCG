/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177552
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned short) max((3ULL), (((/* implicit */unsigned long long int) (unsigned short)6))));
                                arr_13 [i_0] [i_2] [i_0 + 1] = ((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_3] [i_3]);
                                var_12 = ((unsigned int) max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1])));
                                arr_14 [i_2] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) -9223372036854775802LL)) ? (var_6) : (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_3 [i_2])) : (var_6))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3929)) <= (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (9409195459483725996ULL) : (((/* implicit */unsigned long long int) var_5))))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */short) var_8);
}
