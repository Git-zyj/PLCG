/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100157
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 2031040870366166404ULL)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (302693849057006665ULL) : (16415703203343385212ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10329))) - (16415703203343385212ULL))))), ((-(max((var_4), (302693849057006665ULL)))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)32)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)-19128);
                    arr_8 [i_2] [i_0] [i_0] [3ULL] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_2 + 2]))) + (var_11))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_1 [i_1 + 2] [i_2 + 2])), ((signed char)-90))))));
                }
            } 
        } 
        var_18 += min((arr_5 [i_0] [(signed char)12] [i_0] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-19130)))))))));
        arr_9 [i_0] = ((/* implicit */short) 11325573500114053758ULL);
    }
    for (short i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16415703203343385206ULL)) ? (((/* implicit */int) (short)-19136)) : (((/* implicit */int) (unsigned char)161))));
        arr_12 [i_3] = ((arr_10 [i_3] [i_3]) ? (min((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3 - 1])), (1152921504606846975ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)116), (((/* implicit */signed char) arr_10 [i_3] [i_3])))))));
        var_20 &= ((/* implicit */unsigned char) min(((((_Bool)0) ? (7869219492666611678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19128))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-116)) * (((/* implicit */int) arr_10 [(_Bool)1] [i_3])))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((7539006473922955892ULL), (((((/* implicit */_Bool) (~(arr_11 [i_3] [(signed char)18])))) ? (9768709390060643989ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_3 - 1])))))))));
        var_22 = arr_11 [i_3 - 1] [(_Bool)1];
    }
    var_23 = ((/* implicit */_Bool) min((max((((var_15) % (var_5))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) 1491456761809434494ULL)))))));
}
