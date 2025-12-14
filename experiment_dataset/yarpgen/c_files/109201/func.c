/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109201
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((var_5) / ((~(arr_0 [i_0 - 3] [i_0 - 3])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */int) ((min((arr_8 [i_0 + 1] [i_3 - 3] [i_4 + 2] [i_0]), (arr_8 [i_0 + 2] [i_3 - 2] [i_4 - 1] [i_0]))) / (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1733175135094528717LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                                var_13 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] [(unsigned short)8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 1733175135094528704LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)-27012))))) - (((((/* implicit */_Bool) (short)-15485)) ? (((/* implicit */int) (short)31597)) : (((/* implicit */int) (_Bool)1))))))) : (var_7)));
                        arr_18 [i_5] [i_2] [i_0] [i_0] [(signed char)3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 15923244306022109060ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1733175135094528700LL)))) : ((+(15923244306022109050ULL)))));
                        var_14 -= ((/* implicit */long long int) ((signed char) (_Bool)1));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 2])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_0 [i_1] [i_1])))) / (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_5]))))))) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)138)))), ((-(((/* implicit */int) (unsigned char)124)))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_0 - 4])))))));
                        arr_22 [i_6] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8088))) : (15923244306022109060ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24541))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (1733175135094528683LL)));
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_7] [i_0] [i_0] [i_0] = min(((~(arr_12 [i_0] [i_1] [i_2] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) var_4))))))));
                        arr_28 [i_0] [i_1] [i_1] [(unsigned char)5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((+(2523499767687442569ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (5322859413546642710LL))))))));
                    }
                    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_1] [(_Bool)1] [i_2] [i_0] [12] [i_9] = ((/* implicit */int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_12 [i_0 + 2] [i_2] [i_8] [i_0]), (((/* implicit */long long int) arr_9 [i_0]))))) ? (((((/* implicit */_Bool) 6259097729249334522LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */int) (short)-28782)))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)117)), ((short)27012))))));
                            var_18 = ((/* implicit */unsigned short) -5322859413546642709LL);
                        }
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_19 ^= ((/* implicit */signed char) var_0);
                            var_20 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [4] [i_0 - 3])))) ? (((/* implicit */long long int) min((3218739815U), (((/* implicit */unsigned int) (unsigned char)133))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) : (arr_0 [i_0 + 1] [i_0 - 1])))));
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_34 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 1])), (arr_29 [i_0] [i_0 - 3] [(signed char)16] [i_0] [i_0] [i_0 + 1])))) & (min((arr_7 [i_0] [i_0 + 1] [(signed char)3] [(signed char)3]), (((/* implicit */long long int) (unsigned char)141))))));
                        }
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -5322859413546642692LL)) ? (((/* implicit */unsigned long long int) 4398781234879088285LL)) : (arr_24 [i_0 - 2] [i_0] [i_0 - 4]))) & (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_8] [i_8] [i_8]), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_1))))))))));
                        arr_37 [(signed char)11] [i_1] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) var_9);
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_11))))) : (arr_12 [15LL] [i_0 - 2] [i_0] [i_0])))));
    }
    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)132))))) / (var_8)));
    var_25 = ((/* implicit */unsigned int) var_11);
}
