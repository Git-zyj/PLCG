/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119814
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
    var_15 = (unsigned short)17;
    var_16 |= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_17 &= ((/* implicit */int) 67108848LL);
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) ^ (((((/* implicit */_Bool) -67108848LL)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 9223371487098961920LL)))))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((3711674201281061210LL), (2916854986721006543LL))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10))))))) ? (((/* implicit */int) max(((unsigned short)39470), ((unsigned short)0)))) : (((/* implicit */int) (unsigned short)31)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) -1);
}
