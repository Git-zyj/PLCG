/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101161
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), ((((~(arr_1 [i_0] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-114)))))))))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (max((arr_2 [i_0]), (((/* implicit */unsigned int) (signed char)-17))))))) ? (((min((0U), (((/* implicit */unsigned int) (signed char)-27)))) >> (((arr_1 [(signed char)13] [(signed char)13]) + (3656886626567777666LL))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_3)))))))));
        var_12 = ((int) ((((/* implicit */_Bool) (signed char)112)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_2 [(unsigned short)2]))));
        var_14 ^= ((/* implicit */unsigned short) (signed char)-29);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65534))));
        var_15 *= ((/* implicit */unsigned short) arr_4 [i_1]);
        var_16 = ((/* implicit */_Bool) ((unsigned int) min((var_6), (((/* implicit */unsigned int) min((var_7), (var_9)))))));
    }
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        var_17 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [17LL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_2)))))) ? (max((((/* implicit */long long int) var_7)), (arr_6 [i_2 + 2]))) : (((/* implicit */long long int) ((unsigned int) var_3))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-78)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) -230711857458719909LL)))))))) ? (((/* implicit */int) ((unsigned short) (short)-13081))) : (((/* implicit */int) (_Bool)0))));
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_10 [i_5 - 1] [i_5] [i_5 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) var_9))), ((~(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                                arr_20 [i_3] [i_3] [(signed char)16] [i_3] [i_7] [(signed char)16] = ((/* implicit */_Bool) ((((max(((+(((/* implicit */int) arr_10 [i_3] [i_5 - 1] [i_6])))), (((((/* implicit */_Bool) arr_6 [i_7])) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)67)))))) + (2147483647))) >> (((/* implicit */int) arr_4 [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((-(min((((/* implicit */unsigned int) var_5)), (var_8))))) : (var_8)));
    var_22 = ((/* implicit */long long int) var_7);
}
