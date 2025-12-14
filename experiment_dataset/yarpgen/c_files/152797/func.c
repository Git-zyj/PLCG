/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152797
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */int) var_11)) / (((/* implicit */int) var_11)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-16712))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 = var_7;
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */long long int) var_5);
                        var_14 ^= ((/* implicit */short) (~(((((/* implicit */int) (signed char)64)) + (((/* implicit */int) (signed char)-76))))));
                    }
                    arr_12 [i_0] = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)21099)) / (((/* implicit */int) (short)16711)))), ((~((-(((/* implicit */int) var_11))))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (short)16711))));
                        arr_17 [i_0] [(short)20] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) 2161727821137838080LL))))), ((+(arr_3 [i_0 + 2] [i_0] [i_0])))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((/* implicit */long long int) (short)14470)), (-2161727821137838072LL))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            arr_25 [i_6] [13ULL] [i_5] = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) var_0))))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_3))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_6] [i_5])) && (((/* implicit */_Bool) 125591646823863521ULL)))) && (((/* implicit */_Bool) min((var_1), (((/* implicit */short) arr_13 [i_5] [i_5] [i_5] [i_6] [i_6]))))))))));
            var_19 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)-32767))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_30 [i_5] [i_5] = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_5])) ? (var_8) : (var_4)))))));
                arr_31 [i_5] = ((/* implicit */int) var_4);
            }
        }
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 1; i_9 < 23; i_9 += 2) 
            {
                var_20 *= ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)14470))))), (min((2161727821137838097LL), (((/* implicit */long long int) (signed char)-64))))));
                arr_37 [10LL] [i_8] [i_9] = ((/* implicit */short) var_7);
                var_21 = ((/* implicit */short) (~(((/* implicit */int) min(((short)16725), (((/* implicit */short) (signed char)86)))))));
                arr_38 [i_5] [i_5] [i_9] [i_8] = ((/* implicit */unsigned short) (signed char)86);
            }
            arr_39 [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)63)) >> (((((/* implicit */int) (short)32767)) - (32754)))));
            arr_40 [i_8] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)14470)) || (((/* implicit */_Bool) 2188835626398286804ULL))))), (-150499365)));
            arr_41 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_1);
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_44 [8] [8] [12ULL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (arr_9 [i_5] [(short)7] [10LL] [i_5 - 1] [(short)22] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                for (short i_12 = 3; i_12 < 22; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */int) arr_21 [i_5] [i_11] [i_12])) | ((-(((/* implicit */int) var_0)))));
                            arr_51 [i_5] [i_5] [19ULL] [i_5] [(unsigned char)4] &= ((/* implicit */unsigned long long int) var_2);
                            var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_12 + 3] [i_10] [0U])) ? (((/* implicit */int) var_0)) : (arr_3 [i_12 - 1] [i_11] [i_11]))), (min((-1907480866), (((/* implicit */int) (signed char)-120))))));
                            arr_52 [i_5] [i_12] = ((/* implicit */int) var_11);
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */short) min((max((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) arr_3 [i_5 - 1] [(short)8] [i_5])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_15 [2LL] [18])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2076604148)) ? (((/* implicit */int) (short)16711)) : (((/* implicit */int) (signed char)127))))))))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                {
                    var_25 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)127))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-73))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3172052374691998258ULL)) ? (((18321152426885688077ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-63))))))))));
                }
            } 
        } 
        var_27 = (~(((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) != (2161727821137838097LL)))));
    }
    var_28 = ((/* implicit */short) ((2076604148) | (((/* implicit */int) (signed char)-62))));
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (long long int i_16 = 3; i_16 < 10; i_16 += 3) /* same iter space */
    {
        arr_61 [i_16] [4] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65529))));
        /* LoopSeq 1 */
        for (short i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            arr_65 [12ULL] [i_16] = ((/* implicit */_Bool) (~(-603813829)));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)16718)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (7927721126779154031ULL)));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                for (unsigned int i_19 = 3; i_19 < 11; i_19 += 2) 
                {
                    {
                        arr_71 [i_16] [i_18] [i_16] [i_16] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) 3759507880U)) >= (3999453725863880533LL)))), (max((((/* implicit */long long int) var_3)), (-2748829281514909500LL)))));
                        var_31 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 5448806551182664080LL)) / (5ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27545))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [19ULL] [i_17] [i_16]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-25625), (((/* implicit */short) (!(((/* implicit */_Bool) 6913055242431839913LL))))))))));
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_48 [i_16] [i_16] [(short)22] [i_16])) ? ((-(((/* implicit */int) (short)27292)))) : (((/* implicit */int) (signed char)79))))));
    }
    for (long long int i_20 = 3; i_20 < 10; i_20 += 3) /* same iter space */
    {
        arr_75 [i_20] [(short)5] = ((/* implicit */int) min((8288024230093838280LL), (((/* implicit */long long int) (signed char)13))));
        arr_76 [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) 2269814212194729984ULL)) ? (801791083672071881ULL) : (((/* implicit */unsigned long long int) 1145063956))));
        arr_77 [i_20] = ((/* implicit */signed char) max((max((var_10), (((/* implicit */unsigned long long int) arr_35 [i_20] [(short)12] [i_20 + 1])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
    }
    for (long long int i_21 = 3; i_21 < 10; i_21 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (min((((((var_8) + (arr_78 [i_21]))) + (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(6913055242431839916LL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_6)))))))))));
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (max(((~(var_6))), (((/* implicit */unsigned long long int) arr_32 [i_21] [3] [i_21]))))))));
    }
}
