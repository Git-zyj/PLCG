/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186277
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0))))) ? (((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (short)18))));
    var_12 -= ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((var_1) + (2147483647))) << (((((/* implicit */int) var_2)) - (12321))))) / (((/* implicit */int) arr_3 [i_0]))));
        var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? ((((((_Bool)0) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) var_4)))) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(short)19]))))) ? (((((/* implicit */_Bool) 511)) ? (((/* implicit */int) arr_1 [18ULL] [i_0])) : (((/* implicit */int) arr_0 [12ULL])))) : (arr_2 [(unsigned short)11])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_8 [8] [(_Bool)1] [4ULL] &= ((/* implicit */_Bool) var_8);
            arr_9 [(signed char)7] [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) << (((arr_2 [i_1]) - (1505196176)))))) ? (((((/* implicit */_Bool) 1073741822)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (_Bool)1)))) : ((~(-1073741823))))) : (((((/* implicit */_Bool) arr_2 [(unsigned short)18])) ? (((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)14)))) : (((((/* implicit */int) arr_0 [(unsigned short)2])) * (((/* implicit */int) arr_6 [13ULL] [6ULL] [9U])))))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            arr_14 [(signed char)2] &= ((/* implicit */_Bool) ((unsigned char) arr_13 [i_2 + 1] [0LL] [i_2 - 2]));
            arr_15 [i_0] [17LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) & (((/* implicit */int) (unsigned char)249))))) ? (arr_19 [i_2 - 2] [i_2 - 2] [(short)16] [(unsigned short)14] [18ULL]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [(signed char)12])) / (((/* implicit */int) arr_11 [(unsigned char)14] [6] [(signed char)4])))))));
                        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_0]))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_7 [10] [i_2 - 1] [10]) : (arr_7 [(signed char)2] [i_2 - 1] [(signed char)2]))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20)) ? (3707866496U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_22 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_0] [i_2 - 2] [7ULL]) : (((/* implicit */long long int) arr_13 [19U] [(short)13] [15U]))));
                            var_19 &= ((/* implicit */unsigned short) arr_6 [(unsigned short)9] [(_Bool)1] [(short)6]);
                        }
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            arr_26 [4U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_0 [i_6]))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (min((arr_5 [3U] [(_Bool)1]), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [(unsigned short)14])) : (((/* implicit */int) (unsigned short)33727))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            arr_27 [i_0] [4] [10U] = ((/* implicit */short) max((((arr_21 [i_0] [8] [i_0] [i_0] [16U] [i_0] [(unsigned char)12]) % (((((/* implicit */_Bool) 523247541U)) ? (1707584644) : (((/* implicit */int) (unsigned char)112)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [(signed char)15]) / (((/* implicit */int) var_8))))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_20 += ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 2269234734U)) : (-1LL)))) ? (((((/* implicit */_Bool) 4294967286U)) ? (587100778U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) 1916803993)));
                    var_21 = ((/* implicit */signed char) var_3);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -304278733)) ? (-1LL) : (((/* implicit */long long int) -595391728))));
                    arr_34 [(short)10] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) ((-1890731692) < (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_23 += ((/* implicit */unsigned int) min((((signed char) var_3)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [(unsigned char)6])) || (((366697239) == (((/* implicit */int) (unsigned char)224)))))))));
    }
    var_24 *= ((/* implicit */signed char) min((((var_3) / (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_8))));
}
