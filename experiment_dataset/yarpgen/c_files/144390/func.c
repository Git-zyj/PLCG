/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144390
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)243))));
    var_21 = (-((-(((/* implicit */int) (unsigned char)32)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_22 *= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) <= (29360128U))), (((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_16))))) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)18]))))))));
                    arr_9 [i_1] [i_0] [i_1] [16LL] = ((/* implicit */unsigned char) min((((((/* implicit */int) min(((unsigned char)165), ((unsigned char)68)))) / ((+(((/* implicit */int) arr_8 [i_2] [i_0] [i_0] [i_0])))))), (((/* implicit */int) max((min((arr_8 [i_0] [i_0] [3ULL] [3ULL]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (_Bool)0)))))));
                }
            } 
        } 
    } 
}
