/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144152
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) -1682175394921001780LL);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [(signed char)0]))));
                    var_13 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [(short)9]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_8 [i_0] [i_1] [9U] [i_0] [i_4 - 1])))) - (((((/* implicit */int) (short)24540)) - (((/* implicit */int) arr_7 [(unsigned short)1] [i_1])))))))));
                                arr_15 [i_1] [i_0] [i_1] [i_2] [10] [0U] [0U] = ((/* implicit */unsigned long long int) (+(max((arr_4 [5] [i_4 - 1]), (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (unsigned short)50958))))) ? ((~(arr_16 [i_6] [i_1] [i_1] [i_0]))) : (arr_16 [i_0] [i_1] [i_1] [i_2]))))));
                                arr_21 [(unsigned char)12] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_11 [0ULL])), (-1682175394921001780LL)))))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : ((-((-(((/* implicit */int) arr_6 [i_0] [6LL] [i_0]))))))));
                                arr_22 [11] [(short)6] [i_1] [(_Bool)1] [(unsigned char)9] [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_5 [i_5 - 1] [i_6])))) ? (2592617657U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16942)))))), (((17242418082643953356ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)64))))))));
                            }
                        } 
                    } 
                }
                arr_23 [i_1] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [8U] [8U] [i_0] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2592617657U)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))) >> (((((((/* implicit */_Bool) arr_3 [i_0])) ? (max((1204325991065598250ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) arr_4 [9] [i_0])))) - (1204325991065598228ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)49283))))));
                var_17 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (unsigned short)15872))))))));
                arr_30 [i_8] [i_8] [i_8] = ((/* implicit */int) arr_28 [i_8] [i_8]);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(var_6)))), (((17867817225678125582ULL) | (10166409259719253318ULL)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)23)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)52))));
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)6651)) & (366424330)))) ? (((((/* implicit */_Bool) -8202928366340770083LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_7))))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)48205), (((/* implicit */unsigned short) (_Bool)1))))))))));
}
