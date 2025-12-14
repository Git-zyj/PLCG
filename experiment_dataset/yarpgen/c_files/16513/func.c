/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16513
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
    var_11 *= var_2;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_12 = ((long long int) min((((/* implicit */int) arr_0 [i_2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0] [i_0 - 2]))))));
                        arr_10 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (unsigned char)235);
                    }
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+((+(((/* implicit */int) ((unsigned char) (unsigned char)255))))))))));
                    arr_11 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) + (arr_2 [i_0 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [(unsigned char)20] [i_1] [i_2]))))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))) : (((/* implicit */int) ((unsigned char) var_7))))))));
                }
            } 
        } 
    } 
}
