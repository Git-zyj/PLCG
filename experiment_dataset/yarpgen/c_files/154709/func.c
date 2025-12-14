/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154709
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)20836)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) var_3)))), ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) ? (max((((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))), (max((107251794U), (((/* implicit */unsigned int) (unsigned short)24597)))))) : ((-((-(1U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20992)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? ((((_Bool)1) ? (107251791U) : (4187715503U))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9096))) : (4187715509U)))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9102)) ? (((/* implicit */int) arr_1 [i_0] [(short)15])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_3 [14U] [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_3] [i_3]) ? (((/* implicit */int) arr_10 [(short)7] [i_3])) : (((/* implicit */int) (short)-10774))))) ? ((((_Bool)1) ? (arr_5 [i_3] [i_3] [i_3] [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) (short)28974))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 107251802U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9868)))))));
        var_13 = ((/* implicit */short) (-((+(((/* implicit */int) arr_9 [i_3] [(short)4]))))));
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [(_Bool)1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7907190248283608091LL)))) ? ((+(((/* implicit */int) arr_9 [i_3] [i_3])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [(short)15] [(short)7] [(short)7])) : (((/* implicit */int) var_1))))));
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [(short)9] [i_3] [(unsigned short)7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)14579))))) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    }
}
