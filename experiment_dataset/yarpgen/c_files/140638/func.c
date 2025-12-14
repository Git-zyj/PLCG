/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140638
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_1] |= ((/* implicit */_Bool) (unsigned short)44341);
                    arr_7 [i_2] [i_1 - 1] [i_0 + 2] = ((/* implicit */unsigned short) arr_4 [i_2] [i_1 + 1]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_16)))))) > (max((((/* implicit */unsigned long long int) min(((short)-32766), (((/* implicit */short) (signed char)-10))))), (((10806012846345402377ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))));
    var_21 = ((/* implicit */unsigned short) var_16);
    var_22 = ((/* implicit */unsigned short) var_3);
}
