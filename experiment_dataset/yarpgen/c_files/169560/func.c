/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169560
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
    var_12 = (+((~(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) 7232133426236431168LL)) : (var_1))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), ((+(0ULL)))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) -7232133426236431172LL)))) > (((/* implicit */unsigned long long int) ((arr_0 [i_2]) ? (((/* implicit */long long int) arr_5 [i_0])) : (arr_3 [i_2] [(short)14] [i_2])))))) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) < (arr_3 [i_0] [4U] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1344638700U)))))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1]))) ? (((arr_3 [18] [18] [i_0]) << (((var_1) - (3685779312304197641ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_4 [i_1]))))))))) ? ((~(arr_5 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-10482), (((/* implicit */short) arr_6 [i_2]))))))));
                    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (3187852419U)))) > (((long long int) arr_6 [i_0]))))), (max((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))))), (((/* implicit */unsigned int) arr_0 [i_1]))))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((18446744073709551601ULL), (((/* implicit */unsigned long long int) 4066116590U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) 3187852419U);
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) -1LL)))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4066116590U)))) ? (((/* implicit */long long int) 3187852409U)) : (7403434723832330453LL))))));
    }
    var_20 = ((/* implicit */int) ((var_4) ? (min((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((unsigned int) var_5))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1107114904U)) ? (1801947365U) : (3187852419U))) % (max((((/* implicit */unsigned int) var_11)), (var_0))))))));
}
