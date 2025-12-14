/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148465
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) 3705073227034272554ULL);
                                var_17 = ((/* implicit */unsigned short) (unsigned char)128);
                                arr_12 [(short)13] [(short)13] [i_2 - 1] [i_3] [(short)13] = arr_5 [10ULL] [10ULL] [i_2 - 1] [i_3];
                                arr_13 [i_3] = ((/* implicit */unsigned char) arr_1 [i_3] [i_1]);
                            }
                        } 
                    } 
                    arr_14 [(short)16] [(unsigned short)15] [i_2] = arr_3 [i_0];
                    var_18 *= ((/* implicit */unsigned char) ((unsigned long long int) (-((+(arr_4 [(unsigned char)12] [i_0] [i_1] [i_0]))))));
                    arr_15 [i_0 - 2] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 14741670846675279062ULL)))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4169708613150205385ULL)))) : ((+(arr_3 [2ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (14741670846675279062ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 23; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_19 [i_5] [(unsigned short)3] [i_7])), (arr_23 [i_7] [17ULL] [i_5 + 1] [(unsigned char)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_5] [i_6] [i_7])))) : (((((/* implicit */_Bool) 10742863558929739066ULL)) ? (((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [i_6 + 1])) : (arr_18 [i_7])))))));
                    arr_24 [i_5 + 1] [i_6] [i_7] = ((long long int) (+(((/* implicit */int) (_Bool)0))));
                    arr_25 [i_5] [i_5] [i_5 + 1] = ((/* implicit */_Bool) arr_20 [i_7] [3] [4]);
                    var_20 = ((/* implicit */long long int) ((unsigned char) ((unsigned short) arr_20 [i_5] [i_6] [8LL])));
                    arr_26 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (3705073227034272554ULL)));
                }
            } 
        } 
    } 
}
