/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109832
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
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */signed char) (-(min((min((((/* implicit */long long int) var_10)), (var_7))), (var_7)))));
    var_13 = var_3;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((min((722188031), (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [2]))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) (+((~(arr_8 [i_1 + 2] [i_1 - 3] [i_1 - 3])))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_11 [10] [i_2])))) / (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)193))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (short)32762)) - (((/* implicit */int) arr_3 [i_1]))))))))));
                        var_16 -= ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) (unsigned char)201)))))))));
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)128))))) ? (arr_14 [i_0] [0ULL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)63)))))))) && ((!(((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2]))))));
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_8 [i_1] [5ULL] [(unsigned short)5])))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)49))))))) ? ((+(16461907879317906558ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)62))) - (min((var_8), (((/* implicit */int) (_Bool)0)))))))));
                        var_19 -= ((/* implicit */int) max((((/* implicit */unsigned short) (!(((_Bool) (short)2673))))), (arr_21 [i_0] [i_1] [i_0] [i_0])));
                        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_1))));
                        arr_23 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)22664))));
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        arr_32 [i_0] = ((/* implicit */signed char) (unsigned char)111);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_6 - 1] [i_6 + 1] [i_8] [i_8] [i_6 - 1] [i_0])) ? (arr_30 [i_9] [i_6 - 1] [i_8] [i_8] [i_6 + 1] [i_0]) : (((/* implicit */int) arr_27 [i_6 - 1] [i_6 + 1]))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_0] [i_8] [i_7])))))));
                        }
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_34 [i_0] [i_8] [i_6] [2ULL] [(unsigned char)6])))))) ? (((/* implicit */int) (short)-22677)) : (((/* implicit */int) arr_20 [i_0])))))));
                    }
                } 
            } 
            arr_36 [i_0] [i_6] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0]);
            arr_37 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_28 [(unsigned short)6] [i_0] [(unsigned short)6] [i_6])), (min((((/* implicit */long long int) (-(arr_9 [i_0] [i_0] [i_0])))), (var_7)))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            var_23 = ((/* implicit */int) (~(arr_7 [i_0])));
            arr_42 [(signed char)2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_0] [i_0])), (((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (((/* implicit */int) (signed char)104)) : (arr_30 [i_0] [3ULL] [i_0] [i_0] [i_0] [i_0])))));
        }
        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_11] [(unsigned char)7])) >> (((((/* implicit */int) arr_31 [i_11] [i_11] [i_0] [i_0])) - (11606)))))), ((-(var_0)))));
            var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)177)))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))))) > (((((/* implicit */_Bool) var_3)) ? (7963973608773229231LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                var_26 -= ((/* implicit */short) max((((/* implicit */signed char) (!(((1840572588) != (((/* implicit */int) arr_45 [8] [i_0] [8]))))))), ((signed char)-109)));
                arr_47 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (var_0)))), (var_5))) + (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
            }
        }
        var_27 |= ((/* implicit */unsigned int) (-(arr_24 [i_0] [i_0] [i_0])));
    }
    var_28 ^= (signed char)-16;
}
