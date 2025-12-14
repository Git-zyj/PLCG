/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152430
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-5545)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)31571)) >> (((((/* implicit */int) var_8)) - (9178))))) & ((+(304757916))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [(unsigned short)10] [(unsigned char)8] [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)171)) ? (arr_7 [i_2] [i_2 - 2] [10LL] [(_Bool)1]) : (arr_7 [i_2] [i_2 + 2] [i_2] [i_2 + 2]))), (min((arr_7 [i_2] [i_2 - 1] [i_2 + 2] [i_2]), (arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2])))));
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)175)) - (((((/* implicit */int) (short)4)) | (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 2] [i_2 - 3])) >= (((/* implicit */int) arr_3 [i_1] [i_3 - 1])))))));
                                arr_14 [16LL] [i_1] [i_2 + 1] [16LL] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) : (((23ULL) | (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_1 - 4] [i_4] [i_2 + 2] [(unsigned short)16])) ? (((/* implicit */int) arr_10 [i_3] [i_1 - 1] [i_2] [i_2 - 3] [(short)4])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2] [i_2 + 2] [i_2 + 2]))))) : ((~(max((((/* implicit */unsigned long long int) (signed char)-111)), (54043195528445952ULL)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) var_6);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)9863))) > (var_5))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (short)9863)) ? (((/* implicit */int) (short)-130)) : (((/* implicit */int) (short)-9864))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11564227153208310945ULL)) ? (((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (short)-9863)) : (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (short)-9863)) : (-881696382))))) : (((/* implicit */int) (unsigned char)255))));
}
