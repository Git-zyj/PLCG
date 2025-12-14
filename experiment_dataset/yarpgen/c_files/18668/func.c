/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18668
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(unsigned char)1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_1))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_1)))))))));
                    var_13 ^= ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)16333))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2077830624))));
}
