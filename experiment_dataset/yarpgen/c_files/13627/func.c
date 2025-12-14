/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13627
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3] [2LL])))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((((((/* implicit */_Bool) 893772774U)) ? (9223372036854775794LL) : (((/* implicit */long long int) 780023844)))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (59))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 4] [i_1 + 4] [i_1 + 3]))) : ((~(-6162083495626665087LL))))))));
                    arr_9 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 9223372036854775794LL)) ? (-57803042942773868LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 3] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (min((8927135500027493128ULL), (((/* implicit */unsigned long long int) (unsigned short)2046)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))));
                }
                arr_10 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1] [i_1])) ? (4484381456929717326LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))))) - (((((((/* implicit */_Bool) 226744550U)) ? (((/* implicit */int) (unsigned short)63484)) : (((/* implicit */int) (signed char)108)))) - (((/* implicit */int) (unsigned short)63484))))));
                arr_11 [i_1] [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1 + 4] [i_2] [i_2]);
                var_21 = ((/* implicit */_Bool) max((var_21), ((_Bool)1)));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_12 [i_1 + 3]) : (((/* implicit */unsigned int) -1135620124))))) && (((/* implicit */_Bool) 1023LL))))));
                    arr_16 [i_1 + 2] [i_1 + 2] [i_1 + 2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1] [i_1 + 4])), (226744550U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1 + 4])) || (((/* implicit */_Bool) 9223372036854775784LL))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1 + 4] [i_1 + 4])) ? (((/* implicit */int) (unsigned short)2046)) : (((/* implicit */int) (unsigned short)5217))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((arr_13 [i_1 + 3] [i_1 + 3]) % (((/* implicit */unsigned long long int) -57803042942773859LL)))) > (((/* implicit */unsigned long long int) -57803042942773859LL)))))) < (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))) > (arr_12 [i_1])))))))));
                    var_23 = ((/* implicit */int) (unsigned char)240);
                }
                for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_1] = ((/* implicit */long long int) ((arr_12 [i_5 - 3]) / (arr_12 [i_5 + 1])));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [6ULL] [i_1 + 3] [i_5 + 1] [i_1 + 3]))) % (((((/* implicit */_Bool) arr_17 [i_6])) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (arr_3 [i_1 + 4] [i_5])));
                            arr_27 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775794LL)) ? (arr_13 [i_5] [i_7]) : (((/* implicit */unsigned long long int) 7182025490794036033LL))))) ? (-57803042942773868LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_5 - 3] [i_1] [i_1 - 1] [i_1] [i_1])))));
                        }
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            arr_31 [i_8] = ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_5 - 2] [i_5 - 2] [i_5 - 2]))) & (6252334609643820020LL));
                            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9223372036854775793LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_24 [i_8] [i_6] [9U] [(short)17] [9U]) : (((/* implicit */int) arr_23 [2ULL] [8U] [i_2] [i_5 - 1] [i_2] [i_2] [i_2]))));
                            var_27 = ((/* implicit */unsigned int) (signed char)65);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_18 [i_5 - 2] [i_8] [10] [i_8])) + (arr_30 [i_2] [i_2] [i_5] [i_5 - 1] [i_1 + 3]))))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */int) ((((min((((/* implicit */long long int) (+(arr_24 [i_1] [i_1] [i_1] [i_9] [i_9])))), (((arr_29 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [(unsigned short)17] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [13] [i_2] [i_1] [i_1]))) : (-9223372036854775778LL))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_9])) ? (arr_24 [i_1] [i_1] [i_1] [i_1] [i_9]) : (((/* implicit */int) (unsigned short)39880))))) ? (max((arr_13 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_2] [i_5] [i_2])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_1] [(_Bool)1] [i_5] [(unsigned char)9] [i_5 + 1] [i_5] [i_1]))))))) - (8089622602254686898ULL)))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((((((/* implicit */_Bool) arr_32 [i_1] [i_1 + 3] [i_1] [i_1 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_33 [i_9] [i_5] [(unsigned char)16] [i_1] [i_1]), (((/* implicit */short) (_Bool)1)))))) : (9223372036854775761LL))) > (min((max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) arr_2 [i_9])))), (((/* implicit */long long int) arr_25 [(unsigned char)11] [i_1 + 3] [i_1 + 3] [i_1 + 4]))))))));
                        var_31 -= ((/* implicit */signed char) (short)-12214);
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((1617818441U) ^ ((((_Bool)1) ? (arr_32 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))))))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [(signed char)0] [i_1] [i_5 + 1])) ? (((/* implicit */unsigned int) 1429469021)) : (3072580721U))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [12U] [i_5 + 1] [i_5 + 1])) ? (arr_18 [i_5] [i_5] [i_5 - 2] [14LL]) : (9223372036854775793LL)));
                        var_35 -= ((/* implicit */unsigned long long int) ((_Bool) ((signed char) (unsigned short)34931)));
                        var_36 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_5 - 2]))));
                    }
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((unsigned short) min((((((/* implicit */unsigned long long int) arr_4 [i_1])) & (4067577970910222925ULL))), (((/* implicit */unsigned long long int) arr_35 [i_5 - 2] [i_2] [i_5] [i_2]))))))));
                }
            }
        } 
    } 
}
