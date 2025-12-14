/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158524
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
    var_18 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((long long int) (((_Bool)1) ? (6819270638695319144LL) : (6819270638695319140LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(1456883964)))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) != (var_9)))) : ((~(((/* implicit */int) arr_4 [i_1])))))) % (((/* implicit */int) (unsigned char)255))));
                    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6819270638695319145LL)) ? (((/* implicit */int) var_3)) : ((-((-(((/* implicit */int) arr_6 [5ULL] [i_1] [i_0] [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) 15765061403579057201ULL);
                }
            } 
        } 
    } 
}
