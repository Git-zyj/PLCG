/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163323
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_2 - 1] [i_1 - 2] [i_0] &= ((unsigned char) ((unsigned long long int) arr_9 [i_1] [i_2 - 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) min(((((((~(((/* implicit */int) (signed char)25)))) + (2147483647))) >> (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_7)))))), (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (3123078640347273756ULL))))) >> (min((((arr_5 [i_2 - 2]) >> (((/* implicit */int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_8 [i_1 + 1] [(unsigned char)6]) - (5436957276890366275LL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(-1450553110)));
    var_23 = ((/* implicit */short) var_2);
    var_24 ^= ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_17 [(unsigned char)4] = ((/* implicit */unsigned char) (~(-1450553087)));
        arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((6710897481469028051ULL), (((/* implicit */unsigned long long int) ((short) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (((int) ((((/* implicit */_Bool) var_16)) ? (arr_5 [i_5]) : (((/* implicit */unsigned long long int) var_0))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_5])), (arr_0 [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) && (arr_12 [i_5] [i_5])))) : (((/* implicit */int) ((_Bool) 1U)))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */_Bool) min((((arr_21 [i_6]) >> (((var_0) - (10353132))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            arr_27 [i_6] [i_6] [i_7] = ((/* implicit */short) (((~(arr_13 [i_6] [i_6] [i_6] [i_6] [i_7]))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_7]) && (arr_2 [i_6])))))));
            var_25 ^= ((/* implicit */_Bool) arr_16 [i_6]);
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_35 [i_9] [i_6] [i_7] [i_6] = ((/* implicit */short) (~(((((/* implicit */int) arr_6 [i_7])) << (((var_0) - (10353140)))))));
                        var_26 = ((/* implicit */_Bool) (((~((~(7286626442815607761LL))))) >> (((((((/* implicit */int) arr_29 [i_6])) * (((/* implicit */int) ((short) arr_30 [i_9] [i_9]))))) + (7714)))));
                        var_27 = ((/* implicit */unsigned long long int) ((long long int) ((var_11) ? (((/* implicit */int) arr_9 [i_6] [i_6])) : (((/* implicit */int) ((short) arr_6 [i_6]))))));
                    }
                } 
            } 
        }
    }
}
