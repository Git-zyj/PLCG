/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164658
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
    var_20 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = (+((-(((/* implicit */int) (_Bool)1)))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (11737589201679841353ULL)));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) + (2211495807U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) -6983406994552216716LL))) : (((unsigned long long int) 7310129277141720531LL))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(11737589201679841353ULL)))) ? (((3436475039U) & (((/* implicit */unsigned int) ((((-2147483642) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))) : ((+((+(1823640079U)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2549))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11737589201679841355ULL)) ? (-2147483635) : (((/* implicit */int) (unsigned char)205))))) ? (var_18) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (1491861396))))))));
}
