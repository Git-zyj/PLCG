/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104102
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 1833761203290966675ULL))) || (((/* implicit */_Bool) 3889742335U))));
        arr_2 [(_Bool)1] &= ((/* implicit */signed char) arr_1 [i_0 + 1]);
        var_14 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_15 = ((/* implicit */signed char) arr_1 [i_0 + 1]);
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = min(((-(max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_10))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 + 1]))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 339776198U)) && (((arr_1 [i_1 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))))), (var_4)));
        var_16 = ((/* implicit */long long int) arr_4 [i_1 - 1]);
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */signed char) arr_4 [i_3]);
            arr_13 [i_2] [i_3] [i_3] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((short) 7334386296202690365LL))), ((-(arr_11 [i_2] [i_3] [(short)15]))))), (((/* implicit */unsigned long long int) ((short) (short)0)))));
        }
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
        arr_14 [i_2] = ((/* implicit */signed char) (unsigned short)7152);
        var_18 -= ((/* implicit */long long int) ((((1961908151U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65516)))))));
        var_19 = 4396803126718528916ULL;
    }
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (short)15011);
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (short)12933);
        arr_18 [i_4] = ((/* implicit */unsigned char) var_2);
    }
    var_21 |= ((/* implicit */short) var_2);
    var_22 = ((((unsigned long long int) var_10)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (unsigned short)0))))))));
}
