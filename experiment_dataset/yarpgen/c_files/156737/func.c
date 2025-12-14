/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156737
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 9223372036854775792LL)) : (2565938045724907508ULL)))));
    var_17 = var_0;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_4);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) arr_5 [1U] [1U] [i_2]);
                        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_3] [i_3 - 2] [i_3 + 1]))), (((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) arr_8 [i_3 - 2] [i_3] [i_3 - 1])) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (1590831037917205988ULL)))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_3 + 1] [(unsigned char)9] [i_3] [i_3 + 2] [i_3]), (arr_13 [i_2] [i_3 - 1] [i_3] [i_2] [i_3] [i_3])))) - ((-(((((/* implicit */_Bool) var_2)) ? (16995280906926039771ULL) : (16855913035792345629ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(var_14)))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_14)) : (var_7))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) var_11)))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1964795909) >> (((16855913035792345643ULL) - (16855913035792345628ULL)))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) (!(var_4))))));
}
