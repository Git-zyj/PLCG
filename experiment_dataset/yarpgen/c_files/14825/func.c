/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14825
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_5)))))), ((-(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = (((+(((((/* implicit */_Bool) (signed char)3)) ? (-403074649) : (((/* implicit */int) (signed char)-24)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 6709928914990207881ULL))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_4] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_3 - 1] [i_1 - 1]))));
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_0 [i_3] [i_3 + 2])), (arr_12 [5ULL] [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_3] [i_3 - 1])))), (((((-345814917) > (((/* implicit */int) (_Bool)1)))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_3] [i_4])), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */int) arr_5 [i_3] [i_2])))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_1 [i_0])))));
                /* LoopNest 3 */
                for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (signed char)12);
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29150))) + (((unsigned int) ((((/* implicit */int) (short)31365)) % (345814931))))));
                    var_23 = ((/* implicit */unsigned short) min((((max((((/* implicit */unsigned long long int) (signed char)64)), (arr_23 [i_1] [i_1] [i_1]))) + (((/* implicit */unsigned long long int) max((-1155668063), (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) var_0))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) ((((var_15) > (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_10]))))) ? (((int) (signed char)-3)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))))) : (((arr_7 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                                var_25 = ((/* implicit */short) (~((-(((/* implicit */int) ((arr_29 [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) var_4)))))))));
                                arr_30 [i_0] [i_1 - 1] [i_1] [i_9] [i_10] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((((/* implicit */_Bool) var_8)) ? (arr_29 [i_10] [i_9] [i_8] [i_0]) : (11736815158719343724ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_10]))))));
                                arr_31 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1890899349)) / (18446744073709551608ULL)))) ? (((arr_27 [i_1] [i_1 + 1] [i_1 + 1] [(unsigned short)0] [i_1 + 1]) + (arr_27 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_27 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_9)) : (arr_27 [i_1] [i_1 + 1] [i_1 - 1] [9] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (arr_4 [i_0]))));
                    arr_32 [i_0] [i_1] [8ULL] = ((/* implicit */int) (+((+(max((6709928914990207881ULL), (((/* implicit */unsigned long long int) -4336096175350953785LL))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_11] [i_12]);
                        var_28 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)14))));
                        arr_40 [i_1] = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_11)) : (var_14))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])) ? (var_12) : (-2061890926))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_0] [i_0])) : (((/* implicit */int) (short)-18100)))) : (((/* implicit */int) (signed char)3)))))));
                    }
                    for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_1] [i_13])) ? (((/* implicit */int) (short)(-32767 - 1))) : (-345814917))))) ? (((((/* implicit */_Bool) (short)32767)) ? (345814924) : (((/* implicit */int) (signed char)2)))) : (((/* implicit */int) var_10))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((134217727), (((/* implicit */int) (!(((/* implicit */_Bool) (short)9498)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_41 [i_1 - 1])) ? (((((/* implicit */_Bool) (short)-18124)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))))) : (min((2305843009213693951LL), (((/* implicit */long long int) (short)-18647))))))));
                        var_32 = ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)-87))))) ? (((/* implicit */unsigned long long int) ((int) min((var_12), (((/* implicit */int) (unsigned short)63)))))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_8))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)2))))))));
                        var_33 = ((/* implicit */long long int) ((int) ((unsigned long long int) 5673174158509674631LL)));
                        var_34 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_36 [(unsigned short)8] [(signed char)6] [i_1] [i_0])) ? (((/* implicit */int) arr_36 [i_0] [i_1 + 1] [i_11] [i_11])) : (((/* implicit */int) arr_19 [i_0] [(_Bool)0] [(_Bool)0] [i_13])))), (((/* implicit */int) (_Bool)0))));
                    }
                    var_35 -= ((/* implicit */_Bool) var_12);
                }
            }
        } 
    } 
}
