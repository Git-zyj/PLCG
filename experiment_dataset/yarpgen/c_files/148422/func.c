/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148422
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) var_13)), (arr_4 [i_0]))))) ? (min((((/* implicit */int) ((signed char) var_3))), (max((((/* implicit */int) arr_1 [i_0] [i_0])), (var_6))))) : (var_6)));
                            arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)4] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0]) : (var_1))) : (((/* implicit */int) ((_Bool) var_6)))))) : (arr_9 [(unsigned short)4] [i_0])));
                var_18 += ((signed char) ((((/* implicit */_Bool) 2036581880)) ? (((/* implicit */long long int) arr_2 [(unsigned short)2])) : (4622262299775641808LL)));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))) : (min((var_14), (((/* implicit */unsigned long long int) var_10))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14))))), (((/* implicit */unsigned long long int) ((signed char) ((unsigned short) var_8))))));
    /* LoopSeq 4 */
    for (int i_4 = 2; i_4 < 8; i_4 += 3) 
    {
        var_21 *= ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((signed char) arr_14 [i_4] [i_4]))))), (min((max((var_5), (((/* implicit */int) arr_14 [i_4] [i_4])))), (((int) var_1))))));
        var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) arr_13 [i_4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_4 + 3]))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1)))), (((arr_13 [i_4 - 1]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_4 - 2]))))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_5]))) ? ((+(((/* implicit */int) var_7)))) : (var_6))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [14] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_16 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_16 [i_5]))))))));
        var_26 = arr_16 [i_5];
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((unsigned long long int) (unsigned char)224)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [0ULL] [0ULL]))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (var_1))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [(unsigned char)0] [(signed char)8])) : (((/* implicit */int) var_7)))))))));
        var_29 = ((/* implicit */int) ((((_Bool) (unsigned char)114)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [16ULL] [i_6])) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_15 [(signed char)8] [(signed char)8]))))) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) : (-4622262299775641805LL)))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_30 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_0)))));
        var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) -4622262299775641805LL)) : (3880166920887581747ULL))));
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [(_Bool)1]))));
    }
}
