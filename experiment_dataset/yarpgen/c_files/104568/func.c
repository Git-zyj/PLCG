/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104568
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
    var_13 = ((/* implicit */int) (+((~(var_7)))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)45180)) : (((/* implicit */int) (_Bool)1))))))) ? (((unsigned int) (-(var_7)))) : (var_0)));
    var_15 = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), ((short)27775)));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (-(arr_0 [i_0] [i_0 - 1])));
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */short) (-(max((arr_5 [i_0] [i_0 - 2] [2U]), (arr_5 [i_0] [i_0 - 1] [i_0])))));
                    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0])), (max((((/* implicit */int) arr_4 [i_1])), (arr_3 [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_10 [(_Bool)1] [i_1 - 2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)4] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [(short)1] [i_0 - 1] [(short)1]))) : (arr_5 [i_1 - 1] [(_Bool)1] [i_0 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_1 + 1])))));
                        var_19 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) arr_9 [i_3] [(unsigned char)12] [(short)1] [i_0 + 2])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_5), (arr_7 [i_0 - 2] [i_0 - 2] [i_2] [i_3])))))), ((~((~(arr_3 [i_2])))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_12 [i_2] [i_0 - 2] [i_0 + 1] [i_0])) ? (arr_5 [i_1 - 1] [i_4] [i_0 + 2]) : (((/* implicit */unsigned int) (~(arr_13 [i_4] [i_2] [i_1 - 2] [i_0])))))), (((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0 + 2] [i_1 - 2] [i_4]))));
                        var_21 = ((/* implicit */short) arr_4 [i_0]);
                        var_22 = arr_2 [i_2];
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_4]) ^ (arr_13 [i_0] [i_1 - 2] [i_0 - 1] [0LL])))) ? (((/* implicit */int) min((arr_8 [i_0] [i_0 - 3] [i_0 + 2] [i_1 - 1] [i_1 + 1]), (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_1 + 1])))) : ((-(((/* implicit */int) max(((short)-27775), (((/* implicit */short) (_Bool)1)))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        arr_16 [(_Bool)0] |= ((/* implicit */unsigned long long int) var_9);
        var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_0 [i_5] [i_5]) : (arr_0 [i_5] [i_5])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_20 [i_6] |= ((arr_13 [i_5] [i_5] [i_5] [i_5]) + (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [(unsigned short)8])));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_5]))))) ? ((-((-(((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [(unsigned short)5] [i_6])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_5] [i_6] [i_5])))))));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)65535)) << (((var_2) + (5424090480882447124LL))))))))));
        }
        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)224))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5]))) & (min((var_1), (((/* implicit */long long int) arr_4 [i_5]))))))) ? (arr_3 [12LL]) : (((/* implicit */int) ((unsigned short) ((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_9]) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                        var_29 *= ((/* implicit */unsigned char) arr_4 [i_5]);
                    }
                } 
            } 
            arr_28 [i_7] [i_7] |= ((/* implicit */signed char) ((short) (-(((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_7] [i_7])) ? (arr_5 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_7] [i_7] [i_5]))))))));
            var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(var_9)))) : ((~(arr_21 [i_5] [i_7])))))));
        }
        var_31 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_11 [i_5])) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (arr_23 [i_5] [i_5] [i_5])))), ((~(var_9))))))));
        arr_29 [i_5] = ((/* implicit */short) (-(arr_24 [2LL] [i_5])));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) var_11)))) : (((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((var_7) % (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
