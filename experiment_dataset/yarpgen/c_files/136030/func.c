/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136030
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
    var_14 = ((/* implicit */short) var_7);
    var_15 = ((/* implicit */short) 70364449210368ULL);
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */_Bool) (-((-(max((536862720ULL), (((/* implicit */unsigned long long int) (unsigned char)112))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (-(((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                        arr_11 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(unsigned short)5]))));
                        arr_12 [i_0] [i_0] [i_0] [(short)20] [i_0] [i_0] = ((/* implicit */int) (unsigned short)15857);
                    }
                    arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0] [i_0])) ? (8858966958830275256LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2899104009U)))))))));
                    arr_14 [21] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 2899104009U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) 1874010369196729461ULL)) ? (((/* implicit */int) (unsigned char)112)) : (1784593548))) : (((((/* implicit */_Bool) 293146348U)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)-37)))))))));
                }
            } 
        } 
    } 
}
