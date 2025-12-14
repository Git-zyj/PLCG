/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115629
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
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        var_10 = ((/* implicit */unsigned short) arr_1 [(unsigned char)19]);
                        var_11 = ((/* implicit */long long int) arr_3 [i_1]);
                        arr_13 [i_2] [i_1] = ((/* implicit */int) arr_1 [i_0]);
                        arr_14 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (+((-2147483647 - 1))))), (var_6)));
                        var_12 = ((/* implicit */_Bool) min((min((-2147483636), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 2] [i_1 - 2])))), (((/* implicit */int) arr_8 [i_1] [i_1 - 3] [i_2] [i_3]))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [2ULL] [1U] = ((/* implicit */unsigned long long int) var_7);
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (arr_0 [i_2] [i_4])));
                    }
                    arr_19 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned long long int) -2147483621);
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */int) var_9);
    var_15 = ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */int) var_1);
}
