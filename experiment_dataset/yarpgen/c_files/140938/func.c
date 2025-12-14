/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140938
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
    var_18 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((var_8), ((~(((var_4) / (12152816270115421698ULL)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (short)15);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((-7625571574598471113LL) != (var_7))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_17)))));
                arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_5))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */int) (unsigned char)197)) / ((+(((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), (var_14))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_19 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_3])) + (2147483647))) << (((/* implicit */int) var_11))))), ((~(var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2]))))) * ((~(((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_21 [i_2] [i_2] [i_3] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-125)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_12)))) : (((long long int) var_4))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_20 [i_2] [i_3] [i_4] [i_5])) : (18446744073709551607ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_15 [i_2] [i_4 - 1] [(_Bool)1])));
                                arr_24 [i_2] [i_5 - 1] [(signed char)0] [(signed char)16] [i_2] = ((arr_23 [i_2] [i_3] [i_4] [i_5] [i_6] [i_2] [i_5 - 1]) % (arr_23 [2LL] [i_3] [i_4] [i_5 - 1] [i_5] [i_2] [i_5 - 1]));
                                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [(short)9] [i_5 - 1] [i_5 - 1] [i_2] [(short)9]))));
                                var_22 *= ((((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_4])) + (var_4));
                                var_23 = ((/* implicit */signed char) var_1);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (long long int i_8 = 4; i_8 < 18; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max(((unsigned short)28), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7]))))) != ((~(var_8)))))) : (max((((((/* implicit */_Bool) -6048233805126436693LL)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_17))))))));
                    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_39 [i_10] [i_8] [i_8 + 1] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_31 [i_7] [i_7] [i_7]) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4061140964U)))))))))));
                        var_26 += ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((_Bool) (signed char)14))), (min((((/* implicit */unsigned long long int) var_3)), (arr_26 [i_10] [i_10]))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_17)))))))));
                    }
                    arr_40 [i_7] [i_8 - 2] [i_8] [i_8 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [6LL] [i_8 - 4] [i_9]))));
                }
            } 
        } 
    } 
}
