/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131227
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
    var_10 = max(((-(max((var_5), (((/* implicit */int) (unsigned short)9)))))), (max((((int) (unsigned short)34)), (((/* implicit */int) (signed char)65)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((unsigned short)15), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) : (arr_0 [i_0])))))) && (((/* implicit */_Bool) max((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3874145202U))))))));
        var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (max(((unsigned short)20), (((/* implicit */unsigned short) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */int) arr_2 [i_0])), (2147483647)))))) : ((-(max((((/* implicit */unsigned int) (_Bool)1)), (0U)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((max((((unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_1])), (((/* implicit */unsigned long long int) max(((unsigned short)65532), (((/* implicit */unsigned short) (signed char)-3))))))), (((/* implicit */unsigned long long int) max((max((-1807058309), (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))), (max((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])), (0))))))));
                        var_13 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)118))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)48679)) | (((/* implicit */int) (unsigned short)20))))), (max((((/* implicit */unsigned long long int) 0)), (18446744073709551615ULL))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (~(arr_0 [i_2]))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -105269615))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [8U] [i_4])) : (arr_4 [i_0] [i_0]))) : ((+(((/* implicit */int) (signed char)-119))))))) ? (max((((unsigned long long int) arr_11 [i_1] [i_2] [(unsigned short)15] [i_4])), (max((16686527439370856078ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [5LL])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((12ULL), (((/* implicit */unsigned long long int) (unsigned short)15))))) ? (((/* implicit */unsigned int) max((arr_16 [i_4] [(short)3] [i_2 - 3] [(short)3] [(short)3]), (((/* implicit */int) (signed char)118))))) : ((~(133955584U))))))));
                            var_16 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) max(((unsigned short)65508), (((/* implicit */unsigned short) arr_3 [8])))))), (min((((((/* implicit */_Bool) 2125451034)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_4])) : (arr_7 [i_1]))), (((/* implicit */int) max((arr_1 [i_2 + 1] [i_1]), (((/* implicit */unsigned short) (signed char)-118)))))))));
                        }
                    }
                } 
            } 
        } 
    }
}
