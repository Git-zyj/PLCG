/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186428
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((701846530U) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) ^ (min((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((var_5) >= (((/* implicit */unsigned long long int) ((arr_0 [i_0] [(unsigned char)0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)12273))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-31565)) : (((/* implicit */int) (short)12273))))) ? (((((/* implicit */_Bool) max((409797528U), (((/* implicit */unsigned int) arr_5 [i_0] [11] [i_1] [i_2]))))) ? (min((var_7), (((/* implicit */unsigned int) (unsigned short)55093)))) : (((unsigned int) (short)-12274)))) : (1273022052U));
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [(unsigned char)12])) ? (((/* implicit */int) (unsigned short)63675)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-89)) / (((/* implicit */int) arr_7 [1U] [(signed char)7] [15LL]))))) : (min((arr_2 [(unsigned char)3] [i_0] [9]), (((/* implicit */unsigned long long int) (short)-6207)))))));
                    var_22 = (((!(((/* implicit */_Bool) (short)12273)))) ? ((~(((/* implicit */int) arr_7 [i_2 + 2] [i_1] [i_2])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) (short)30551)))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 167622141U)) ? (361299186U) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))));
        var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2070885781U)) ? (((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0] [12U]) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (short)-1))))))));
        var_24 = ((/* implicit */signed char) min(((unsigned short)51233), (((/* implicit */unsigned short) (short)-32105))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3933668110U)) ? (((/* implicit */int) (short)24301)) : (((/* implicit */int) (short)-24007))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
    }
}
