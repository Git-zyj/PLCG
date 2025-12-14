/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124843
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
    var_16 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = max((((/* implicit */unsigned short) (!((_Bool)1)))), ((unsigned short)9786));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_0 [i_0])) | (10631630547078822156ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)15))))));
        var_19 = ((/* implicit */long long int) 2046927019U);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 1]))))));
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [2LL])) ? (((/* implicit */int) (short)14676)) : (((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) 275056954)) ? (7815113526630729440ULL) : (var_7)))))));
                }
            } 
        } 
    }
}
