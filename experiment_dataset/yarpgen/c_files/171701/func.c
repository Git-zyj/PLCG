/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171701
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_11 = ((((/* implicit */_Bool) (unsigned short)11899)) ? (((/* implicit */unsigned long long int) -1763295704)) : (6316225160407874901ULL));
        arr_2 [i_0] = (~(((((/* implicit */int) (unsigned short)33461)) >> (((((/* implicit */int) (short)445)) - (436))))));
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                arr_7 [i_1] [i_2] = ((/* implicit */int) ((unsigned long long int) -1036431816708719368LL));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            arr_14 [i_2 - 2] [i_0] [i_2 - 2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((~(-491901172)))));
                            var_12 ^= ((/* implicit */int) (!(((/* implicit */_Bool) -1810752019))));
                            var_13 = ((/* implicit */int) ((unsigned long long int) ((long long int) (signed char)29)));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (short)-12314))));
            }
            var_15 += ((/* implicit */int) ((((/* implicit */long long int) (~(1590139812)))) / ((+(6115362443894616189LL)))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 = (~(-491901177));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((int) 1525821335)))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_22 [4U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) -1163374069)))));
            var_18 += ((/* implicit */long long int) (+(491901195)));
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 11; i_7 += 2) 
            {
                var_19 = ((/* implicit */signed char) ((8132405480721028659ULL) + (((/* implicit */unsigned long long int) -1802219823))));
                arr_27 [i_0 - 2] [i_0] [i_0] = ((/* implicit */short) (-(2059387585)));
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32528))) & (5959881833598427998ULL)));
            }
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-12314))));
                arr_30 [(signed char)1] [9] [i_8] [2U] |= ((/* implicit */int) ((((/* implicit */int) (signed char)111)) <= (1348860022)));
                /* LoopSeq 2 */
                for (int i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    arr_34 [i_8] = ((/* implicit */int) ((-288415710) <= (((((/* implicit */_Bool) -1740263971)) ? (((/* implicit */int) (short)-23651)) : (202939581)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 3835253643U)) || (((/* implicit */_Bool) -5181525847147768916LL))))) + (2000675360)));
                }
                for (unsigned short i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) (~(253815599)));
                    var_24 = ((/* implicit */_Bool) ((signed char) (unsigned short)32072));
                }
            }
        }
        for (signed char i_11 = 4; i_11 < 12; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_14 = 2; i_14 < 11; i_14 += 1) 
                        {
                            var_25 += ((/* implicit */int) ((signed char) 1719979099));
                            arr_49 [i_0 - 2] [i_11 + 1] [i_11] [i_11] [i_14] [i_13] [i_13 + 1] |= ((/* implicit */signed char) (-(((unsigned int) (unsigned short)53636))));
                        }
                        for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) (((~(3835253623U))) << ((((~(((/* implicit */int) (unsigned char)173)))) + (184)))));
                            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-20264)) + (2147483647))) >> (((((-8655056712085968076LL) & (((/* implicit */long long int) ((/* implicit */int) (short)32523))))) - (27388LL)))));
                        }
                        for (long long int i_16 = 1; i_16 < 13; i_16 += 3) 
                        {
                            arr_55 [i_0] [i_16] [i_13 + 1] [i_16] = ((/* implicit */unsigned int) (~(1048943924889196081ULL)));
                            var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)23661)))) == (2924665525U)));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -8655056712085968076LL))))) | ((~(((/* implicit */int) (short)-32528))))));
                        }
                        var_30 = ((/* implicit */int) (+(72097824U)));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20413)) ? (1583024415U) : (((((/* implicit */unsigned int) 216361949)) + (136042150U))))))));
                        var_32 *= ((/* implicit */short) (-(((/* implicit */int) (short)-23662))));
                        var_33 = ((/* implicit */int) min((var_33), ((-(((int) (signed char)7))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (int i_18 = 1; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_34 = ((signed char) (unsigned char)174);
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((unsigned short) ((long long int) 836893032))))));
                        /* LoopSeq 2 */
                        for (int i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (short)-32544))));
                            var_37 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) -1009568427)))));
                            arr_64 [12U] [12U] [12U] [i_19] [i_19] = (!(((/* implicit */_Bool) ((int) 1487914104))));
                        }
                        for (int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
                        {
                            var_38 = (+(((/* implicit */int) (signed char)81)));
                            var_39 = ((/* implicit */short) ((_Bool) 72097824U));
                            var_40 = ((((/* implicit */int) (signed char)-50)) + (-1204268378));
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned int i_21 = 2; i_21 < 12; i_21 += 4) /* same iter space */
    {
        arr_70 [i_21] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)7387)) & (-1955545637)))))) % (min((min((3286588882U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (~(-284416671))))))));
        var_41 = ((/* implicit */short) (~(((((/* implicit */int) (signed char)24)) & (((/* implicit */int) (short)-2867))))));
        var_42 -= ((/* implicit */signed char) (-(min((496787704), (((/* implicit */int) (unsigned char)52))))));
    }
    var_43 = (!(((/* implicit */_Bool) min((min((-956430886), (1389518385))), (((/* implicit */int) min(((short)4379), ((short)-30224))))))));
    var_44 = ((/* implicit */int) var_2);
}
