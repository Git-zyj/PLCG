/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117212
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_1 [i_1 + 3])) ^ (((/* implicit */int) arr_1 [i_0]))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_0])) : (arr_3 [i_1] [i_1])))) ? ((+(arr_0 [i_0 + 2] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_1] [14])) ? (((/* implicit */int) arr_2 [(unsigned short)20] [(_Bool)1] [i_1 + 3])) : (arr_3 [i_1] [i_1])))));
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_10 -= ((/* implicit */unsigned int) (!((_Bool)1)));
            var_11 = ((/* implicit */short) ((signed char) (_Bool)1));
        }
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(arr_3 [(unsigned char)2] [i_0 - 1])))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */_Bool) (short)18093)) ? (((/* implicit */int) (short)-18076)) : (arr_0 [i_0 - 1] [i_0 + 2]))) : (((/* implicit */int) max(((unsigned short)52845), (((/* implicit */unsigned short) (short)18080))))))) : ((+(((/* implicit */int) arr_9 [i_0 + 2] [(unsigned short)7]))))));
        arr_11 [(signed char)11] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_12 [i_0 + 1] [i_0 + 2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    for (int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((int) arr_0 [i_3 + 2] [i_3 + 2])), (((((/* implicit */_Bool) arr_0 [i_3 + 2] [i_3 + 2])) ? (arr_0 [i_3 + 1] [i_3 + 1]) : (arr_0 [i_3 + 2] [i_3 + 2]))))))));
        arr_16 [i_3] = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) max(((unsigned short)64377), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3))))))));
        arr_17 [i_3] = ((/* implicit */unsigned short) (!(((_Bool) arr_0 [i_3 + 2] [i_3]))));
        var_13 -= ((((/* implicit */_Bool) ((long long int) min((1992131630U), (1595588980U))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_3 + 2])) : (arr_3 [20LL] [i_3])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3 + 1] [i_3 - 1]))) / (arr_15 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_13 [(short)16])), (arr_8 [i_3 + 1] [i_3]))) > (((/* implicit */long long int) (((_Bool)1) ? (3630281191U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12696)))))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max(((+(arr_13 [(unsigned short)6]))), (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_2 [i_3 - 1] [i_3] [i_3])) + (arr_0 [i_3] [i_3])))))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_22 [i_4] [11] = ((/* implicit */_Bool) ((((_Bool) (short)-7792)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12716)) ? (-1529053264) : (((/* implicit */int) (unsigned short)21808))))) : (arr_15 [i_4])));
        arr_23 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4])) ? (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) : (arr_13 [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (((/* implicit */int) arr_20 [i_4] [i_4])) : (((/* implicit */int) arr_7 [i_4] [(signed char)11] [i_4])))))));
    }
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
}
