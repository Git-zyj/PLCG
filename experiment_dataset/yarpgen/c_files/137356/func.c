/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137356
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_12))));
    var_17 &= var_13;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)47648)))), (max((min((((/* implicit */int) var_3)), (1376595981))), (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_0]))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30363)) ? (-1376595982) : (-1376595975)))) >= (((((/* implicit */unsigned long long int) -1376595982)) | (140703128616960ULL)))))) < ((-(((/* implicit */int) (short)-5997))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_5) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)24)), (18446603370580934656ULL)))))))));
}
