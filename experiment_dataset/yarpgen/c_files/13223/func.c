/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13223
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((~(272678883688448ULL))) & (((14210407929142381157ULL) ^ (272678883688448ULL)))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34383)))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)4))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((max((arr_4 [(unsigned char)4]), (((/* implicit */long long int) (unsigned char)155)))), (((/* implicit */long long int) ((unsigned short) arr_3 [i_1 - 3] [i_1 - 3]))))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((((max((((/* implicit */long long int) var_13)), (var_0))) / (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((var_2), ((unsigned short)128)))) : (((/* implicit */int) var_2)))))));
}
