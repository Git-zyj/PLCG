/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163337
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((arr_3 [i_0 + 3]) ? (((/* implicit */int) var_8)) : (arr_0 [i_0 + 3])));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 524286U))));
                            arr_13 [i_2] [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2] [i_2])) != (arr_0 [i_2 + 3])));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_2] [i_1 + 2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -1741457790)) : (4294443033U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [i_5 + 1] [i_5 + 3]))) : (524312U)));
                            arr_17 [(unsigned short)12] [0U] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_3 - 1] [(signed char)12] [i_5 - 1])) ? (arr_4 [i_2 - 1] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_5])) * (((/* implicit */int) var_12)))))));
                        }
                        arr_18 [i_2] [i_2 - 1] [i_1] [i_2] = ((((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) (short)20994)))) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])) & (((/* implicit */int) arr_9 [i_0] [2] [i_2] [i_3 - 1]))))))) ? ((~(((((/* implicit */_Bool) 4294967295U)) ? (17409306404219236996ULL) : (((/* implicit */unsigned long long int) 1U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(arr_1 [i_3 - 1]))))))));
                        arr_19 [i_2] [i_2] [i_2] [i_1] [i_1] [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 347702421U))))));
                        arr_20 [i_3] [i_1] [i_2] [i_2] [i_0 + 2] = ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) (short)-23300);
                            var_21 = ((arr_23 [i_2] [i_2] [i_2 + 1]) < (arr_23 [i_1] [i_2] [i_2 + 2]));
                            arr_25 [i_0 + 1] [i_2] [i_6 + 3] [i_2] = ((/* implicit */_Bool) arr_11 [i_0] [i_6] [i_2 + 2]);
                            var_22 = ((/* implicit */int) ((_Bool) ((arr_0 [i_7]) >= (((/* implicit */int) arr_1 [i_0])))));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_28 [i_6] [i_6 + 2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_23 [i_1] [i_2] [i_8])) + (7251556854354302852ULL)));
                            arr_29 [i_0] [i_2] [5ULL] [i_6] [10] = ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0 + 3])) ? (arr_7 [i_2] [i_0] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2]))));
                        }
                        arr_30 [i_2] [i_2] [i_2 + 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)244))));
                        var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)43203)) ? (4294443001U) : (2U)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                arr_37 [i_2] = ((/* implicit */unsigned int) min((arr_24 [i_0 + 2] [i_1 - 2] [i_1 - 2] [i_2 + 2] [i_1 - 2] [i_10] [i_10]), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (arr_35 [i_0] [i_2] [i_2 + 1]))), (arr_35 [i_10] [i_2] [i_0]))))));
                                var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-39)), (var_15)))) ? (((/* implicit */unsigned int) var_15)) : (arr_35 [i_1 + 2] [i_2] [i_2 + 3])))));
                                arr_38 [i_2] = 1011017192165116571ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_9)))))) * ((-(max((3947264874U), (((/* implicit */unsigned int) var_16))))))));
}
