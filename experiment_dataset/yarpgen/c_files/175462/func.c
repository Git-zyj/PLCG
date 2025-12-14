/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175462
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
    var_16 = ((/* implicit */long long int) (unsigned char)98);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) var_14);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) - (1)))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)255));
            var_18 = ((/* implicit */unsigned char) ((arr_1 [i_1 + 1]) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)9))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (unsigned char)235);
                arr_12 [6U] [i_0] [6U] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)3)) ? (var_12) : (((/* implicit */unsigned long long int) 2260388944U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_19 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                var_20 += ((/* implicit */unsigned long long int) arr_13 [i_0] [5U] [i_3]);
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64336))) : (16078276923144441738ULL)));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            arr_18 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16255143400883299217ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_0]))) : (23ULL)));
            var_22 += ((/* implicit */unsigned int) ((unsigned long long int) 13598022403964555946ULL));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */short) (_Bool)0);
            arr_23 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11))) : (arr_8 [i_5] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39320))) : (var_1)));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)90)) >> (0ULL)));
        }
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                var_24 = ((/* implicit */short) var_8);
                var_25 += ((/* implicit */_Bool) (+(0ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)45654)) >> (((((var_3) << (((arr_2 [i_0] [i_0] [9ULL]) - (10787163404797477976ULL))))) - (2489052432726753270ULL))))))));
                    arr_34 [i_0] [i_8] = ((/* implicit */unsigned long long int) -8307544656059547827LL);
                    var_27 = ((/* implicit */unsigned short) (~(4294967295U)));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)27)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3100))) | (12594747013366370121ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) / (var_6))))));
                    var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_0] [i_0] [i_0]))));
                }
            }
            var_30 = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_0] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54337)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((unsigned short) -9088542316156675755LL));
                var_32 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (short)14153)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (var_11))));
                arr_38 [i_0] [i_6] [i_0] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_6)) > (0ULL)));
            }
            for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (((unsigned long long int) (short)-8502))));
                            var_34 = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                arr_49 [i_10] [i_10] [i_10 + 2] = ((/* implicit */unsigned short) (~(((unsigned int) var_12))));
            }
            for (short i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                var_35 = ((/* implicit */_Bool) (-(4154090592U)));
                var_36 = ((/* implicit */unsigned char) arr_26 [(unsigned char)9] [i_6] [(short)3]);
                var_37 = ((/* implicit */unsigned char) ((_Bool) 16712659853272769272ULL));
            }
        }
        arr_54 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)175))))) : (var_14)));
        var_38 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)41)))));
        arr_55 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((5341969280861747789ULL) - (5341969280861747776ULL)))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            {
                var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [i_14] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((0ULL) ^ (((/* implicit */unsigned long long int) var_14)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_13))))))))) : (((unsigned int) 8937403119871946909ULL)))))));
                arr_63 [i_14] [(unsigned char)8] [i_14] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (18446744073709551591ULL))), (((/* implicit */unsigned long long int) (unsigned short)60230))));
            }
        } 
    } 
}
