/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127714
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((arr_0 [i_0]) + (arr_1 [i_0] [i_0])))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))))), (arr_0 [i_0 - 4])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)256);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max(((~(arr_0 [11]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (-1279327150) : (1279327149)))))) : (((((/* implicit */_Bool) (~(arr_1 [i_0 - 4] [i_0 - 4])))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (arr_1 [i_0] [i_0 + 3]) : (arr_1 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) 287948901175001088LL))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) 1279327149))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) 15546636338222774129ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (arr_5 [i_1] [i_1])))));
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (arr_4 [11] [i_1]))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_24 |= ((/* implicit */_Bool) ((int) max((((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1] [i_1])) : (-5809598373611522168LL))), (((/* implicit */long long int) arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])))));
                    arr_12 [i_2] = ((/* implicit */_Bool) (short)31744);
                    arr_13 [5ULL] [i_2] = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */_Bool) 1279327137)) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (arr_11 [i_2])))), (((((/* implicit */_Bool) arr_5 [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_3]))) : (arr_7 [i_2])))));
                }
            } 
        } 
        var_25 = ((/* implicit */short) (unsigned char)255);
    }
    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(-1279327150)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2])) ? (arr_9 [i_4 - 1] [i_4 - 3] [i_4 + 2] [i_4 + 1]) : (arr_9 [i_4 - 2] [i_4 + 2] [i_4 - 1] [i_4 - 3])))) : (max((((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 2] [13ULL]))) : (arr_5 [i_4 - 2] [i_4 - 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 16855174860491659961ULL)))))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) (-(1099377410048ULL)));
    }
    /* LoopSeq 2 */
    for (int i_5 = 4; i_5 < 9; i_5 += 3) 
    {
        var_27 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)0)), (arr_18 [i_5 + 1])))), (3549940377619034083LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5 - 2])) ? (((/* implicit */unsigned long long int) arr_6 [i_5 - 1])) : (arr_21 [i_5 - 2]))))));
            var_29 = ((/* implicit */long long int) arr_17 [5LL] [i_6]);
            var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19325)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))));
        }
    }
    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */_Bool) arr_7 [i_7]);
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_23 [(unsigned short)12]))));
    }
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)46227)), (var_15)))))) ? (var_18) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (-1279327151))), (((/* implicit */int) var_0))))))))));
}
