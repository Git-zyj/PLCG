/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13861
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_6);
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)32767)))) | (((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12158)))))) ? (((/* implicit */int) (unsigned short)46604)) : (((/* implicit */int) ((short) (short)(-32767 - 1)))))))))));
        }
        var_20 = ((/* implicit */unsigned char) ((max((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_10)))), (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-32760)) ? ((-2147483647 - 1)) : (var_6))))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)30296)) & (2147483647))), (((((/* implicit */int) arr_5 [6] [i_0 - 2] [i_2])) ^ (-1534499766))))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 9U))));
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned short)21)))), (((((/* implicit */_Bool) 3275491568U)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (signed char)-1))))))) ? (((((/* implicit */_Bool) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1377536220988917618LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-32765))))))) : (min((var_16), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) (+(((int) (signed char)-86)))))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_0 - 1]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_12 [i_0 - 1])) % (((/* implicit */int) var_1)))))))));
        }
    }
    for (long long int i_4 = 2; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (long long int i_7 = 4; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((arr_17 [i_6]) || (((/* implicit */_Bool) var_14)))))))) >= (min((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), ((-2147483647 - 1))))), (((unsigned int) var_12)))));
                        var_26 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-30))))) : (10753505175849081849ULL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_27 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1534499766)) : (var_14))))))) - (((/* implicit */int) (unsigned short)30300))));
            var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            arr_29 [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) 13628160195567105487ULL));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_29 *= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101)))))));
                            var_30 -= ((/* implicit */unsigned short) ((_Bool) ((unsigned char) var_8)));
                            arr_39 [i_4] [i_4] [i_4] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_18))))) - (arr_2 [i_4 - 2])));
                            arr_40 [i_10] [i_11] [i_12] |= ((/* implicit */unsigned int) 5466266885252433531LL);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)121)) & (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) 3275491568U)) : (((2251799811588096ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183)))))));
            }
            for (short i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned short i_15 = 2; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) arr_37 [i_14] [i_14] [i_14] [i_14] [i_14]);
                            arr_47 [i_14] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1530442741)) : (var_5));
                            arr_48 [i_14] [(_Bool)1] [i_14] [i_14] [i_13] [i_9] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned long long int) arr_15 [i_4 + 1]))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-9))))) | (var_4)));
            }
            arr_49 [16] [16] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (1614913956389773380LL) : (7300200008689886996LL)));
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1824968286) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) arr_15 [i_9])) : (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))))));
        }
        var_35 = ((/* implicit */unsigned int) max((var_35), (((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (18446744073709551610ULL)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_0)))))) : (((unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        arr_52 [i_16] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_18)))));
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40240)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((_Bool) (-2147483647 - 1))))));
    }
}
