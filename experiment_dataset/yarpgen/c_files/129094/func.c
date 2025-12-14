/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129094
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_12 = ((signed char) (signed char)67);
                        var_13 = ((/* implicit */unsigned char) (~(arr_1 [i_1] [i_3 + 1])));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_13 [(short)1] [(short)1] [(short)1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (13575949209326531579ULL) : (((/* implicit */unsigned long long int) 2113478164U))));
                        arr_14 [i_0] [i_0] [i_0] [11ULL] [i_4] [i_4] = ((((/* implicit */_Bool) ((short) arr_8 [1ULL] [1ULL] [i_1] [(signed char)20] [i_4]))) ? ((~(((/* implicit */int) arr_4 [(_Bool)1] [i_2] [i_4])))) : (((((/* implicit */_Bool) ((unsigned long long int) (signed char)67))) ? (arr_12 [(unsigned char)15] [i_0] [(unsigned char)15] [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))));
                    }
                    var_14 -= ((/* implicit */unsigned char) ((max((arr_3 [i_0]), (arr_3 [i_2]))) % (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0])))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2])) ? (arr_1 [6] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), ((~(var_1)))))) ? (min((((/* implicit */unsigned int) ((short) arr_6 [(_Bool)1]))), ((~(var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_10 [1ULL] [i_1] [i_2]) : (arr_10 [i_0] [i_0] [i_0])))))))));
                    var_16 *= ((/* implicit */signed char) arr_3 [i_0]);
                }
                for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    arr_17 [i_0] [i_1] [18U] |= ((((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) max(((signed char)61), ((signed char)71)))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (short)5815)) : (((/* implicit */int) (signed char)-91))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))))));
                    var_17 -= ((/* implicit */short) (!(((_Bool) (-(var_9))))));
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                }
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    var_19 &= ((/* implicit */long long int) arr_18 [8LL] [i_1] [i_1] [(_Bool)1]);
                    var_20 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_6])) ? (6884266458915874732LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [10U] [2U]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 2181489130U)) ? (var_1) : (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_6])))))));
                    var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [(short)12] [i_1] [(short)9])) ? (var_4) : (((/* implicit */int) var_11))))));
                    arr_20 [i_0] [i_6] [14LL] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_6 - 2] [i_6 + 3] [i_6]))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    arr_24 [i_7] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-98)) - (((/* implicit */int) var_6))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_3 [(short)0]))))));
                }
                var_23 = ((/* implicit */_Bool) ((min((max((arr_11 [i_0] [i_0] [i_0] [13] [i_1]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned short)63488))))))) % (((/* implicit */long long int) (((+(((/* implicit */int) (signed char)-115)))) % (((/* implicit */int) (signed char)96)))))));
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)99)))));
}
