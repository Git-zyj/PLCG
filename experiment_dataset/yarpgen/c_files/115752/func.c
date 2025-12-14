/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115752
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((arr_6 [(unsigned char)20] [i_0] [(unsigned char)20] [i_1]), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)43012)))) / (((/* implicit */int) (_Bool)1)))))));
                    arr_8 [15U] [i_1] [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_2] [i_1] [i_0]))) ? (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) ((12476161395389730992ULL) >= (((/* implicit */unsigned long long int) var_11))))))));
                }
            } 
        } 
    } 
    var_16 = ((long long int) 4194303LL);
    var_17 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    var_18 = ((/* implicit */long long int) (!(var_13)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((1700582954U), (4294967295U))), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (max((8796093022207ULL), (((/* implicit */unsigned long long int) var_4))))))));
}
