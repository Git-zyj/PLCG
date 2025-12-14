/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123604
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_4 [i_0] &= (~(((long long int) arr_3 [i_0])));
    }
    var_18 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) arr_6 [i_1]);
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [i_4] [i_1] [i_4] [i_3] = ((/* implicit */unsigned int) ((signed char) arr_8 [i_1] [i_2] [i_3 + 1]));
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((unsigned int) 708607104U));
                    }
                } 
            } 
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2] [i_2] [i_1] [i_1]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_2])))))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_21 = ((/* implicit */short) ((arr_8 [i_1] [i_1] [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_17 [i_1] [i_1] [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_5]))))))))));
            var_22 = ((/* implicit */unsigned short) arr_11 [i_1] [i_5] [i_1]);
            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_10 [i_1] [i_1] [i_1])))));
        }
        for (short i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            arr_20 [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_16 [i_6 + 2] [i_1]))))));
            arr_21 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_6])) << (((((/* implicit */int) arr_10 [i_6 + 1] [i_1] [i_1])) - (14478)))))) > (((unsigned int) (unsigned short)40474))));
            arr_22 [i_6] = ((/* implicit */unsigned int) arr_16 [i_1] [i_6]);
        }
        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (long long int i_9 = 3; i_9 < 20; i_9 += 2) 
                {
                    {
                        arr_31 [i_1] [i_7] [i_8] [i_9 - 3] = ((/* implicit */signed char) (~(arr_29 [i_9] [i_8] [i_8] [i_7 - 1] [i_7 - 1] [i_1])));
                        arr_32 [i_7] [i_9 - 1] = ((unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_1] [i_8])))));
                        var_24 += ((/* implicit */short) arr_8 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
            arr_33 [i_7] [i_7] = ((/* implicit */signed char) arr_13 [i_1] [i_7 - 1] [i_7 - 1] [i_7]);
            var_25 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) arr_7 [i_7 + 1] [i_1])));
            arr_34 [i_1] [i_7] = ((/* implicit */unsigned int) arr_5 [i_7 - 1] [i_7]);
        }
        var_26 = ((/* implicit */short) ((signed char) ((unsigned int) ((unsigned int) arr_11 [i_1] [i_1] [i_1]))));
    }
}
