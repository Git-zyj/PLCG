/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117755
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) max(((_Bool)0), (arr_1 [i_0] [i_0])));
        var_10 = ((/* implicit */signed char) ((max((max((arr_3 [(unsigned char)18] [i_0]), (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2047588724U))))));
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_1 + 2] [i_3 + 1])))) ? (((((/* implicit */_Bool) 11417598886430101235ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8790575330125411751LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) arr_10 [i_1] [i_1] [i_3 - 3]))), (arr_8 [i_2])))))));
                    var_11 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_2 [i_2])) < ((~(var_5)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_19 [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_13 [i_5])), (var_8)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_12 += ((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_1 + 1]);
                        var_13 *= ((/* implicit */short) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-3203))));
                        var_14 = ((/* implicit */long long int) arr_11 [i_1] [i_5] [i_4] [i_1]);
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 15; i_9 += 3) 
                {
                    arr_35 [i_9 + 1] [i_7] [i_7] [i_7] = (-(((/* implicit */int) arr_20 [i_7] [i_9 - 2] [i_9] [i_9 + 1] [i_9] [i_9])));
                    var_15 = ((/* implicit */signed char) arr_25 [i_7] [i_8]);
                }
                arr_36 [i_8] [4LL] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32577)) << (((min((((/* implicit */int) (_Bool)1)), (((arr_32 [i_7]) ? (arr_33 [i_8] [i_7]) : (arr_11 [i_7] [i_8] [i_7] [i_8]))))) + (178271174)))));
            }
        } 
    } 
}
