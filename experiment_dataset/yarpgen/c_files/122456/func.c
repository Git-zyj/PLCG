/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122456
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
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned short)53467))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_1 [12LL] [i_0 + 2]))) ^ (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_5 [i_1] [i_0]) >= (((/* implicit */unsigned long long int) 155238956))))), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) ((short) arr_1 [i_1] [i_1]))) ? (((155238938) | (((/* implicit */int) (unsigned short)61077)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)12068)) : (155238956))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12078))) | (var_12)))))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)43)) && (((/* implicit */_Bool) (unsigned short)3689))));
        }
        var_19 = ((/* implicit */long long int) arr_3 [i_0]);
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_20 = ((/* implicit */int) ((arr_2 [i_2] [i_2 + 2]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20312)) ? (1275338536) : (((/* implicit */int) arr_9 [i_2] [i_3] [i_3])))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6562481746284892175LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12068)) || (((/* implicit */_Bool) 155238973))))) : (((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_3] [i_4])) ? (arr_4 [i_4] [i_3] [i_2]) : (var_13)))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    arr_16 [i_2] [i_2] [i_4] [i_2] [i_3] [i_5] = ((/* implicit */short) ((long long int) arr_2 [i_5] [i_2 + 1]));
                    arr_17 [i_2] [i_3] [i_4] [i_5] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)60)) || (((/* implicit */_Bool) arr_11 [i_2] [i_2]))));
                }
            }
            for (unsigned short i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                arr_22 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-44))))) ^ (((long long int) var_12))));
                /* LoopSeq 1 */
                for (long long int i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_22 = ((short) arr_4 [i_7 - 2] [i_2 - 1] [(short)7]);
                        var_23 &= ((/* implicit */unsigned long long int) -155238956);
                        arr_27 [i_6] [i_2] [i_2] = ((/* implicit */signed char) ((arr_13 [i_2] [i_3] [i_2 - 2]) >> (((4095296344509093116LL) - (4095296344509093058LL)))));
                        arr_28 [i_2] [i_7] [i_6] [i_2] = ((((/* implicit */_Bool) (+(arr_23 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 2] [i_7 + 1]))) : (((((/* implicit */long long int) -155238934)) - (-7749907746359563242LL))));
                    }
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 9990835547712491640ULL))) != ((~(arr_12 [i_2] [i_3] [i_6])))));
                        var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                    }
                    arr_31 [i_2] [i_3] [(unsigned short)5] [(unsigned short)5] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-44)) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_3])) ? (-8511998319957753246LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61925))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3610)) / (((/* implicit */int) (unsigned short)61925)))))));
                }
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3] [i_2 - 2])) ? (((var_2) / (6744012467383465800LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53467)) << (((1066204777262685826LL) - (1066204777262685812LL))))))));
                var_27 = ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 2])) ? (((((/* implicit */_Bool) 7541504787595703575LL)) ? (11898095684816510939ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_2])))))));
            }
        }
        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [(unsigned short)13]))) == (arr_20 [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_10)))))));
        arr_35 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2])) > ((~(((/* implicit */int) var_10))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13322)) ? (449612019) : (((/* implicit */int) (signed char)102))));
    }
    /* vectorizable */
    for (long long int i_11 = 2; i_11 < 21; i_11 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_37 [(signed char)22])) ? (var_9) : (((/* implicit */long long int) -789725648)))) >> (((((((/* implicit */unsigned long long int) 5392634442326190482LL)) - (8302811678206943567ULL))) - (15536566837828798519ULL))))))));
        arr_38 [6] [i_11] = ((/* implicit */unsigned long long int) ((8455908525997059998ULL) >= (((/* implicit */unsigned long long int) arr_37 [i_11 + 1]))));
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_31 = ((((arr_41 [10ULL]) | (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12] [i_12] [i_11]))))) - (((/* implicit */long long int) arr_37 [i_11 - 2])));
            var_32 = ((/* implicit */short) ((10143932395502608073ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15354))) > (9623629590512170671ULL)))))));
        }
    }
    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) (signed char)-52)) ? (var_6) : (var_5)))))))));
}
