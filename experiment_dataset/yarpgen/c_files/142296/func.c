/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142296
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (var_5)))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))))), (var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_1 [16U]))))))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */int) (~(((long long int) (!(((/* implicit */_Bool) var_5)))))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_7 [16LL] [(unsigned char)1] [(unsigned short)11] [(unsigned char)1]);
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */_Bool) min((((/* implicit */short) var_6)), (min((((short) var_9)), (var_8)))));
}
