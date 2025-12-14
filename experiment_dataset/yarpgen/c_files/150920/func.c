/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150920
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((5714243908579054485ULL) >= (var_5))) ? (min((((/* implicit */unsigned long long int) var_7)), (1028479232229775387ULL))) : (((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 8584543432478085980ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)53532))))) : (var_5)))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((3612525642984680196LL) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62316))) % (10042428237841853337ULL))) - (62315ULL)))))) ? (((/* implicit */unsigned long long int) -3612525642984680196LL)) : (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_8))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)-64);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (short i_3 = 4; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_0] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_2] [i_3 + 2] [i_0]))))));
                            arr_16 [i_4 + 1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                            arr_17 [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((9862200641231465636ULL) << (((var_5) - (18083700289295254517ULL))))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) -3612525642984680217LL))))));
        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        arr_24 [14ULL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5]))) * (1697903383U)))) : (arr_0 [i_5]))), (((/* implicit */unsigned long long int) min((arr_6 [i_5]), (var_8))))));
        arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (8584543432478085980ULL))))) + (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5]))))) : (((((/* implicit */_Bool) 1241173472U)) ? (var_0) : (((/* implicit */int) arr_4 [i_5]))))));
    }
}
