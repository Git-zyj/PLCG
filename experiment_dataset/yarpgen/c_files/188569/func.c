/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188569
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
    var_15 = ((/* implicit */unsigned long long int) var_9);
    var_16 = ((/* implicit */signed char) var_2);
    var_17 = ((signed char) ((1349539712) * (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((int) arr_2 [i_0 - 1] [i_0 + 1]);
        arr_4 [i_0] = ((((/* implicit */_Bool) (short)7243)) ? (var_6) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */int) 12983864641669447131ULL);
        var_19 |= ((/* implicit */int) var_10);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) max(((~(12983864641669447131ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? ((~(-2147483634))) : (min((-2147483634), (993497990))))))));
        var_20 = ((/* implicit */unsigned short) var_8);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) ((short) 12983864641669447131ULL))) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_22 = ((/* implicit */signed char) arr_6 [i_2]);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (min((((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 2147483638)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (arr_11 [2] [i_2] [i_1]))))) : (arr_6 [i_2]))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((max((((/* implicit */long long int) -621335196)), (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */long long int) arr_6 [i_1])) : (-1LL))))), (((/* implicit */long long int) -2147483634)))))));
                        var_25 = ((/* implicit */unsigned long long int) (-(arr_12 [i_1] [i_3] [i_4])));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1467920382)) ? (arr_11 [i_4 + 1] [i_3 - 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 - 1] [i_1] [i_4 + 1] [i_4 + 1] [i_1] [i_3 - 2])))))) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_1] [i_4 + 1] [i_4 + 1] [i_1] [i_3 - 2])) : (((int) -29883022))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_3 - 2] [i_3] [i_3 - 2] [i_4 + 1] [i_4] [i_4 + 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24788)) ? (33488896) : (((/* implicit */int) arr_15 [i_3 + 3] [i_3] [i_4 - 1] [i_4 - 1] [i_3 + 3] [i_4 + 1])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_5 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((5462879432040104501ULL), (((/* implicit */unsigned long long int) 8191U))))) ? (((/* implicit */long long int) ((int) -1349539713))) : (0LL)));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */unsigned int) ((int) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (4582373844129750661ULL))))) : (arr_14 [i_1])));
                            arr_21 [i_2] [i_2] [i_2] [i_3] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -234773649)) ? (-1589979298) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min(((-(var_6))), (((/* implicit */long long int) arr_18 [i_1] [i_2] [i_3]))))) : (((((/* implicit */_Bool) arr_18 [i_3 + 2] [i_3 + 2] [i_3])) ? (arr_17 [i_3 - 3] [i_4] [i_5] [i_3] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_28 *= ((/* implicit */unsigned int) var_13);
                            var_29 ^= ((/* implicit */_Bool) (+(((var_0) % (((/* implicit */unsigned long long int) var_9))))));
                            arr_25 [i_3] [i_2] [i_2] [i_2] [9ULL] [(signed char)8] = ((/* implicit */unsigned short) (signed char)-116);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((unsigned int) -711860837));
                            var_31 ^= ((/* implicit */unsigned short) 12093811492695188656ULL);
                            arr_28 [i_7] [i_2] [i_3] [i_4 + 1] [i_7] &= (-(((/* implicit */int) (short)-32766)));
                            var_32 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_3 + 3] [i_1] [i_1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3 + 3] [i_1] [i_1] [i_1])) : (arr_16 [i_1])))) : (((((/* implicit */unsigned long long int) arr_16 [i_4 + 1])) & (var_0)))));
                        }
                    }
                } 
            } 
            arr_29 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(-2147483634)))))) ? (((/* implicit */long long int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1])) : (((min((((/* implicit */long long int) var_9)), (var_6))) & (((/* implicit */long long int) max((4294967294U), (var_14))))))));
        }
        var_33 *= ((/* implicit */unsigned int) (-(((int) 18446744073709551615ULL))));
    }
}
