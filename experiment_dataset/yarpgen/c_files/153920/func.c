/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153920
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
    var_12 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-65)) * (((/* implicit */int) ((unsigned char) var_2)))));
    var_13 += ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (signed char)-106)), (4294967293U))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 + 4]))) * ((~(arr_3 [(unsigned short)11])))))) ? ((~(((/* implicit */int) arr_1 [i_1 + 4])))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))))))))));
                var_15 += ((/* implicit */unsigned short) arr_0 [i_1]);
                var_16 += ((/* implicit */signed char) arr_1 [i_1 + 3]);
                var_17 += min((min((arr_2 [i_1 + 4] [i_1 - 1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6548296015558238158LL)) <= (12202110843227186101ULL)))))), (arr_2 [i_1 + 3] [i_1 + 1]));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_18 += ((/* implicit */int) ((_Bool) ((int) arr_1 [i_1 - 3])));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((short) min((arr_2 [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 + 3] [i_1 + 3])))))));
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) <= (12202110843227186081ULL))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [16U] [i_1] [i_2])), (arr_1 [i_1])))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_2])) : (((/* implicit */int) ((arr_5 [i_1 + 3] [i_1 - 3] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 2]))))))));
                    var_21 += ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_22 += ((/* implicit */unsigned int) ((unsigned short) min(((-(((/* implicit */int) arr_9 [i_0] [i_0] [(short)8] [i_0])))), (((/* implicit */int) ((short) arr_1 [i_0]))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_3] [i_1])))))), (((((/* implicit */_Bool) min((25165824), (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)16] [i_1]))))) ? (arr_8 [i_0] [i_1 - 1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))))))));
                }
                for (long long int i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    var_24 += ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_4]);
                    var_25 += ((/* implicit */short) ((((/* implicit */int) min((arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_4 - 1]), (arr_6 [(unsigned short)15] [i_1 + 2] [i_1 + 4] [i_4 - 1])))) <= ((-(((/* implicit */int) ((short) arr_3 [i_0])))))));
                }
            }
        } 
    } 
}
