/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128250
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2303591209400008704LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2303591209400008687LL))) + (-2303591209400008688LL)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(signed char)11] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) (signed char)26)) ? (arr_6 [i_2] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) 29)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_1 [18U] [(unsigned char)8]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((var_3) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_9))) + (8846915279802214506LL)))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) 15746255224973638240ULL);
    }
    var_19 = ((-2303591209400008702LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-94))));
}
