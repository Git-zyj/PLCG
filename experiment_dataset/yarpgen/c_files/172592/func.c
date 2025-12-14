/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172592
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-((-(max((-1LL), (((/* implicit */long long int) -7)))))))))));
    var_15 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (unsigned short)11839)) : (((/* implicit */int) (unsigned short)65535))));
                    var_16 = ((/* implicit */_Bool) 0ULL);
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((-7470564765332686633LL), ((-(-5178320419918518892LL))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((int) ((unsigned long long int) arr_5 [i_0 + 1])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (short)-23927);
    var_19 = ((/* implicit */unsigned long long int) (!(((_Bool) max((var_9), (((/* implicit */unsigned short) var_2)))))));
}
