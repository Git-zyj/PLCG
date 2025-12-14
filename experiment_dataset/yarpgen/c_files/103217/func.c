/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103217
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) -2081243988234616781LL);
        arr_4 [i_0] [i_0] = (+(min((arr_1 [i_0]), (arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_1])), (-2081243988234616793LL)))) ? (max((((/* implicit */unsigned long long int) (short)7)), (max((arr_0 [(short)4]), (((/* implicit */unsigned long long int) arr_2 [i_1])))))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0)))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) arr_6 [i_1]))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2081243988234616781LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)29362)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U)))))) ? (((long long int) 9007199254738944LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3195056708U)) ? (((/* implicit */unsigned int) -2)) : (3195056708U)))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */long long int) 438087633U)), (8589934591LL))))));
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)16383))))), (((((/* implicit */_Bool) var_0)) ? (2010951939U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3458764513820540928LL)) ? (2081243988234616775LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))) ? (((((/* implicit */_Bool) 3195056734U)) ? (-8832894743361237839LL) : (-9007199254738949LL))) : (min((((/* implicit */long long int) (short)256)), (-2081243988234616796LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9358105830058759756ULL)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_11 [i_2] [i_2])))))))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) ((5860487752773811911LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 1] [8U])))))))))));
        }
        arr_15 [i_2] = ((/* implicit */unsigned short) ((unsigned int) (~(min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2 + 1])), (9358105830058759756ULL))))));
    }
}
