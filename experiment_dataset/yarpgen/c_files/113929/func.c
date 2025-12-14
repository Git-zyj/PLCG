/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113929
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] [(unsigned short)4] [i_0] &= ((/* implicit */unsigned short) (+(((unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0])))))));
                arr_6 [(signed char)6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_0])))) ^ ((~(-943505408860846733LL)))));
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [8U])) ? (((/* implicit */int) (unsigned short)63645)) : (((/* implicit */int) (unsigned char)120))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1]) : (arr_1 [i_1]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)120)) || (((/* implicit */_Bool) -1121300481))))) & (-1859856071)))))))));
                var_13 -= ((/* implicit */unsigned long long int) (unsigned char)255);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) 3648807936657346809ULL);
}
