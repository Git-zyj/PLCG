/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119724
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
    var_17 = (unsigned short)4092;
    var_18 = ((/* implicit */_Bool) ((unsigned short) var_11));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 |= ((/* implicit */int) var_15);
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1])))) << ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) ((arr_1 [i_1]) || (arr_4 [i_1 + 1])))))));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) max((((unsigned long long int) max(((unsigned short)42261), (((/* implicit */unsigned short) arr_1 [i_2]))))), (((unsigned long long int) arr_8 [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) < (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23263)) & (((/* implicit */int) arr_9 [i_2])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)55395), (((/* implicit */unsigned short) arr_10 [i_2] [i_2]))))))))));
        var_22 = ((/* implicit */_Bool) arr_3 [i_2] [i_2]);
        var_23 = ((/* implicit */unsigned short) var_13);
        var_24 = ((/* implicit */int) ((_Bool) (unsigned char)48));
    }
}
