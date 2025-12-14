/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164776
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_2 + 1] [i_4] [i_0 - 2] [i_0 - 2] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) arr_14 [i_3] [i_2 + 2] [i_2 + 2] [i_0 - 2] [i_4] [i_2] [i_0])) : (13613375502102191730ULL)))) ? (((((/* implicit */_Bool) 3658696618U)) ? (4833368571607359878ULL) : (13613375502102191730ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) var_13)), (arr_0 [i_2 + 3] [i_0 - 1])))) * (((((/* implicit */_Bool) arr_0 [i_2 + 3] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_2 + 3] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_2 + 3] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2])) - (160)))))), (min((4833368571607359869ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0 - 1]))))));
                    var_23 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)53808))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)112)) & (((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */short) (_Bool)0))))))) >> (((max((-2515909003586904446LL), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_5 + 1])))) - (14249LL)))));
                                var_25 *= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_6] [i_0] [i_2] [i_0] [i_0])) == (((/* implicit */int) arr_5 [i_1] [i_6]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_2]))))) ? (((long long int) arr_22 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */long long int) (+(((/* implicit */int) var_15))))))))));
                        arr_26 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned long long int) (((-(arr_8 [i_1] [i_2] [i_1] [i_0]))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)46343))));
                        var_27 = ((/* implicit */unsigned int) (~(8254209900374401670ULL)));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */signed char) (unsigned char)141);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_1 [i_0 - 1]))));
                        arr_33 [i_9] [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)51))));
                    }
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */short) var_7);
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */long long int) 1098930839U);
                        var_31 *= (~(((/* implicit */int) var_15)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_32 = ((/* implicit */short) (-(arr_10 [i_13] [(unsigned char)10] [i_13] [i_13])));
        var_33 &= ((((/* implicit */_Bool) 4833368571607359883ULL)) ? (((/* implicit */int) (short)2504)) : (((/* implicit */int) (_Bool)0)));
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20881)) ? (arr_4 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 15603689011023267864ULL))))));
        var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    }
    var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)11700)) << (((((/* implicit */int) var_16)) - (24775))))) / (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_14)) - (29253)))))))), (13613375502102191747ULL)));
    var_37 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (max((max((((/* implicit */unsigned long long int) (signed char)-5)), (var_3))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_14 = 4; i_14 < 9; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_38 *= ((max((((/* implicit */int) (unsigned short)31401)), (1856366974))) | (((/* implicit */int) (signed char)-1)));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 11; i_17 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_5)), (max((arr_53 [i_14 - 2] [i_14 - 2] [i_17] [i_17] [(unsigned char)2]), (((/* implicit */long long int) (_Bool)1)))))))));
                            arr_55 [i_16] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34702))) / (9223372036854775807LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
