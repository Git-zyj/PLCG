/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1376
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) (unsigned short)57758);
                    var_15 &= ((/* implicit */short) (unsigned short)7758);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = (short)27468;
                                arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_1 + 1] [i_3] [i_1 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2351155256U)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)57763))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)27468)))))))));
                                arr_18 [i_0] [i_1] [i_1] = (-(((/* implicit */int) (short)-27454)));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (unsigned short)57759);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_24 [i_5] [i_5] = (+(391017595U));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_27 [i_5] [i_6] [i_6] = ((/* implicit */long long int) (unsigned short)35569);
            arr_28 [i_5] [i_6] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)48571))));
            /* LoopSeq 4 */
            for (int i_7 = 2; i_7 < 10; i_7 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)241))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        arr_35 [i_5] [i_6] [i_5] [i_7] [i_8] [i_7] = ((/* implicit */long long int) (~(1957253818)));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)57763)))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        arr_38 [i_7] [i_7] = ((/* implicit */signed char) 200964251U);
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4195))));
                        arr_39 [i_7] = (unsigned short)61358;
                    }
                    arr_40 [i_7] = ((/* implicit */unsigned long long int) 1957253818);
                    var_21 = ((/* implicit */int) (-(12819855481220372947ULL)));
                }
                for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                {
                    arr_44 [i_5] [i_7] [i_5] [i_5] = ((/* implicit */int) 9153469620358813891LL);
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(274877906943ULL))))));
                    var_23 ^= ((/* implicit */short) (-9223372036854775807LL - 1LL));
                }
            }
            for (int i_12 = 2; i_12 < 10; i_12 += 1) /* same iter space */
            {
                var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127)))))));
                arr_48 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
            }
            for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)251))));
                var_26 = ((/* implicit */signed char) (~(-8691095074094275426LL)));
            }
            for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        {
                            arr_59 [i_5] [i_6] [i_14] [i_5] [i_5] [i_16] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (-(-8691095074094275426LL))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_17 = 1; i_17 < 12; i_17 += 2) 
                {
                    arr_62 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7772)))))));
                    arr_63 [i_17] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 846464005U))));
                    var_28 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)-3602))));
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_18 = 3; i_18 < 10; i_18 += 4) 
                {
                    arr_66 [i_5] [i_6] [i_14 - 2] [i_18] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)70))));
                    arr_67 [i_5] [i_14] = ((/* implicit */short) (-(14ULL)));
                    arr_68 [i_18] [i_14 - 2] [i_5] [i_5] = ((/* implicit */_Bool) (+(9153469620358813882LL)));
                }
            }
        }
        for (unsigned char i_19 = 1; i_19 < 12; i_19 += 2) 
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)4198)))))));
            var_31 = (!(((/* implicit */_Bool) 4094003039U)));
        }
        for (short i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)31924))));
            arr_75 [i_5] [i_20] = ((/* implicit */unsigned char) (_Bool)1);
            var_33 = (short)-3602;
        }
    }
    for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_22 = 1; i_22 < 22; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 23; i_23 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (+(5626888592489178662ULL))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_25 = 0; i_25 < 23; i_25 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned short)56662))))));
                            arr_90 [i_21] [i_22] [i_23] [i_22] [i_24] [i_22] [i_25] = ((/* implicit */unsigned char) (-((-(3467375729U)))));
                        }
                        for (signed char i_26 = 0; i_26 < 23; i_26 += 4) 
                        {
                            arr_93 [i_21] [i_21] [i_23] [i_21] [i_26] [i_21] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57764))))))))));
                            arr_94 [i_21] [i_21] [i_23] [i_24] [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)7772))));
                            arr_95 [i_21] [i_21] [i_22 + 1] [i_23] [i_24] [i_26] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12819855481220372971ULL)))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_27 = 0; i_27 < 23; i_27 += 4) 
                    {
                        var_37 |= ((/* implicit */signed char) (-2147483647 - 1));
                        arr_100 [i_21] [i_21] [i_23] [i_27] [i_27] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_101 [i_27] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)4178))));
                        var_38 = ((/* implicit */unsigned short) (-(-2147483635)));
                    }
                    arr_102 [i_21] [i_22] = (!(((/* implicit */_Bool) (~(-2147483635)))));
                }
            } 
        } 
        var_39 += ((/* implicit */short) (unsigned short)992);
        arr_103 [i_21] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)121))))));
        arr_104 [i_21] [i_21] = ((/* implicit */long long int) (unsigned short)59438);
    }
    var_40 = ((/* implicit */signed char) var_10);
}
