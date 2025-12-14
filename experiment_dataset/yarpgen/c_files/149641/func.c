/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149641
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
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_19))));
    var_21 = ((((/* implicit */int) (unsigned short)23214)) <= (((/* implicit */int) (unsigned short)42345)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(short)1] = ((/* implicit */unsigned int) var_6);
        arr_3 [(unsigned char)3] = ((/* implicit */signed char) (-(arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (-((~(var_16)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_14 [0] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned short)42321);
                    arr_15 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((int) var_7)))) ? (max((((/* implicit */long long int) arr_6 [i_1 - 1])), (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1] [i_1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)23214)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_19 [(short)18] = ((/* implicit */int) 2159230420572934498LL);
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            for (unsigned char i_6 = 3; i_6 < 18; i_6 += 3) 
            {
                {
                    arr_26 [i_4] [i_5] [(unsigned short)17] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 288230376151711744LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 + 3]))) : (10958787589040887758ULL)));
                    arr_27 [i_4] [i_5] [i_6] [4LL] = ((/* implicit */unsigned int) ((unsigned char) var_6));
                }
            } 
        } 
    }
}
