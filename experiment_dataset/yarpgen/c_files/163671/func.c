/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163671
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned short) max(((-(arr_2 [i_0 - 1]))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1] [i_1]))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : ((-(1037980432)))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = arr_8 [i_2];
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 24; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((long long int) -1037980448));
            var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 5315892872603545517ULL)))) && (((/* implicit */_Bool) (unsigned char)198))));
            var_23 = ((/* implicit */unsigned int) arr_7 [i_3]);
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) : (arr_15 [i_2] [11U] [i_2]))))));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_17 [i_5] [i_4] [i_4]))));
                arr_18 [i_2] [21LL] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(-1037980430))))));
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_13 [i_4] [i_4]))))));
            }
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) min((var_27), ((unsigned short)59165)));
                arr_21 [i_2] [i_4] [i_4] [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_2])))) || ((!(((/* implicit */_Bool) -1037980450))))));
                arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_17 [i_2] [i_6] [i_6]);
            }
        }
        var_28 |= ((((/* implicit */_Bool) arr_14 [(unsigned short)20] [(unsigned short)20])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [24U])) ? (((/* implicit */int) ((((/* implicit */_Bool) 7963143275037003768LL)) || ((_Bool)0)))) : (((/* implicit */int) (!(arr_20 [i_2] [i_2] [i_2] [i_2]))))))) : ((-(((((/* implicit */_Bool) -1037980448)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49509))) : (0ULL))))));
        var_29 = ((/* implicit */int) arr_10 [i_2] [i_2]);
    }
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))));
    var_31 &= max((var_8), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) < (var_10)))));
    var_32 = 1037980449;
}
