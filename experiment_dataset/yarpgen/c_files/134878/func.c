/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134878
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
    var_18 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) (unsigned short)35660);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) (~((-(-1336918601)))));
                    arr_9 [i_0] [i_0] [i_2] [i_2 + 1] = ((/* implicit */int) -4790106376033880860LL);
                }
            } 
        } 
    }
    var_20 &= ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) 428324629U);
        arr_12 [i_3] [i_3] = ((/* implicit */short) (+(var_1)));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        arr_16 [i_4] [0] = ((/* implicit */unsigned short) (((_Bool)0) ? (max((((/* implicit */unsigned long long int) (unsigned char)69)), (70368744177408ULL))) : (((/* implicit */unsigned long long int) var_13))));
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (0)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((var_17), (((/* implicit */short) (_Bool)1))))), ((~(70368744177408ULL)))));
        arr_20 [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (short)-32766)), (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_14)))))))));
        arr_21 [i_5] = ((/* implicit */unsigned char) min(((+(max((-4620560078294747248LL), (((/* implicit */long long int) (unsigned char)46)))))), (max((var_6), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_4))))))));
    }
}
