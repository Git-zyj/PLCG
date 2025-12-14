/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139196
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
    var_13 = ((/* implicit */unsigned char) 144115188075855871ULL);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)8);
        var_15 = ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_16 ^= -915199779546021841LL;
            var_17 = ((/* implicit */long long int) 1062627502458856502ULL);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 17384116571250695113ULL))));
            var_19 = (_Bool)1;
            arr_10 [(unsigned char)6] [i_1 + 2] [i_1] = ((/* implicit */short) 1062627502458856502ULL);
        }
        for (signed char i_3 = 2; i_3 < 18; i_3 += 2) /* same iter space */
        {
            var_20 = 13550540352270418140ULL;
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                var_21 = ((/* implicit */long long int) 0U);
                arr_15 [i_4 + 2] [i_3 - 2] = ((/* implicit */_Bool) 6418208167739562120LL);
            }
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 613005153662428610ULL))));
        }
        for (signed char i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_19 [i_1 + 2] = ((/* implicit */unsigned int) -163290827);
            arr_20 [i_1] = 6418208167739562120LL;
        }
        arr_21 [i_1] = (unsigned char)255;
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 18; i_6 += 2) 
        {
            for (unsigned short i_7 = 4; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 4) 
                    {
                        arr_29 [i_1] [i_6] [i_7] [i_7] [5U] [(unsigned char)14] = ((/* implicit */short) 49823897U);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) (unsigned char)138);
                            arr_32 [i_1] [i_6] [i_7] [i_7] [i_1] [i_8 - 2] [i_9] |= ((/* implicit */unsigned char) (unsigned short)65519);
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (unsigned char)30))));
                            arr_36 [i_1] [i_1] [13ULL] [i_1 + 1] [10LL] [i_6] [i_1 + 1] = ((/* implicit */unsigned char) 4896203721439133500ULL);
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_39 [(unsigned short)5] [(unsigned short)5] [i_6] = ((/* implicit */short) (unsigned short)65519);
                            var_25 = ((/* implicit */unsigned char) 574208952489738240LL);
                        }
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (unsigned short)36417))));
                        var_27 -= ((/* implicit */short) (unsigned short)5);
                    }
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_28 *= ((/* implicit */unsigned short) 6331095338297155552LL);
                        arr_44 [i_6] [i_12] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_29 *= ((/* implicit */unsigned char) (unsigned short)61630);
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_49 [i_1] [i_6] [i_6] [i_7] [(unsigned short)9] [1] = ((/* implicit */unsigned long long int) (unsigned char)138);
                            arr_50 [i_6] [(_Bool)1] [(_Bool)1] [15U] [i_13] [i_14] = ((/* implicit */short) (unsigned short)47562);
                            var_30 = ((/* implicit */unsigned int) (unsigned short)27);
                            var_31 = ((/* implicit */short) -6151733751066803704LL);
                        }
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) (signed char)-122);
                            var_33 = ((/* implicit */unsigned char) (signed char)0);
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (unsigned short)29093))));
                            var_35 = ((/* implicit */short) 4896203721439133475ULL);
                            var_36 *= ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                    for (long long int i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) -8445309328878078762LL);
                        /* LoopSeq 4 */
                        for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                        {
                            arr_59 [i_6] = ((/* implicit */short) (unsigned short)5);
                            var_38 = ((/* implicit */unsigned char) 17384116571250695091ULL);
                        }
                        for (unsigned short i_18 = 3; i_18 < 18; i_18 += 1) 
                        {
                            arr_63 [i_7] [i_7] &= ((/* implicit */_Bool) (signed char)125);
                            arr_64 [i_6] [i_6] = ((/* implicit */short) 4896203721439133471ULL);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            arr_68 [i_1] [i_6] [i_7 - 1] [i_16] [i_6] = (unsigned short)65524;
                            var_39 *= ((/* implicit */short) (unsigned short)13085);
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */long long int) 4294967295U);
                            var_41 = 17ULL;
                            arr_71 [i_7 - 3] [i_7 + 1] [i_6] [i_7 - 4] = 1062627502458856513ULL;
                            var_42 ^= ((/* implicit */unsigned short) -2991064155212183960LL);
                        }
                        arr_72 [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_43 = (signed char)-114;
                    }
                    arr_73 [(short)18] [i_6] [i_6] [(short)18] = ((/* implicit */long long int) 4896203721439133472ULL);
                    var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (unsigned char)220))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            var_45 = ((/* implicit */signed char) (unsigned char)93);
                            var_46 = ((/* implicit */int) (unsigned short)5763);
                            var_47 += ((/* implicit */long long int) -163290801);
                            arr_79 [i_6] [i_21] [i_6] = ((/* implicit */short) (unsigned char)116);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_23 = 1; i_23 < 15; i_23 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (short)32767))));
                            var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) (unsigned char)127))));
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) 13550540352270418140ULL))));
                        }
                        var_51 *= ((/* implicit */unsigned long long int) 163290811);
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_24 = 0; i_24 < 19; i_24 += 1) 
        {
            for (unsigned short i_25 = 0; i_25 < 19; i_25 += 2) 
            {
                for (signed char i_26 = 0; i_26 < 19; i_26 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_27 = 1; i_27 < 17; i_27 += 4) 
                        {
                            var_53 += ((/* implicit */unsigned int) (unsigned char)136);
                            var_54 *= ((/* implicit */unsigned short) 17384116571250695078ULL);
                            arr_94 [i_25] [i_26] [i_1] [i_24] [i_25] &= ((/* implicit */unsigned char) (short)6);
                        }
                        for (unsigned int i_28 = 1; i_28 < 16; i_28 += 1) 
                        {
                            var_55 = ((/* implicit */long long int) 7599512772068982926ULL);
                            arr_97 [i_24] = (_Bool)1;
                        }
                        arr_98 [i_24] [13LL] [i_25] [i_26] = ((/* implicit */unsigned short) 17833738920047122993ULL);
                    }
                } 
            } 
        } 
    }
    var_56 = ((/* implicit */long long int) 464378479U);
}
