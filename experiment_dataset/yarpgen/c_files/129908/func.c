/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129908
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
    var_18 = ((((/* implicit */_Bool) ((unsigned int) 3590273018U))) ? (var_4) : ((+(((var_2) & (1737559456U))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((((/* implicit */_Bool) ((((unsigned int) arr_1 [i_0])) & (var_16)))) ? (min((4294967275U), ((~(3688901966U))))) : ((+(arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((3022393632U) > (((((/* implicit */_Bool) var_0)) ? (var_14) : (187700387U))))))) - (((((((/* implicit */_Bool) 2557407839U)) ? (62914560U) : (2U))) | (2557407839U))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_20 -= (+(max((arr_3 [i_1] [i_0]), (var_7))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (16777088U) : (arr_3 [i_1] [i_0]))))));
            var_21 = ((unsigned int) ((3150673525U) >= (4294967295U)));
            var_22 = max((((((/* implicit */_Bool) var_5)) ? (min((2374367469U), (var_9))) : ((+(var_15))))), (((((/* implicit */_Bool) (+(var_4)))) ? ((-(arr_1 [i_0]))) : ((+(var_7))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_23 &= (+(((3574291629U) & (arr_4 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned int) ((3022393632U) <= (1737559441U)));
                            var_25 = ((((/* implicit */_Bool) arr_12 [i_5] [i_4 + 2] [i_3 - 1] [2U])) ? (arr_6 [3U] [3U]) : (4294967275U));
                        }
                    } 
                } 
                arr_18 [i_0] [i_2] [i_0] = (~(((unsigned int) 1424173358U)));
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2] [i_2 - 1] [i_2 - 2]))));
            }
            arr_19 [i_2] &= 87287822U;
            var_27 = ((2256968438U) + (2U));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned int i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 4; i_9 < 18; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_28 = min((max((((var_11) - (var_0))), (((((/* implicit */_Bool) var_15)) ? (var_13) : (var_2))))), (arr_26 [i_8] [i_7] [i_8 - 2] [i_8 - 2]));
                                arr_32 [i_10] [i_6] [7U] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) ((((((1737559440U) == (369665857U))) ? (((((/* implicit */_Bool) 4294967294U)) ? (var_14) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7] [8U])))))))) != (arr_22 [i_6] [i_7])));
                            }
                        } 
                    } 
                    arr_33 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_8] [i_8 + 2])) ? (arr_24 [i_6] [i_7] [i_6] [i_8 + 2]) : (arr_31 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))) ? (max((arr_24 [i_6] [i_7] [3U] [i_8 - 2]), (arr_31 [i_8 + 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 - 1]))) : (((4216948227U) / (1073741792U))));
                }
            } 
        } 
        var_29 = arr_22 [i_6] [i_6];
    }
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_30 = ((((/* implicit */_Bool) arr_22 [i_11] [i_11])) ? (max((3433026421U), (3758096384U))) : (min((arr_22 [i_11] [13U]), (arr_22 [i_11] [i_11]))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (arr_20 [19U] [i_11])));
        arr_36 [i_11] = (~(((unsigned int) ((4027372274U) >> (((16777200U) - (16777170U)))))));
        arr_37 [1U] = ((unsigned int) 2147483392U);
        var_32 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(3758096384U))))))), (((((/* implicit */_Bool) ((unsigned int) 2557407819U))) ? (3990531627U) : (4216948227U))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_33 = (((!(((/* implicit */_Bool) 4216948250U)))) ? (arr_38 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2U) <= (var_15))))));
        arr_41 [i_12] = (+(536870912U));
    }
}
