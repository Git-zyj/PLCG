/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152240
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) var_8);
            arr_8 [i_0] [i_0] = ((arr_2 [i_0] [i_0]) + (((/* implicit */int) arr_0 [i_0])));
        }
        for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            var_18 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (arr_12 [i_0])))));
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(582000836705275237LL))))));
            arr_13 [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2]);
            var_20 = ((/* implicit */short) var_14);
        }
        var_21 = ((/* implicit */unsigned short) ((signed char) (signed char)-104));
        var_22 = ((/* implicit */signed char) var_9);
        var_23 = ((/* implicit */unsigned char) arr_11 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */unsigned char) var_0);
        var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) arr_4 [8] [i_3])))))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) var_6);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_26 += ((/* implicit */unsigned int) var_7);
            arr_22 [(_Bool)1] [i_5] &= ((/* implicit */int) ((unsigned int) ((int) 1333727512U)));
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) var_15));
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_27 = ((/* implicit */short) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4])))));
            var_28 = ((/* implicit */unsigned long long int) arr_1 [i_4] [i_4]);
        }
        arr_26 [i_4] = ((/* implicit */unsigned int) (signed char)127);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                {
                    arr_32 [i_4] [i_7] [i_8] [i_4] = ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (582000836705275256LL)))) && (((/* implicit */_Bool) ((short) arr_9 [i_4]))))) && (((/* implicit */_Bool) min((min((var_0), (var_0))), (var_0)))));
                    var_29 = ((/* implicit */unsigned char) arr_27 [i_4] [i_7] [i_4]);
                    arr_33 [i_4] [i_7] [i_4] [i_8] = ((/* implicit */int) -582000836705275232LL);
                    var_30 = arr_24 [i_8 + 1] [i_8 - 1];
                    var_31 = ((/* implicit */short) arr_5 [i_7] [i_4]);
                }
            } 
        } 
    }
    var_32 = ((/* implicit */int) var_1);
    var_33 = ((/* implicit */int) (((~(var_10))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}
