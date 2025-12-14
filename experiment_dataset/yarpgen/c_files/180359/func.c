/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180359
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) var_6)) >> (((((13481194056377121928ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))))) - (13481194056377171952ULL)))))));
                    var_13 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (min((arr_8 [i_2 - 1] [(_Bool)1] [i_2 - 2] [i_2]), (arr_8 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1])))));
                    var_14 = ((/* implicit */long long int) min(((~(max((((/* implicit */int) (unsigned char)64)), (2147483647))))), (((/* implicit */int) var_11))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) << (((((/* implicit */int) var_0)) - (12922))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)5095)) | (2147483643))))))))))));
        var_16 = ((/* implicit */unsigned long long int) min((((var_7) ^ (2147483647))), (((/* implicit */int) (!(var_3))))));
        var_17 = ((/* implicit */short) ((944723846U) << (((((/* implicit */int) arr_1 [i_0])) - (49)))));
        var_18 = ((/* implicit */unsigned int) ((long long int) min(((+(((/* implicit */int) (unsigned short)65519)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2075912681))))))));
    }
    var_19 *= ((/* implicit */unsigned int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
}
