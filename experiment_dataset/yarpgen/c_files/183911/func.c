/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183911
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
    var_11 = 4833654323604194708ULL;
    var_12 += ((/* implicit */_Bool) max(((+(4833654323604194712ULL))), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned char) max((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)255), ((unsigned char)58))))) > (max((arr_1 [10ULL]), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_0 - 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15702097070859991292ULL)) ? ((+(13613089750105356908ULL))) : ((+(10305879960274709782ULL)))))) ? ((~(var_3))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_4)), (arr_4 [i_2] [i_3 - 4] [i_4])))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (8140864113434841831ULL)))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] = (+(max((((/* implicit */unsigned long long int) var_4)), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1] [i_1] [i_0])) > (((/* implicit */int) (_Bool)1))))) == (((/* implicit */int) ((((/* implicit */int) (short)32747)) != (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_1] [i_2] [i_0])))))));
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_5 [i_0])), (var_3)));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0] [i_5] [i_0] [(unsigned char)8])))))));
            var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned char) (short)16))) ? ((-(var_6))) : (max((var_6), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_5])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 - 1])))) == ((~(((/* implicit */int) (_Bool)1)))))))));
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) (unsigned char)204)) > (((/* implicit */int) (short)-32738)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_20 = (short)-16764;
                            var_21 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-1)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (387440174892592172ULL)))));
                            var_22 = min((max((15678000331651380503ULL), (1690535391189582465ULL))), (max((((/* implicit */unsigned long long int) (short)1)), (12606597191104566537ULL))));
                            var_23 *= ((/* implicit */_Bool) 18446744073709551603ULL);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 4; i_10 < 11; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) 6225751690307314830ULL)) && (((/* implicit */_Bool) 4196326750905780289ULL)))) ? ((~(((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1])))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        var_25 = ((/* implicit */_Bool) 8335559374162177511ULL);
                        var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) * (var_9));
                    }
                } 
            } 
            arr_35 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_9] [i_9])) : (((/* implicit */int) (short)0))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (4196326750905780272ULL)));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
        {
            arr_38 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2401996159441745947ULL)) && (((/* implicit */_Bool) arr_20 [i_0 - 1]))));
            arr_39 [5ULL] [i_0] [i_12] = ((/* implicit */unsigned char) (+(((14250417322803771327ULL) + (5840146882604985083ULL)))));
            arr_40 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)13736)) == (((/* implicit */int) arr_34 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
        }
    }
    for (unsigned long long int i_13 = 3; i_13 < 8; i_13 += 2) /* same iter space */
    {
        arr_44 [i_13] = ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))));
        var_28 = ((/* implicit */_Bool) min((min((14918426461788251315ULL), (((/* implicit */unsigned long long int) (short)-32313)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32289)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 2) /* same iter space */
    {
        var_29 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)25879))));
        var_30 = arr_25 [(short)12] [i_14 + 3] [i_14 + 2] [i_14 - 1] [i_14 + 1] [i_14];
        var_31 = ((/* implicit */unsigned long long int) (short)13736);
    }
}
