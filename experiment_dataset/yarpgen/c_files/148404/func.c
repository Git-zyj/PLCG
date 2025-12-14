/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148404
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((long long int) ((int) var_11))))));
    var_14 *= ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_3)))))))));
        var_16 &= max((((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) arr_0 [4LL]))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)43)), (arr_0 [(unsigned short)8])))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_6));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_5 [10] [10] |= ((/* implicit */short) ((((((/* implicit */_Bool) 912746218)) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [(signed char)4]), (((unsigned short) (unsigned short)0))))))));
            var_17 |= ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) var_4)), (arr_4 [i_0] [(unsigned short)3] [i_0]))))));
            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0])))))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            var_19 ^= (+(((/* implicit */int) var_4)));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_11)));
            var_21 = ((var_8) != (((/* implicit */long long int) arr_6 [i_2 - 1] [i_0])));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_1 [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))));
            var_23 = (~(((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_2 - 2])));
        }
        for (int i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            var_25 ^= -5591588394000266341LL;
        }
        for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
        {
            arr_14 [i_0] [i_4] = ((/* implicit */unsigned short) min((arr_3 [i_4 - 1] [i_4 - 1] [i_0]), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_4 - 2] [i_4 - 2] [i_0])))));
            arr_15 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) min((((arr_13 [i_0] [i_4 + 2]) + (arr_13 [i_0] [i_4 + 2]))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0)))))))))) : (((/* implicit */signed char) min((((arr_13 [i_0] [i_4 + 2]) - (arr_13 [i_0] [i_4 + 2]))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0))))))))));
            var_26 *= ((/* implicit */unsigned short) (short)17070);
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) | (((/* implicit */int) var_5))))) ^ (((unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) var_12)), (var_5)))))) : (min(((-(var_8))), (((long long int) var_1)))));
        }
    }
    for (int i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_28 ^= arr_13 [(signed char)2] [i_5 + 3];
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [4LL] [4LL])) ? (((/* implicit */int) arr_8 [10ULL] [10ULL] [i_5])) : (((/* implicit */int) (unsigned short)0))))))))));
            var_30 ^= ((/* implicit */unsigned int) var_4);
        }
        var_31 = ((/* implicit */unsigned long long int) var_11);
        var_32 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)50))))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_33 ^= ((/* implicit */signed char) ((((/* implicit */int) max((arr_10 [i_5] [i_7] [i_5]), (arr_10 [i_7] [i_7] [i_7])))) ^ (((/* implicit */int) ((arr_22 [i_5 + 3] [i_7 + 1]) && (((/* implicit */_Bool) arr_20 [i_5] [i_7] [i_7])))))));
                        arr_30 [i_5] [i_8] [i_5 + 3] = ((/* implicit */unsigned char) var_12);
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_5 + 3] [i_5] [i_5]))))) : (arr_1 [i_5 + 2])))) && (((/* implicit */_Bool) var_11))));
                    }
                } 
            } 
        } 
    }
}
