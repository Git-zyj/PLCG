/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12116
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_4))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) < (-3649114854712608988LL))), (arr_0 [i_0 - 1])));
        var_13 = ((_Bool) 4149592116U);
        var_14 = ((_Bool) (unsigned char)178);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)60480)))) * (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0 - 1])), (1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) min(((short)32767), (((/* implicit */short) (signed char)34)))))))))));
                    var_15 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 6578712115084691329LL)), (18446744073709551615ULL)));
                    var_16 = arr_5 [i_0] [i_0] [i_2 + 1];
                    arr_9 [i_1 + 2] = ((_Bool) ((arr_4 [i_2 - 2] [i_1]) != (((/* implicit */int) ((short) arr_7 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 2; i_4 < 24; i_4 += 2) 
            {
                var_17 = ((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
                arr_15 [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */int) ((((3526057251712444425LL) / (((/* implicit */long long int) arr_13 [i_0] [i_3])))) * (((((/* implicit */_Bool) 14880846034876297528ULL)) ? (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1])) : (arr_11 [i_0] [i_3])))));
                arr_16 [i_0 - 1] [(signed char)23] = ((/* implicit */_Bool) arr_4 [i_4] [i_4 - 2]);
                arr_17 [i_0] [i_3] [i_4] &= ((/* implicit */unsigned int) arr_1 [i_4 + 1]);
                var_18 = ((/* implicit */short) (unsigned char)178);
            }
            var_19 ^= ((/* implicit */int) (-9223372036854775807LL - 1LL));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            arr_29 [i_7] [i_5] [i_6] [i_7] [(short)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [21LL]))) & (arr_6 [i_0] [i_5] [i_5] [i_7])))) : (3565898038833254104ULL)))) ? (((/* implicit */int) (unsigned short)59187)) : (min((622857923), (((/* implicit */int) arr_5 [i_5] [(unsigned short)24] [i_8]))))));
                            arr_30 [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((4088U) % (arr_6 [i_8] [i_7] [i_5] [i_0 - 1]))), (((/* implicit */unsigned int) min((arr_14 [i_0 - 1] [(_Bool)1]), (((/* implicit */int) (unsigned short)65535)))))))), (-4317758175204142824LL)));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (4294963207U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6348))))), (((/* implicit */unsigned int) (signed char)120))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (12378929961835039012ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned short)59187))))))), (((/* implicit */unsigned long long int) arr_33 [i_9] [i_10]))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_22 &= ((/* implicit */int) min(((unsigned short)6348), (((/* implicit */unsigned short) (short)-1))));
                                arr_44 [i_9] [i_11 + 1] [i_11 + 1] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_13 [i_12] [i_13 - 1]), (arr_13 [i_10] [i_13 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9189112271337387908LL)), (536870784ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_11 + 1] [i_11 + 2] [i_13 - 1]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (9223372036854775807LL))))))));
                                var_23 = ((/* implicit */int) arr_2 [i_10] [i_10]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 4; i_14 < 11; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (3119055347905389574LL) : (((/* implicit */long long int) arr_6 [21LL] [21LL] [i_11] [i_14 + 3]))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)24)), (arr_24 [i_9] [i_9] [i_10])))))), ((_Bool)1)))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3394419713U)) ? (((/* implicit */unsigned int) 1745002650)) : (769147523U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 24576U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))) : (1073676288U)));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_9] [i_9]), (((/* implicit */unsigned int) arr_14 [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9] [i_9]))) : (min((arr_13 [i_9] [i_9]), (886164473U)))))))));
    }
    var_28 = (_Bool)1;
}
