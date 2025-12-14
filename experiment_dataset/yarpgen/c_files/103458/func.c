/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103458
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (!(var_5))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2405772297U)) ? (14697191268198871336ULL) : (((/* implicit */unsigned long long int) var_17)))) | (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    var_22 = (-(((/* implicit */int) arr_5 [i_0] [i_0])));
                }
                for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned short) ((arr_10 [i_2] [i_2] [i_2 - 3] [i_2] [(short)12] [i_1]) / (2337331768270594453LL)));
                    var_24 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    arr_12 [i_0] [i_2] = ((/* implicit */int) (~(var_12)));
                    var_25 -= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0]);
                }
                var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                arr_13 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (arr_11 [i_2 + 2] [(signed char)7] [i_2 + 2] [i_2 - 3]))))) % (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])));
            }
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [(signed char)3] [(signed char)3] [(signed char)2] [i_1] [i_5] [i_0])))) ? (((/* implicit */int) arr_6 [(signed char)3] [i_0] [i_1])) : (arr_0 [i_5])));
                var_28 = ((/* implicit */unsigned int) ((14697191268198871340ULL) < (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (3749552805510680280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16714)))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_29 *= ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                var_30 = ((/* implicit */int) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [i_1] [i_1] [i_1] [i_6]))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                for (unsigned short i_8 = 3; i_8 < 12; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_29 [i_0] [i_0] [i_7] [i_8 - 2] [i_8 - 2] [i_7] = ((/* implicit */unsigned char) (signed char)54);
                            arr_30 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7] [i_8 - 3] [i_7] [i_0])) ? (arr_10 [i_0] [(_Bool)0] [i_9] [i_8 - 1] [i_9] [i_0]) : (((/* implicit */long long int) -973419747))));
                            arr_31 [i_0] [i_1] [i_8 + 2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16945849207927852494ULL)) ? (((/* implicit */long long int) arr_21 [i_1])) : (var_11)))) : (((((/* implicit */unsigned long long int) var_12)) - (3749552805510680280ULL)))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            arr_35 [i_10] [i_0] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */int) arr_15 [i_8 + 2] [i_0])) % (-734678628));
                            var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_11 [(unsigned short)7] [(_Bool)1] [i_7] [i_7]))) ? (((/* implicit */unsigned int) ((int) arr_22 [i_1] [i_1] [i_1]))) : (((var_0) - (((/* implicit */unsigned int) arr_0 [13U]))))));
                        }
                        arr_36 [i_0] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_9);
                        var_32 = ((/* implicit */signed char) 3749552805510680280ULL);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 734678628)) ^ (arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 1])));
                        var_34 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            arr_40 [12] [12] [i_11] &= ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_11])) >= (((/* implicit */int) arr_5 [i_0] [i_11]))));
            arr_41 [i_0] [i_11] [9ULL] = ((/* implicit */unsigned short) (-(var_7)));
            var_35 = ((/* implicit */unsigned short) arr_7 [i_11] [i_0] [i_11]);
        }
        arr_42 [i_0] = ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_36 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_3) + (var_17)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (min((var_12), (((/* implicit */unsigned int) var_16))))))));
    var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9140714334615484273LL)) ? (((/* implicit */long long int) 1889194999U)) : (-5411791974203673303LL)))) ? (2405772297U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)22278)))));
    var_38 = ((/* implicit */short) var_15);
    var_39 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_12)) - (var_11)));
}
