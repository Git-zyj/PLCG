/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110663
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((2U), (((/* implicit */unsigned int) (unsigned char)244))));
        var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((unsigned char)12), ((unsigned char)11)))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((/* implicit */unsigned long long int) (unsigned char)28)), (arr_1 [i_0] [(unsigned short)13]))))) : (((/* implicit */unsigned long long int) (+(arr_0 [12ULL]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_15 = (signed char)-93;
        var_16 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) arr_4 [(short)14]))));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = (+(((/* implicit */int) ((arr_1 [i_2] [i_2]) > (arr_1 [i_2] [3LL])))));
        var_17 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)0)) - (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) max((3918054502163427092ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_19 = ((/* implicit */_Bool) (-(max((0U), (0U)))));
                    arr_14 [12U] [13] [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2223188633125672109LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41714))));
                }
            } 
        } 
        arr_15 [(signed char)1] = ((/* implicit */signed char) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) (unsigned short)23822)) & (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))))));
    }
    var_20 &= ((/* implicit */unsigned short) var_12);
}
