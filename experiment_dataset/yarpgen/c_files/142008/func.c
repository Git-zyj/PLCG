/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142008
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
    var_18 &= (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)36)) + (((/* implicit */int) var_15))))), (var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_2 [i_1]))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) == (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (363070407226627211ULL))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) < ((~(((((/* implicit */_Bool) (short)-28142)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)21))))))));
                    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned short)64342))))) : (((/* implicit */int) ((short) 0ULL))))) * (((/* implicit */int) (signed char)34))));
                    var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) ((signed char) var_6))) : (-1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [6U] [i_4] [i_0] [i_4] = ((/* implicit */int) var_10);
                                var_23 = ((/* implicit */short) arr_0 [i_4] [2U]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)976))) : (1946274266U)));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_5 [i_1] [i_1] [i_5])))));
                        var_26 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_5])) ? (((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_5] [i_1] [i_0 - 2] [i_5])) : (((/* implicit */int) (unsigned char)246)))) / (((/* implicit */int) (unsigned char)246))));
                        var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_1]))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 4) 
                        {
                            arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) != (((/* implicit */int) arr_20 [i_0 - 1] [i_1] [20U] [i_7] [i_8] [i_8 - 2]))));
                            arr_24 [i_0] [i_0] [0] [i_7 + 2] [i_0] [i_7 - 1] [i_7 + 1] = ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_20 [i_0 + 1] [i_1] [i_7] [i_7 - 2] [i_1] [i_8 + 2]))));
                        }
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((short) var_6)))));
                    }
                    arr_25 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (arr_15 [i_0] [i_0] [(unsigned short)1] [i_0]) : (((((/* implicit */_Bool) (short)-1506)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (signed char)0))))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0])))) : (-1271749754)));
                }
                for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    arr_29 [i_0] = ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_9]);
                    arr_30 [(unsigned short)13] [i_0] [i_0 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_13 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 2])))));
                    arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_9])), (var_7)))) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (arr_26 [i_0 + 3] [i_1] [i_9] [i_0])));
                }
            }
        } 
    } 
    var_30 *= ((/* implicit */signed char) var_16);
}
