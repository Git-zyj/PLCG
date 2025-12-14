/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172785
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 -= ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2)))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -399824833)))))))) ? ((+(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_1)))))) : (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_3))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_3))))))))))));
        var_17 *= ((/* implicit */unsigned int) (~(min(((+(((/* implicit */int) var_8)))), ((~(((/* implicit */int) var_1))))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)5589))));
                var_19 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_5)), (-9223372036854775786LL)))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_13)) & (var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((var_12) << (((var_12) - (13863647714121865153ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (var_4)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) 30)), (1859196249U))))))));
            }
            var_21 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12))))) ? (((/* implicit */int) (((-(var_13))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((2615310908699461626LL), (((/* implicit */long long int) (short)-788))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_13)))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */short) min((var_6), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 1506298603)))))))), (var_8)));
                var_23 += ((/* implicit */unsigned int) var_2);
            }
            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? ((+(var_5))) : ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max(((~(var_13))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))));
            var_25 = ((/* implicit */unsigned char) min((min((2251798739943424LL), (((/* implicit */long long int) (signed char)-125)))), (((/* implicit */long long int) (+(((((/* implicit */int) var_11)) << (((/* implicit */int) var_11)))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_4)) != (var_0)));
        var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_28 += ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_13)))));
                arr_25 [i_8] [i_8] = (+(((((/* implicit */int) var_10)) - (((/* implicit */int) var_8)))));
                arr_26 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8))))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_7)) : (var_13))) - (2063166132U))))))));
                arr_27 [i_6] [i_8] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_6)) - (210)))))) || (((/* implicit */_Bool) var_7))));
            }
            var_30 -= ((/* implicit */unsigned int) var_12);
        }
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (+(var_4))))));
        /* LoopSeq 2 */
        for (signed char i_9 = 2; i_9 < 12; i_9 += 4) 
        {
            var_32 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_11)) : (var_5))))));
            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_10)) != (var_5))))));
        }
        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            var_34 = ((/* implicit */unsigned int) var_12);
            var_35 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (var_4))) != (((/* implicit */int) ((((/* implicit */int) var_8)) != (var_7)))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_37 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                            var_38 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)30735)))) ? (((var_12) << (((var_2) + (2018658924))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1))))))));
                            var_39 = ((/* implicit */short) var_7);
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_9))));
                            arr_42 [i_6] [i_10] [i_11] [i_10] [i_13] [i_13] [i_11] = ((/* implicit */short) ((((var_11) ? (var_12) : (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        for (unsigned int i_14 = 2; i_14 < 11; i_14 += 2) 
                        {
                            arr_46 [i_6] [i_10] [i_10] [i_14] [i_14] = ((/* implicit */int) var_9);
                            var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) ^ ((~(((/* implicit */int) var_9))))));
                        }
                        arr_47 [i_10] = ((/* implicit */short) ((((1883458043U) | (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) << (((3791341724316991196LL) - (3791341724316991184LL)))));
                        arr_48 [i_6] [i_10] [0U] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
            var_42 -= ((/* implicit */short) (-(((((/* implicit */int) var_3)) / (var_5)))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        arr_52 [(signed char)2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)17541)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned short)3650)))) >= (((/* implicit */int) min((((/* implicit */short) var_6)), (var_3)))))))));
        arr_53 [i_15] [i_15] = ((/* implicit */unsigned char) var_11);
        arr_54 [i_15] = ((/* implicit */unsigned long long int) var_9);
        var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)192))));
    }
    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_9)) - (((/* implicit */int) var_10))))))));
}
