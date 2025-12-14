/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165671
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_15 [i_1] [i_3] = ((/* implicit */int) -12LL);
                        arr_16 [i_0] [i_0] [i_1] [i_2 - 4] [i_3] = ((max((((/* implicit */unsigned long long int) (!(var_1)))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_2))))) << (((var_11) - (13731131317803264290ULL))));
                        var_19 = var_9;
                    }
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [24ULL] [i_1] [(unsigned char)6] [i_1])) ? (((/* implicit */int) min((var_5), (var_18)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) || (((/* implicit */_Bool) (unsigned short)61361))));
                    arr_17 [i_1] = ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)47292);
        var_21 -= ((/* implicit */unsigned char) var_2);
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        arr_26 [i_0] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (+((-(arr_1 [i_0] [(short)0])))));
                        arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (7533864370098393510ULL))) - (((/* implicit */unsigned long long int) (-(1982655599))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((min((((/* implicit */int) var_12)), ((+(((/* implicit */int) (unsigned short)47289)))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))));
                        arr_28 [i_0] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)22822))))), (((unsigned short) (unsigned short)10494)))))));
                        arr_29 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((min((((/* implicit */int) (unsigned char)255)), (((int) (short)-16114)))) * ((+(((/* implicit */int) arr_8 [i_0] [i_4] [i_5] [i_6]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)255)) ? (1587759011) : (-671068261))), (((/* implicit */int) (unsigned char)209))));
                arr_32 [i_7] [i_4] [i_0] [i_7] = ((/* implicit */signed char) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8 - 1] [i_8 + 2] [i_8 + 1])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))));
                arr_36 [i_8] [i_4] [i_4] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_2)));
            }
        }
        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) arr_2 [20]);
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((min((arr_41 [i_0] [i_9]), (((/* implicit */unsigned long long int) 3104541082U)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)243))))))))));
                var_27 = ((/* implicit */long long int) ((unsigned int) var_17));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (1296764714132032179ULL))))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */int) var_8)) << (((((/* implicit */long long int) -313041855)) / (-8729729463585006932LL)))));
                            arr_47 [i_9] [i_9] = ((/* implicit */unsigned char) var_9);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-16114)) > (((/* implicit */int) var_6))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) -900118384)), (((((/* implicit */_Bool) var_16)) ? (min((var_16), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)47289)) : (((/* implicit */int) (unsigned char)243)))))))));
            arr_48 [i_0] [16ULL] [i_9] = ((/* implicit */unsigned long long int) var_7);
        }
        var_32 -= ((/* implicit */int) 4294967275U);
    }
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        arr_51 [i_13] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_31 [i_13] [i_13] [i_13])))) % (4175378410U));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            for (unsigned int i_15 = 1; i_15 < 16; i_15 += 2) 
            {
                {
                    arr_56 [(short)16] [i_13] [i_13] [i_15] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3405095730U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))) : (min((4175378417U), (((/* implicit */unsigned int) arr_46 [i_15 - 1] [i_14] [22] [22] [(unsigned short)19])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_33 -= ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_6 [i_16]))));
                        var_34 *= ((/* implicit */short) (~(var_17)));
                    }
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_14)), (var_4))))));
}
