/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109320
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) arr_1 [i_0] [i_0 + 3]);
        arr_2 [i_0] = ((/* implicit */short) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29708))) : (arr_1 [i_1] [i_1])))))));
        var_16 = ((/* implicit */long long int) arr_0 [i_1]);
        arr_7 [i_1] [(unsigned char)11] = ((/* implicit */long long int) ((unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_1]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4652430214259992434ULL)) ? (((/* implicit */unsigned long long int) arr_11 [(short)14] [(short)6] [i_1])) : (4652430214259992447ULL)))) ? (((((/* implicit */_Bool) arr_10 [13LL] [i_2 - 2] [i_4])) ? (4652430214259992434ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)192), (((/* implicit */unsigned char) arr_0 [i_2])))))))))))));
                        var_18 = min((max((((/* implicit */long long int) arr_13 [i_2] [i_2] [i_3] [i_2])), (((long long int) var_2)))), (((/* implicit */long long int) arr_10 [i_1] [(signed char)15] [(signed char)15])));
                        var_19 += ((/* implicit */unsigned int) 13794313859449559177ULL);
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */short) (((~(13794313859449559169ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-59)), (var_13)))))));
    }
    var_21 = var_12;
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((/* implicit */long long int) (signed char)58)), (((long long int) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (_Bool)1))))))))));
    var_23 -= ((/* implicit */long long int) (_Bool)1);
}
