/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143004
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) 2903508589793019358LL);
        var_11 *= ((/* implicit */signed char) ((((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_12 = max((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_2 [24U] [i_1]))))))), (arr_2 [2U] [2U]));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3057600725U)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1] [i_2]))))) : (min((6456650129204656677ULL), (((/* implicit */unsigned long long int) 1237366571U))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((arr_8 [i_4] [i_1] [i_1] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1] [i_3])) || (((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_1] [i_4]))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */long long int) arr_4 [i_3])) : (2903508589793019358LL)))) ? (((long long int) arr_4 [i_2])) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (arr_4 [i_3])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_7 + 1])) ? ((~(((/* implicit */int) (short)16384)))) : (arr_12 [24] [(signed char)16])));
                            var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-68)) ? (626733563U) : (((/* implicit */unsigned int) arr_4 [i_1])))), (((/* implicit */unsigned int) (!(((_Bool) (signed char)127)))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_17 [i_2] [i_2] [14U] [i_1] [23U]))))));
                            var_19 -= ((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_2]);
                            arr_21 [(short)13] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */signed char) max((((var_2) ? (((((/* implicit */_Bool) 2903508589793019383LL)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_2)))))), (((/* implicit */int) arr_20 [i_7 - 1] [2ULL] [i_7 - 1] [(_Bool)1] [i_1]))));
                        }
                    } 
                } 
                arr_22 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2903508589793019358LL)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (short)2183))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_3]))) : (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_3]) : (arr_7 [i_3])))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_28 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (signed char)26);
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_1] [i_1] [(short)20] [i_1] [i_1] [i_8])))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)0)) : (1778007781)))) ? (((/* implicit */long long int) (~(arr_3 [i_2])))) : (1485812134276566760LL))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) var_2)), (arr_8 [i_3] [i_1] [i_1] [i_1]))));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 24; i_10 += 4) 
            {
                arr_31 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_8))));
            }
        }
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), ((~(8576296465340220917LL))))))));
    var_24 = ((/* implicit */unsigned int) ((16ULL) >> (((/* implicit */int) (_Bool)1))));
}
