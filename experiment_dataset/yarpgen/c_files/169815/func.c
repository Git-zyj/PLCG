/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169815
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44374)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)44374))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_2] [i_2 - 1] [(short)4] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) (unsigned short)19725))), ((unsigned char)178))))));
                    var_17 += ((/* implicit */_Bool) max(((unsigned char)9), ((unsigned char)9)));
                }
            } 
        } 
        arr_12 [(_Bool)1] = ((/* implicit */short) ((int) (unsigned short)0));
        arr_13 [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)14124))) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_0]))) : (((unsigned long long int) arr_3 [i_0]))));
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */short) (-((-(((((/* implicit */_Bool) (unsigned short)19725)) ? (((/* implicit */int) (unsigned short)19725)) : (((/* implicit */int) arr_7 [6ULL]))))))));
        var_18 ^= ((/* implicit */unsigned char) ((_Bool) 28ULL));
    }
}
