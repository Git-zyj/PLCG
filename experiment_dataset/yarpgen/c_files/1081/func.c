/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1081
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_14 |= ((/* implicit */int) ((((/* implicit */int) ((short) 14875294616700337953ULL))) < (((/* implicit */int) ((signed char) ((((/* implicit */int) var_13)) == (((/* implicit */int) (short)-19720))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((int) ((int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) ((-2025000421) / (((/* implicit */int) (_Bool)1))));
                        arr_11 [i_0] [i_1] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((long long int) 3571449457009213674ULL)) & (((((((((/* implicit */long long int) var_8)) | (var_10))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_0])) & (((/* implicit */int) (unsigned char)79))))))));
                        arr_12 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((((unsigned long long int) 14875294616700337944ULL)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)116)))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11358)) * (((/* implicit */int) ((signed char) (_Bool)1)))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26094))) / (14875294616700337954ULL))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (15986596091584240964ULL)))))));
                        arr_14 [i_0] [i_3] = ((/* implicit */long long int) ((unsigned char) ((((14875294616700337944ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_3])) & (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0 + 1]))))))));
                    }
                } 
            } 
        } 
    }
    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3571449457009213668ULL)))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_8))))) % (((unsigned int) (_Bool)1))))));
}
