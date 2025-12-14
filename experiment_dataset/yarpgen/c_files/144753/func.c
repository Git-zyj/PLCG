/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144753
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
    var_11 = ((/* implicit */int) var_5);
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (((((_Bool) var_4)) ? (min((var_4), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((var_3) - (((/* implicit */int) arr_3 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) | (((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned long long int) 287242824U))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] = ((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) var_10)));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(var_2))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_1] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_0]))))) : (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [7U] [i_3]) : (((/* implicit */unsigned long long int) var_9)))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51926))) == (-8762451626286585421LL)))));
                    }
                } 
            } 
        }
    }
}
