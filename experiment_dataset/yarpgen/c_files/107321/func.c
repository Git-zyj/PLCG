/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107321
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)25))))))) : (((/* implicit */int) ((_Bool) ((5528523219081689508ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 569542890)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11651))))))) : (((/* implicit */int) (_Bool)0))));
    var_15 = ((/* implicit */long long int) (unsigned short)53885);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) 4294967295U)));
            arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)-45)) - (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) 1529748681U)) ? (((6926808920125039220LL) / (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) 3704342275U))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 5U))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((_Bool) (!(((/* implicit */_Bool) 4294967295U))))) ? (((/* implicit */int) (unsigned char)255)) : (((((5528523219081689508ULL) == (((/* implicit */unsigned long long int) 4294967295U)))) ? (2147483647) : (((/* implicit */int) ((unsigned char) var_8)))))));
            var_18 -= ((((/* implicit */_Bool) (unsigned char)63)) ? (10877976692389019144ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)32767))) ? (((int) (_Bool)0)) : ((-(((/* implicit */int) (unsigned short)22347))))))));
        }
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9750104583166196980ULL)) ? (((/* implicit */int) (short)-2505)) : (((/* implicit */int) (unsigned short)39081))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (2455159483U) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */short) -6926808920125039218LL);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (131071U)))) ? (arr_8 [i_3] [5ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1]))) / (var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3228)) ? (1901582617U) : (2332601228U)))) : (((unsigned long long int) ((((/* implicit */_Bool) (short)23695)) ? (arr_2 [(short)8]) : (((/* implicit */unsigned int) 2046731523)))))));
        arr_11 [i_3] = ((/* implicit */unsigned char) arr_5 [i_3] [(_Bool)1] [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(13386243472814778486ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -2363615282934903023LL)) | (35184372080640ULL)));
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_22 &= ((/* implicit */unsigned int) (unsigned char)127);
        /* LoopSeq 2 */
        for (int i_6 = 1; i_6 < 8; i_6 += 3) 
        {
            var_23 = ((/* implicit */short) ((unsigned int) ((18304563442294812551ULL) + (((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 3; i_9 < 8; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) (unsigned char)97);
                            arr_28 [0] [0] [0] [(unsigned short)2] [i_9] [i_7] [0] &= ((/* implicit */signed char) ((unsigned char) ((signed char) ((((/* implicit */unsigned long long int) 1991967869)) / (arr_9 [i_9 + 2])))));
                        }
                        arr_29 [i_7] [i_6] [i_5] [1ULL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13155596402161037704ULL)) ? (-1523373602) : (((/* implicit */int) (unsigned short)44430))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41283)) << (((((((/* implicit */unsigned long long int) arr_19 [i_6] [i_8])) | (14910539610479290310ULL))) - (14910539611582427100ULL)))))) == (var_4))))));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
            {
                arr_35 [i_5] [i_5] [i_5] [i_11] = ((/* implicit */unsigned char) 2179572274U);
                var_26 = ((/* implicit */unsigned int) ((short) ((unsigned char) (signed char)1)));
                arr_36 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)(-32767 - 1))))) : (23ULL)));
            }
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
            {
                var_27 = (short)(-32767 - 1);
                arr_40 [i_5] = ((/* implicit */_Bool) 2218414272U);
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    {
                        var_28 += ((/* implicit */signed char) arr_12 [i_5] [i_10]);
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_10] [i_14 + 2] [i_14 + 1] [i_14 + 1] [i_14 + 2]))) ^ ((-(672602862U))))))))));
                        arr_47 [i_5] [(_Bool)1] [i_5] [7] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)64)) ? (((((/* implicit */int) (unsigned char)124)) & (((/* implicit */int) (unsigned char)132)))) : (((((/* implicit */_Bool) 2076553024U)) ? (((/* implicit */int) (unsigned char)87)) : (arr_14 [i_5] [i_14]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_52 [i_5] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((short)-2505), (((/* implicit */short) (unsigned char)7))))) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))));
                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) 302640348)) : (arr_39 [i_5]))) >= (min((arr_39 [i_5]), (arr_39 [i_5])))));
            }
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                arr_55 [i_10] [i_10] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */unsigned long long int) 134217727U)) : (((unsigned long long int) 2479296464U))));
                arr_56 [i_5] [i_10] [i_10] [i_16] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_10] [i_10] [2] [(unsigned char)8])) ? (((/* implicit */int) var_2)) : ((((_Bool)1) ? (((/* implicit */int) arr_32 [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_10] [i_10]))))));
                var_31 ^= ((/* implicit */unsigned int) ((int) (_Bool)1));
                var_32 = ((/* implicit */unsigned char) 4680163628755891653LL);
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    {
                        arr_65 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 922989034)) && ((_Bool)1))))))) ? (((unsigned int) 2371224606U)) : (((unsigned int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))));
                        arr_66 [i_5] [i_17] [i_5] [i_5] [i_19] = ((unsigned long long int) ((((/* implicit */_Bool) 1805401978U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 387745966))));
                        var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_38 [i_5] [i_17] [6ULL] [i_19])) ? (-4680163628755891661LL) : (((/* implicit */long long int) var_12)))))) : (((((/* implicit */_Bool) (short)-23150)) ? (((/* implicit */int) (unsigned char)30)) : (((((/* implicit */_Bool) 2218414272U)) ? (((/* implicit */int) var_10)) : (var_3)))))));
                        arr_67 [i_5] [i_5] [i_18] [8] [i_19] = ((/* implicit */unsigned long long int) 2936725431U);
                    }
                } 
            } 
        } 
        arr_68 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (2076553042U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12900)))))) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned short)7))));
        arr_69 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (12189556297331061186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (1ULL))))))));
    }
}
