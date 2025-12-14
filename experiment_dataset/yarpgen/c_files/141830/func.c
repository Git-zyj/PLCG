/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141830
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [20ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) / (arr_3 [i_1] [i_1 - 2] [i_0]))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_0 [i_0])), (230069020546292939LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)4395))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
                            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), (var_0)))) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_2])) || (var_5)))))) % (((/* implicit */int) arr_8 [i_1] [i_3]))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (((~(((/* implicit */int) arr_4 [i_0])))) == (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)22057))) - (1317889881598557862LL))) : (arr_2 [i_0])))));
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    arr_15 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (min((arr_2 [i_1 - 3]), (((/* implicit */long long int) (short)4374))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_22 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (short)4395)) == (((/* implicit */int) (short)25644))))))));
                                var_15 = (+(((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), ((short)-20388))))) : (3872074792363937931ULL))));
                                var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_23 [i_0] [i_1] [i_4] [i_4] [i_5] [19ULL] [(signed char)13] = ((/* implicit */signed char) (+(min((min((arr_21 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (+(arr_24 [i_0] [i_4 - 2] [i_1 - 3] [i_8])));
                                var_18 += ((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_4]);
                                arr_30 [i_0] [i_0] [i_7] [i_4] [(short)19] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 1]))) : (2999532464U)))) || (((/* implicit */_Bool) arr_2 [i_4 - 1]))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (3805978284059206420ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)805))) & (var_12))))))));
                                arr_31 [i_0] [i_4] [i_4] [i_7] [i_4] [i_4 + 2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-12361)) + (2147483647))) >> (((arr_21 [i_1 - 3] [i_1 - 2] [i_4 + 3]) - (5463221296845511356ULL)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) 5283052791176227541ULL)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)0)), (arr_9 [i_1 - 3] [i_1] [i_1 + 1] [i_0] [i_0])))), (14574669281345613684ULL)));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            {
                                arr_48 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned short)55019)) << (((/* implicit */int) arr_6 [i_11] [i_13] [i_14])))))), (min((((/* implicit */unsigned long long int) (unsigned short)38244)), (3204700290892049246ULL)))));
                                var_22 = ((/* implicit */unsigned short) ((max((var_12), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) arr_39 [i_14] [i_14]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18597))) : (var_4)))))))));
                                arr_49 [i_10] [i_10] [i_10] [i_10] = arr_13 [i_10] [i_11] [(short)11] [(signed char)13];
                            }
                        } 
                    } 
                    var_23 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_34 [i_12] [i_11])) : (((/* implicit */int) (short)10385))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521)))))));
                    arr_50 [i_10] [(short)3] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-91)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11782))) : (arr_21 [i_10] [i_11] [i_12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) / (-7755946392760983162LL))))));
                }
            } 
        } 
    } 
}
