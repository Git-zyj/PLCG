/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173876
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
    var_10 ^= ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_3 [i_1 + 4] [i_0 - 3])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_0])))) * (((((/* implicit */_Bool) arr_3 [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_1 + 3] [(unsigned short)3])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 1])))))))));
                    var_12 = ((/* implicit */unsigned char) min(((short)15), (((short) 34091302912ULL))));
                }
            } 
        } 
    } 
    var_13 = (((+(((((/* implicit */unsigned long long int) -7317715649317780509LL)) - (18446744039618248703ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
}
