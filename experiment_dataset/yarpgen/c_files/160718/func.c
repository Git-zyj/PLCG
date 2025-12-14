/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160718
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)18618)) ? (7994133852411156917LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) >> (((/* implicit */int) ((unsigned short) 0ULL)))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_1 [i_3]))));
                        arr_9 [i_0] [i_2] [i_2] [i_2] [i_0] &= ((arr_4 [i_1]) && (arr_4 [i_1]));
                        arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = (!(((/* implicit */_Bool) var_10)));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] = ((/* implicit */short) 18446744073709551615ULL);
        }
        var_13 = ((/* implicit */unsigned long long int) (short)25749);
        arr_12 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)0)), ((short)-18618)));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 2314599282U)) == (arr_5 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_0])))) : (max((((/* implicit */unsigned long long int) (short)18617)), (arr_5 [i_0] [i_0] [i_0])))));
        arr_13 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))), (((unsigned int) 715401176428829631ULL))));
    }
    var_15 = ((/* implicit */long long int) 715401176428829631ULL);
    var_16 = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (17731342897280721985ULL))))), (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18618)))))));
    var_17 = ((/* implicit */unsigned long long int) (((~((-(((/* implicit */int) var_3)))))) ^ ((+(((/* implicit */int) var_2))))));
}
