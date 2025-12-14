/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143921
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_2 [i_0] [i_0 - 2])))) : (((/* implicit */int) arr_2 [(unsigned char)7] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_8 [(signed char)6] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)177)))));
        var_17 = (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 4; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [5U] [i_2 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_4]))))) : (472146170734678282LL)));
                        arr_19 [(short)2] [i_5] [i_5 - 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3])) || (((/* implicit */_Bool) -1LL))));
                        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((unsigned long long int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]));
        var_21 = (-(((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) 472146170734678282LL)))));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) (_Bool)1)));
                    arr_25 [i_2] [i_6 - 1] [i_6] = ((/* implicit */_Bool) -2496513085062690366LL);
                    var_23 = ((/* implicit */long long int) (unsigned char)255);
                }
            } 
        } 
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_14 [i_2 - 1] [i_2 - 1]))))));
    }
}
