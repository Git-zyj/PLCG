/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167539
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
    var_19 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) -3277982293586226603LL))));
                    var_21 = 3277982293586226601LL;
                    var_22 ^= ((/* implicit */unsigned short) -3277982293586226603LL);
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (-3277982293586226605LL)));
        var_24 *= ((/* implicit */unsigned long long int) -515839609428593256LL);
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)206);
            arr_13 [i_3] [i_4] [i_4] |= ((/* implicit */unsigned int) (signed char)-118);
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 4650119547162308317ULL);
        }
        for (long long int i_5 = 3; i_5 < 14; i_5 += 4) 
        {
            var_25 = ((/* implicit */long long int) 10583040609055572886ULL);
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    arr_22 [i_3] [i_5] [13ULL] = ((/* implicit */unsigned short) 8514916542492209493ULL);
                    arr_23 [i_3] [i_5] = ((/* implicit */signed char) 3277982293586226605LL);
                    arr_24 [(signed char)12] [(signed char)12] [i_5] [6LL] = ((/* implicit */short) 2647122702U);
                }
                var_26 *= ((/* implicit */signed char) 11437507319648919014ULL);
                var_27 = 3679625828U;
            }
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) 3760489754U);
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    arr_31 [i_3] [15U] [(signed char)6] [i_9] [i_5] [i_9] = ((/* implicit */signed char) 3115189274U);
                    var_29 = ((/* implicit */long long int) (unsigned char)51);
                }
            }
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                {
                    arr_36 [i_5] = ((/* implicit */long long int) (short)32762);
                    arr_37 [i_3] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) (short)15);
                    var_30 &= ((/* implicit */long long int) 1185144710U);
                }
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                {
                    arr_42 [i_5] [i_5 + 3] [i_10] [i_12] = ((/* implicit */signed char) 15289244178952836068ULL);
                    var_31 = ((/* implicit */short) (unsigned char)91);
                    var_32 = ((/* implicit */unsigned long long int) 2537108889U);
                }
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) (signed char)-89);
                    arr_46 [i_3] [4LL] [i_10] [i_5] [i_13] [i_13] = ((/* implicit */long long int) 0U);
                }
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    var_34 = ((/* implicit */signed char) (short)-32762);
                    arr_49 [i_3] [i_5 - 1] [i_10] [i_5] = ((/* implicit */unsigned char) (signed char)77);
                    var_35 = 14420182785982763492ULL;
                    var_36 = ((/* implicit */unsigned long long int) -7244921648477006207LL);
                }
                arr_50 [i_3] [i_5] [i_10] [i_5] = ((/* implicit */unsigned long long int) 4294967295U);
                arr_51 [i_5] [i_5] = ((/* implicit */long long int) 1757858406U);
                var_37 = ((/* implicit */long long int) 6372200967020635063ULL);
            }
        }
        arr_52 [i_3] = ((/* implicit */long long int) (short)-5648);
    }
    for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_16 = 4; i_16 < 16; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            arr_64 [i_15] [i_18] [i_15] = ((/* implicit */long long int) (short)32752);
                            arr_65 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */unsigned int) (unsigned short)31870);
                            arr_66 [i_16 + 1] [5LL] [i_16 + 1] [i_18] [i_19] [i_16 + 1] = 665172731515076372LL;
                        }
                        var_38 = ((/* implicit */signed char) 20ULL);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 1; i_20 < 16; i_20 += 3) 
                        {
                            arr_71 [i_20] [i_20 + 1] = ((/* implicit */unsigned short) 15730893765902398181ULL);
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (signed char)-41))));
                        }
                        var_40 = -8329097574283121694LL;
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) 6859971147008152076LL))));
    }
    var_42 = ((/* implicit */long long int) var_10);
}
