/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151761
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
    var_18 ^= ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_3] [i_2] [i_1]))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-69)) ? (-514890365) : (-1785587709))) - ((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0))))))) && (((/* implicit */_Bool) max((min((((/* implicit */int) (signed char)43)), (arr_2 [i_0]))), (((/* implicit */int) max((arr_9 [i_1]), (((/* implicit */short) (signed char)127))))))))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_0] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((arr_8 [(signed char)3] [i_1] [i_2 - 1] [(signed char)3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [(unsigned short)5] [i_1] [i_2 + 1])))) <= ((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (-1348094020) : (((/* implicit */int) (unsigned short)14083)))))), (((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)104))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (unsigned short)23684)))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        for (signed char i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_6] [i_4 + 1])) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_19 [i_7 - 1] [i_4] [i_4 + 1]))))) ? (((/* implicit */int) (!(arr_19 [i_7 - 1] [i_4] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_4] [i_4 + 1])) ? (-527084189) : (((/* implicit */int) arr_19 [i_7 + 1] [i_5] [i_4 + 1])))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            var_22 -= ((/* implicit */_Bool) ((int) max(((-(((/* implicit */int) var_15)))), (((/* implicit */int) (signed char)19)))));
                            arr_29 [i_4] [(short)6] [i_4] [(short)6] [i_8] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_26 [i_4] [i_5 - 2] [i_6] [i_7 + 1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_4] [i_8])))))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(arr_28 [i_5] [6ULL] [i_5]))), (((((/* implicit */_Bool) -224702153)) ? (((/* implicit */int) arr_19 [i_8] [i_6] [i_4 + 1])) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_8 - 1]))))))) ? (((/* implicit */int) (_Bool)1)) : ((((~(((/* implicit */int) (signed char)127)))) % (((/* implicit */int) ((unsigned short) arr_20 [i_4 + 1] [i_5 - 1])))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        arr_32 [i_4 - 1] [i_5] [i_4] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) ((2147483647) != (((/* implicit */int) arr_23 [i_4] [i_4])))));
                        arr_33 [i_4] [i_4] [i_5 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) (signed char)-122))))));
                    }
                    arr_34 [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((max(((unsigned short)50304), (((/* implicit */unsigned short) (_Bool)0)))), (var_15)))), (min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)8)), (arr_20 [i_5 + 1] [i_5])))), (((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_6])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)0))))))));
                    arr_35 [i_5] |= (~(((/* implicit */int) (signed char)-40)));
                }
            } 
        } 
    } 
}
