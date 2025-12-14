/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108449
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [11] [i_2] [i_2] [(unsigned short)0] = ((/* implicit */unsigned int) var_12);
                    arr_7 [i_1] [i_2] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_4))))) + (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)0)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((+((~(15))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)114)), (max((((/* implicit */unsigned short) (short)-5224)), ((unsigned short)19380)))))))))));
    var_17 = ((/* implicit */_Bool) var_11);
}
