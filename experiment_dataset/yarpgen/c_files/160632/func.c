/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160632
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_1)) - (30214)))));
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104))))) ^ ((-(((int) 4487989920114880487ULL))))));
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-107))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -3502445325422593658LL)) && ((!(((/* implicit */_Bool) -83768643113473636LL))))))) << (((((/* implicit */int) min(((signed char)-107), (((/* implicit */signed char) (_Bool)0))))) + (133)))));
                }
            } 
        } 
    } 
}
