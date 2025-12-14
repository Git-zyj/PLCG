/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188796
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
    var_19 = ((/* implicit */int) ((3648121957U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned char)0);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) || (((/* implicit */_Bool) max(((short)26061), (((/* implicit */short) (unsigned char)0)))))));
        var_21 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) (!(((/* implicit */_Bool) 7695283811118929884ULL)))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [(_Bool)1] = ((/* implicit */int) max(((~(arr_6 [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 - 4] [i_2] [i_2] [i_2 - 4])) || (((/* implicit */_Bool) arr_7 [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 4])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) -644002892))) || ((!(((/* implicit */_Bool) ((long long int) arr_6 [i_2] [i_3] [i_2 - 4] [i_2])))))));
                                arr_15 [i_0] [i_3] [i_1 + 1] [i_3] [i_3] [(unsigned short)10] &= ((/* implicit */unsigned int) max((max((max((((/* implicit */unsigned short) (unsigned char)85)), (arr_3 [i_0]))), (((/* implicit */unsigned short) ((1697713476U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(short)6])))))))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [14ULL])), ((short)10623))))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = arr_5 [(signed char)15];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] |= ((/* implicit */unsigned int) ((_Bool) ((unsigned short) (+(9157473674161370904LL)))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                        var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_8] [i_8 + 1] [i_8 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))), (max((arr_6 [i_8 + 1] [i_5] [i_5] [i_7 + 1]), (((/* implicit */unsigned int) arr_28 [i_8] [i_8 - 1] [i_8 - 1] [i_7 + 1] [0LL] [i_7 + 1]))))));
                        arr_29 [i_5] [i_7] [i_5] [i_5] &= ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned char) ((770156185U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5])))))), (((unsigned char) (unsigned char)0))))), (arr_10 [i_8 + 1] [i_7 - 1] [(unsigned short)20] [i_7 - 1])));
                    }
                } 
            } 
        } 
        arr_30 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_25 [i_5]), (((/* implicit */signed char) arr_24 [0U] [i_5] [i_5])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 3) 
        {
            arr_35 [i_5] [(short)2] [i_5] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)18] [i_5] [i_9 + 1] [i_9 - 2]))));
            arr_36 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned int) arr_12 [i_5] [i_5] [i_5] [i_9 - 1] [i_9 + 1]));
        }
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            var_25 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [i_10])))))));
            var_26 *= ((/* implicit */signed char) -9157473674161370904LL);
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (unsigned short i_12 = 4; i_12 < 10; i_12 += 4) 
                {
                    {
                        var_27 -= ((short) ((_Bool) arr_44 [i_12] [i_12] [i_12 - 3] [i_5]));
                        arr_46 [i_5] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) arr_45 [i_5] [i_10] [i_5] [i_5] [i_12 - 2]))));
                        var_28 *= ((/* implicit */short) arr_43 [i_5] [i_5] [i_5] [i_5]);
                    }
                } 
            } 
        }
    }
}
