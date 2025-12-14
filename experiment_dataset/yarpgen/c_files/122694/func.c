/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122694
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]);
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)167);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) | (arr_12 [i_1] [i_1])));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 - 3])) || (((/* implicit */_Bool) (unsigned char)167))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) var_3);
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 - 2] [i_4 - 1])) << (((((/* implicit */int) arr_1 [i_1 + 1] [i_4 + 2])) - (41)))));
                        var_20 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))));
                        arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (-(arr_3 [i_1])));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~((-(((((/* implicit */int) var_6)) % (((/* implicit */int) var_13)))))))))));
}
