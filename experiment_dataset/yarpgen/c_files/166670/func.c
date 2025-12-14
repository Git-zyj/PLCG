/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166670
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (262143)))) ? (min((var_1), (((/* implicit */long long int) 2147483641)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2]))))), (((/* implicit */long long int) var_4)));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)54053)), (-1416195145)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) (short)-32253)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_0)))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-5789)) / (1073741824)))))));
                        arr_11 [i_0] [i_0] [i_0] [4] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2])) ? (1816254858) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 2] [i_2] [i_2])))), (((((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)11] [i_0 + 2] [i_0] [i_1])) + (((/* implicit */int) (unsigned short)10620))))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 2; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_14 += ((/* implicit */long long int) var_2);
        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_7 [i_4 - 2] [i_4 - 2] [i_4 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_16 |= ((/* implicit */unsigned short) var_3);
    var_17 |= var_12;
}
