/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167863
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
    var_17 = ((/* implicit */short) 9836208956915270301ULL);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0] [i_4]))));
                            arr_11 [i_1] [2ULL] = ((/* implicit */long long int) (((-(-5118514096337160837LL))) <= (9051862698359078532LL)));
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -2871154885115009340LL)) % (9381492298661921441ULL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_18 [i_1] [i_5] [i_5] = ((/* implicit */short) -9051862698359078532LL);
                        arr_19 [i_0] [i_1 + 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        var_20 = ((/* implicit */short) (~(9051862698359078509LL)));
                        arr_20 [i_5] [i_5 - 1] [i_6] = ((unsigned long long int) 9051862698359078515LL);
                    }
                } 
            } 
        }
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((short)-2341), (arr_12 [i_0] [i_0] [2ULL] [i_0])));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) (short)2332);
        var_21 = arr_23 [i_7] [i_7];
        arr_26 [i_7] = ((((/* implicit */_Bool) (short)-24736)) ? (((((((/* implicit */_Bool) (short)21758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30442))) : (12703009867747246449ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1986442539709491890ULL)) ? (9051862698359078532LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29545)))))))) : (max((((/* implicit */unsigned long long int) arr_23 [i_7] [i_7])), (min((2453408190140203927ULL), (11189014401516079242ULL))))));
    }
    for (short i_8 = 2; i_8 < 18; i_8 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21751)) << ((((~(((unsigned long long int) 18165764332584150355ULL)))) - (280979741125401257ULL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_9 = 1; i_9 < 19; i_9 += 1) 
        {
            arr_33 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29552))) % (7925838952357045308ULL)))) ? (((/* implicit */unsigned long long int) ((5127261254504057LL) >> (((((/* implicit */int) (short)32759)) - (32752)))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (17436078963233670421ULL) : (5743734205962305167ULL)))));
            arr_34 [i_8 + 3] |= ((/* implicit */long long int) (~(5743734205962305149ULL)));
        }
        for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
        {
            var_23 += 4110551329672404678ULL;
            arr_37 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-29556))));
        }
        /* LoopNest 2 */
        for (short i_11 = 2; i_11 < 19; i_11 += 2) 
        {
            for (long long int i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        arr_48 [9ULL] [i_12 + 3] = ((/* implicit */unsigned long long int) -7079969095087253549LL);
                        arr_49 [i_12] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (short)29569))));
                        arr_50 [(short)16] [i_8] [i_11 + 2] [i_12] [i_12] [i_13] = ((unsigned long long int) (short)-29555);
                    }
                    arr_51 [12ULL] [i_11 - 2] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)21771))) < (arr_23 [i_8 + 2] [i_11 - 2]))))));
                    arr_52 [i_8] [i_11] [i_12 + 1] = ((/* implicit */short) (-(((((min((-3612878077948313115LL), (((/* implicit */long long int) (short)-4120)))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-31517)) + (31572))) - (55)))))));
                }
            } 
        } 
        arr_53 [i_8] [i_8] = ((/* implicit */short) min((((arr_30 [i_8 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-593))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) 4398046511088LL))), ((~(-9051862698359078529LL))))))));
        arr_54 [i_8] [i_8 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 533537576116724928LL)))))) - (min((((/* implicit */unsigned long long int) ((short) arr_42 [i_8] [i_8]))), (((6094522566004301423ULL) ^ (arr_44 [i_8] [16LL]))))));
    }
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 12703009867747246434ULL))))))));
}
