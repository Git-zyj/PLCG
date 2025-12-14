/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104516
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */long long int) (short)15564);
                    var_13 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) - (var_10)))))))) : (var_1));
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_2 - 2] [i_2 - 3] [0U] [i_2 - 1]), (arr_5 [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_2 - 3])))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 + 4]))) != (16769024U)))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) : (arr_10 [i_3]))), (max((arr_10 [i_3]), (arr_10 [i_3])))));
        arr_12 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_10 [i_3])))));
    }
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_7))));
    var_15 = (+((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        for (long long int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            {
                arr_19 [i_5] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_4] [i_5 + 1]))), (((((/* implicit */_Bool) -1521104434)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4078742718U)))))), (max((((/* implicit */long long int) arr_1 [i_4])), (((long long int) arr_1 [i_4])))));
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)48)) ? (var_0) : (arr_9 [i_4 - 1] [i_4 + 2]))) < ((-(var_0)))));
                var_17 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 1]))) & (var_8))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        for (unsigned short i_7 = 3; i_7 < 15; i_7 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 1920)) : (10716596034678679300ULL))))), (((/* implicit */unsigned long long int) arr_21 [i_7 - 3])))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned long long int) min((arr_20 [i_7 + 3]), (arr_20 [i_7 - 2])))))));
                var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) << (((var_2) - (1956668421608766622LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 + 2]))) : (((arr_23 [i_6] [i_6]) & (arr_21 [i_6]))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -4036551424844545295LL)) ? (var_5) : (((/* implicit */int) arr_20 [i_7])))) : (((/* implicit */int) ((unsigned short) arr_20 [i_7]))))) + (995935240))) - (46)))));
            }
        } 
    } 
}
