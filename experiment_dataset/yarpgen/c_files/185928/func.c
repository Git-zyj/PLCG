/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185928
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
    var_15 = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((short) var_5)))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [7LL] = ((/* implicit */_Bool) -1128260879);
        arr_3 [(short)7] [(short)7] = ((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (_Bool)1)))))))) >> ((+(((/* implicit */int) var_8)))));
    }
    for (short i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [17ULL])) | (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_4 [(short)16] [16])) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_1])) : (var_7))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 - 4] [i_1])) ? (((/* implicit */int) (short)-18189)) : (((/* implicit */int) var_14))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_9 [i_2]))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_9 [(unsigned short)17]))))))) | (((arr_8 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))));
        var_18 = ((/* implicit */unsigned short) 2630147073U);
        arr_11 [i_2] [i_2] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_8 [i_2])))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3] [i_3]))))) ? (arr_8 [i_3]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) & (arr_8 [i_3]))))) > (((((/* implicit */_Bool) 4587923029605050861ULL)) ? (((((/* implicit */unsigned long long int) var_1)) & (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) (signed char)99)))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((_Bool) ((((((/* implicit */_Bool) 1664820238U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) != (var_12)));
                    arr_22 [i_3] [i_3] [i_3] = ((/* implicit */short) 1128260878);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) var_0);
    var_20 = ((/* implicit */short) (~(var_5)));
}
