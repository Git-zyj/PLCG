/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106721
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
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */_Bool) 18117657589941263222ULL);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_5);
                                var_17 = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) (short)-23553))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23553)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_15 [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((3649996397612058906ULL) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_0)))))))));
                            arr_16 [i_6] = ((/* implicit */_Bool) var_6);
                            arr_17 [i_0] [(signed char)0] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_8)), (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))))))), (((/* implicit */unsigned long long int) (unsigned char)140))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || ((!(((/* implicit */_Bool) 1749477305))))));
                            arr_20 [i_0] [i_0] [i_2] [i_5] [7U] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (short)-7770)) && (var_5)))))), (((min((((/* implicit */unsigned int) (short)-23553)), (3594136956U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)116))))) : (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (short)23553)) : (((/* implicit */int) (unsigned short)28721)))))) % (var_2)));
                        }
                        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            arr_24 [i_0 + 2] [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */unsigned int) (~(18406080922459388980ULL)));
                            var_20 += ((((/* implicit */_Bool) 0ULL)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) (short)-7770)) || (((/* implicit */_Bool) (unsigned short)4095))))), (1749477305))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)7770)), (var_2))))))));
                            arr_25 [i_0] [i_1] = (+((+(var_2))));
                            arr_26 [i_0] [i_1] [i_2] [i_5] [19U] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) (unsigned short)0))))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)116)) >= (((((/* implicit */_Bool) (short)23553)) ? (max((1335947050), (((/* implicit */int) (unsigned short)35209)))) : (((/* implicit */int) ((unsigned char) var_4)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [11U] [6ULL] [i_0] [i_0 + 3] = ((/* implicit */unsigned short) ((var_3) << (((((/* implicit */int) var_1)) - (56075)))));
                        arr_30 [i_0] [i_1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(329086483768288394ULL)))) ? (((/* implicit */unsigned long long int) -967819514)) : (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        var_22 ^= min((((/* implicit */unsigned short) (short)-23553)), (var_10));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_0)));
                        var_23 = var_1;
                    }
                    arr_35 [i_2] = var_3;
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (unsigned char i_13 = 2; i_13 < 23; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            arr_45 [i_14] [i_13 - 2] [i_12] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)115)) * (((/* implicit */int) var_11))));
                        }
                        arr_46 [i_0] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((329086483768288394ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) < ((-(max((((/* implicit */unsigned long long int) var_8)), (var_9)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_15 = 2; i_15 < 21; i_15 += 2) 
        {
            arr_49 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (unsigned char)4)))))));
            arr_50 [i_0] [i_15 - 2] [(unsigned char)10] |= ((/* implicit */unsigned short) var_3);
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 1; i_17 < 20; i_17 += 1) 
            {
                arr_55 [i_16] [i_16] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_12))))));
                var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18117657589941263222ULL)) ? (((/* implicit */int) var_7)) : (1984120493)));
                arr_56 [i_16] = ((/* implicit */_Bool) ((unsigned int) var_1));
            }
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_6))));
            arr_57 [i_0 + 3] [14ULL] [i_16] = ((/* implicit */unsigned long long int) (short)-28977);
            var_27 = ((/* implicit */int) (short)23553);
        }
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23553))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((13106114839787680395ULL), (((/* implicit */unsigned long long int) 701143532577791933LL)))))))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_61 [i_18] = ((/* implicit */unsigned int) -7924056127353268246LL);
        arr_62 [1LL] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)30))));
        var_29 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1749477305)) ? (186966571659903333LL) : (((/* implicit */long long int) var_0)))))));
    }
}
