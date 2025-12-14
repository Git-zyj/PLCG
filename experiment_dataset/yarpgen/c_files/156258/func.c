/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156258
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
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_20 -= ((/* implicit */signed char) min((((long long int) (+(((/* implicit */int) var_17))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_21 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_15)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_3))))));
        arr_3 [(unsigned short)6] [i_0 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_16)))))));
        var_22 |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((var_2) ? (var_4) : (((/* implicit */int) (unsigned char)102))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_3)), (arr_0 [i_0] [i_0]))))))));
        var_23 = (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-65)))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */int) ((signed char) var_14))) : ((~(((/* implicit */int) arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) arr_2 [2LL]);
                                arr_21 [i_4] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) / ((-(arr_17 [i_1] [i_2] [(short)1] [i_1] [i_3] [i_5] [i_4])))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(arr_1 [i_3])))), (min((-8932781250055737053LL), (((/* implicit */long long int) arr_19 [i_1] [2ULL] [i_1] [i_3] [i_3] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))) : (min((((((/* implicit */int) (signed char)9)) / (((/* implicit */int) var_11)))), (((/* implicit */int) var_14))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_9 [i_1] [i_1])))));
        var_28 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) arr_2 [i_1])))))))) / (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_3))))))));
        var_29 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) var_11)) : (arr_16 [i_1]))));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            arr_28 [i_7] [16LL] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_17)) && ((_Bool)1))), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)8)))))) ? (((min((((/* implicit */int) (signed char)7)), (-1325188380))) / (arr_26 [i_7 - 1] [i_7]))) : (((/* implicit */int) var_10))));
            var_30 = ((signed char) ((((/* implicit */_Bool) arr_27 [i_7 + 1] [i_7 - 1])) ? (arr_25 [i_7 + 1] [i_7 - 1]) : (((/* implicit */int) var_1))));
        }
        /* vectorizable */
        for (signed char i_8 = 2; i_8 < 15; i_8 += 1) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((int) (signed char)-27))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_24 [i_8])) ? (arr_27 [i_6] [i_8]) : (((/* implicit */int) var_14)))))))));
            var_32 = ((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) var_9)) ? (11372643155873371332ULL) : (10110817750763901784ULL))));
            arr_33 [i_6] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)21)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))));
        }
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(var_4))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) var_6)) % (arr_25 [i_6] [i_6]))))) : (((/* implicit */int) arr_22 [i_6]))));
    }
    var_34 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)32305)) ? (-1253249172) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)152)) : (2147483647)))))));
    var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_7) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-24)))))))) + ((-(max((((/* implicit */unsigned long long int) (unsigned char)134)), (var_19)))))));
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (((long long int) var_17))));
}
