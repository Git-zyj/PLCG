/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15723
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
    var_11 = min(((+(((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (var_6));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37096))) + (arr_1 [i_0]));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_13 = 6206572622540496167ULL;
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)30368)) : (((/* implicit */int) var_10))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 6483676832799806683ULL))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6206572622540496162ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35157)))))) ? (arr_8 [i_1 + 1] [i_1 - 1]) : ((+(12240171451169055450ULL)))));
        }
        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6206572622540496165ULL))));
            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_0] [i_5])) & (((/* implicit */int) (unsigned short)64946)))) >> ((((+(((/* implicit */int) (unsigned short)57910)))) - (57895)))));
            var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_5 + 4] [i_5 + 2] [i_5 + 1]))));
        }
        var_20 = ((/* implicit */unsigned long long int) max((var_20), ((-(arr_13 [i_0] [i_0] [i_0])))));
    }
}
