/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184795
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
    var_18 -= ((/* implicit */unsigned char) min((((((((/* implicit */long long int) var_10)) >= (-5440412170173815263LL))) ? (((((/* implicit */_Bool) var_15)) ? (var_11) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (var_3))))))), (min((((long long int) (_Bool)1)), (((/* implicit */long long int) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (4053892422U) : (((/* implicit */unsigned int) arr_4 [8] [i_0] [i_1])))) <= (((/* implicit */unsigned int) (-(arr_4 [i_0] [i_0] [i_1]))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) min(((-(var_9))), (-5LL)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)172)) - (156)))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 16; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_2 + 2] [i_2 + 3]) & (arr_11 [i_2 + 2] [i_2 + 3])))) ? (max((((/* implicit */long long int) (_Bool)1)), (4931763498807015609LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 3]))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_21 = ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_5])) ? (-9154898471986167854LL) : (-8970753227587413415LL));
                            var_22 = min((arr_12 [i_2 - 4] [i_2 + 1] [i_4 - 4] [i_4 + 1]), (((/* implicit */long long int) arr_8 [i_2 + 3] [i_4 - 3])));
                            /* LoopSeq 2 */
                            for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                            {
                                arr_18 [i_2] [i_3] [i_5] [i_5] = ((/* implicit */int) var_16);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) ((var_8) - (var_8)))), (((-2162544331480136907LL) & (((/* implicit */long long int) arr_16 [i_5] [i_5] [i_5] [7LL] [i_4] [12] [i_2])))))) : ((((-9223372036854775807LL - 1LL)) / (((((/* implicit */_Bool) 26LL)) ? (arr_13 [(_Bool)1] [i_3] [i_2]) : (283384104272967443LL)))))));
                                var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_17 [i_6 - 1] [i_5] [i_3])) | (((((/* implicit */long long int) 4107665509U)) ^ (-9223372036854775807LL)))))) ? (4216009355888124998LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 - 4] [i_2 - 4]))))))));
                                var_25 = ((/* implicit */int) 4107665505U);
                                arr_19 [i_2] [i_3] [(_Bool)1] [i_5] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_13 [i_4 + 1] [i_2 - 4] [i_2]) == (((/* implicit */long long int) 1311188738))))), ((-(var_2)))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                            {
                                var_26 = ((/* implicit */long long int) (((~(4294967295U))) - (var_10)));
                                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1617582947448613660LL)) ? (-3265248646046575504LL) : ((-(var_15)))));
                                var_28 = ((/* implicit */long long int) ((unsigned char) (unsigned char)65));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (long long int i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) 2336288019722727043LL);
                                var_30 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((long long int) arr_17 [i_10 + 1] [i_3] [i_2 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 3742187624U)) >= (((arr_22 [i_9]) - (7714808712347068069LL))))))) : (((((/* implicit */_Bool) -297896760464077889LL)) ? (min(((-9223372036854775807LL - 1LL)), (var_15))) : (var_17)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 18; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            arr_34 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) max((-1LL), (-2336288019722727052LL))));
                            var_31 -= ((/* implicit */unsigned char) (~((((+(var_7))) >> (((arr_31 [i_11 - 3] [i_3] [i_2]) - (1700403524U)))))));
                            arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = ((unsigned int) 3742187624U);
                            var_32 = ((/* implicit */long long int) max((var_32), ((~((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 1) 
                    {
                        {
                            arr_40 [i_14] [i_13] [i_13] [i_3] [i_14] = ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) (_Bool)1)), (var_14))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))))) - ((-(187301792U)))))) : (var_12));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) 4770327177009842331LL))));
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
}
