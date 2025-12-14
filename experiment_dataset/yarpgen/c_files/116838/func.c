/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116838
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (short)16128)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (((-(((/* implicit */int) var_16)))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) ((_Bool) var_15)))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)47186), ((unsigned short)18360)))) ? (67100672) : (((/* implicit */int) ((4280373552U) >= (((/* implicit */unsigned int) -1579120922)))))))) ? (((-67100665) | (((int) 67100672)))) : ((+((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))));
                    }
                } 
            } 
        } 
    }
}
