/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103110
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
    var_17 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_5)) ? (var_11) : (var_5)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_0]))))))) ? (((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((+(arr_1 [i_0]))) : (((((/* implicit */_Bool) 1324256611U)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned short) arr_0 [i_3 - 1]);
                        arr_8 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_3 - 1] = (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_2 + 2])) : (arr_0 [i_0])))) && (((/* implicit */_Bool) arr_3 [i_3 - 1]))))));
                        var_20 *= ((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_0]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_6 [i_0] [i_0]) : (arr_0 [i_0]))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4])) ? (arr_10 [i_4]) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) arr_1 [i_4])) : (arr_11 [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4]))))))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4]))))) < (((/* implicit */int) (!(arr_5 [i_4] [i_4] [i_4]))))))) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) << (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4])))))) / (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4]))) : (arr_3 [i_4])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_9 [i_5]))));
        var_23 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)16739)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [10U] [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_5]))))) : (((((/* implicit */_Bool) (unsigned short)40925)) ? (18002173212591379429ULL) : (arr_6 [i_5] [i_5])))))));
    }
}
