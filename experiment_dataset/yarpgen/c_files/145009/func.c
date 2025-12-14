/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145009
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
    var_18 &= ((/* implicit */long long int) 236237029U);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 &= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_6 [i_1 - 2] [16U] [(unsigned char)14])))) ^ (((/* implicit */int) ((unsigned char) (short)32767)))));
                    var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_12)), ((short)32767)))), (min((((/* implicit */unsigned long long int) var_10)), (var_16))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4058730266U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32760))));
}
