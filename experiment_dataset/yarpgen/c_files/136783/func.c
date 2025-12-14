/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136783
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
    var_20 = ((/* implicit */unsigned int) ((short) var_5));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_22 = ((/* implicit */unsigned int) ((130816U) > (130793U)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 130844U)) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))));
        var_24 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = arr_5 [23ULL];
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    {
                        var_26 *= ((/* implicit */signed char) (-(arr_21 [i_2 - 3] [i_2 - 3] [i_5 - 1] [i_5 + 1])));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 2])) - (((((/* implicit */int) var_7)) - (((/* implicit */int) var_12))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (_Bool)1))));
                        var_29 = ((/* implicit */unsigned char) arr_16 [i_2] [i_2] [i_2 + 1]);
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_23 [i_2 - 3]), (arr_6 [i_2 - 3] [i_2 + 1])))) ? (2411043708U) : (max((428806534U), (((/* implicit */unsigned int) var_2))))));
            var_31 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (130807U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6])))))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_32 |= ((/* implicit */int) min((14380888888852274693ULL), (arr_2 [i_9])));
                            var_33 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_30 [i_2 + 1] [i_2 - 3] [18ULL] [4U] [i_2 - 2] [i_2 - 2])) & (min((arr_21 [i_9] [i_2] [i_7] [i_2]), (((/* implicit */unsigned int) (unsigned short)65535))))))), (min((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
        }
        var_34 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (var_13) : (arr_0 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (3545461500013451388LL)))));
        var_35 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4294836476U)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) > (((/* implicit */int) arr_4 [(signed char)1] [(signed char)1])))))))) + (max((3257251376U), (((/* implicit */unsigned int) ((short) (signed char)127)))))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)-13368)) & (((/* implicit */int) (unsigned short)25082))))))) ? ((~(130820U))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294836455U)) ? (((/* implicit */int) var_12)) : (arr_30 [(_Bool)1] [i_2 - 1] [i_2] [i_2] [11] [i_2]))) & (((var_0) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_5 [i_2])))))))));
        var_37 = ((/* implicit */unsigned int) (((-(arr_25 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14))))));
    }
}
