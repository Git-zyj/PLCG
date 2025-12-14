/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107170
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)(-32767 - 1)))))))))) > (((unsigned long long int) arr_1 [i_1 - 3]))));
                var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_12 = max((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned short)24159)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((short) var_2))))));
        arr_8 [i_2] = ((/* implicit */unsigned short) var_2);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_11 [(short)8] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))))))));
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (max((((/* implicit */unsigned int) arr_9 [i_3])), (arr_11 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3]))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((+(449080707))) : (((/* implicit */int) var_5)))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [16ULL] [i_4])) ? (((/* implicit */int) var_3)) : (var_4)))))) ? (((((((/* implicit */_Bool) arr_16 [i_4])) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((short) var_2))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(_Bool)1])) | (var_4)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) arr_14 [i_4])) - (((/* implicit */int) (unsigned short)65533)))))))))));
        var_15 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) min((((/* implicit */long long int) 449080701)), (-6285241939158900278LL))))))), (((((/* implicit */_Bool) -449080706)) ? (17598241778446097816ULL) : (((/* implicit */unsigned long long int) -449080703))))));
        var_16 = ((/* implicit */unsigned int) (_Bool)1);
    }
}
