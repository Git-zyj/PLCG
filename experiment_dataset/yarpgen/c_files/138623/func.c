/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138623
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_1]))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned int) ((unsigned int) (unsigned char)183))))));
                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
            }
            /* LoopSeq 2 */
            for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((603382718867456839ULL) + (var_1))))));
                var_16 |= ((/* implicit */signed char) var_4);
            }
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [6LL]))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((int) arr_8 [i_4] [i_4] [i_1] [i_4])))));
                var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) * (((/* implicit */int) arr_3 [i_0] [i_1])))) ^ (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                var_20 -= ((((/* implicit */_Bool) 17843361354842094776ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_1));
            }
        }
        /* LoopSeq 2 */
        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_5 - 3])) <= (-1360998251)));
            arr_16 [i_5] [i_5] [0U] |= ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_0] [i_5] [i_5 - 1] [i_0]));
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_9))))) ? (arr_4 [i_5 - 2] [(_Bool)1] [i_5 - 3] [i_5 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-65))))));
            var_23 += ((/* implicit */int) ((((/* implicit */int) (unsigned short)46762)) > (((/* implicit */int) (unsigned char)184))));
            var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [4LL] [i_0] [(unsigned char)10]))))) ^ (arr_4 [i_0] [i_5 - 1] [i_5] [i_0])));
        }
        for (unsigned int i_6 = 4; i_6 < 8; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 9; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_0 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0]))))))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_9] [i_8] [0U] [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)5])) | (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_12 [6U] [i_7] [10] [i_9])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107)))))));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */int) ((unsigned char) var_2));
                var_29 -= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_7] [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [(unsigned char)8])))))) || (((/* implicit */_Bool) var_7))));
            }
            for (unsigned char i_10 = 3; i_10 < 9; i_10 += 3) 
            {
                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [(unsigned short)0]))) | (((long long int) var_6))));
                var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4553165784887235991LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (arr_20 [(unsigned char)2] [i_10] [i_10])));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [10])) : (((/* implicit */int) ((_Bool) var_2)))));
            }
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_2))));
            var_34 -= ((/* implicit */long long int) ((unsigned int) arr_18 [10U] [(unsigned char)2] [10U]));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((arr_1 [i_11]) < (((/* implicit */int) var_9)))))));
                        var_36 = ((((/* implicit */_Bool) arr_19 [i_11] [i_11])) ? (var_10) : (((/* implicit */long long int) arr_30 [i_6 - 4] [i_6] [(signed char)6])));
                    }
                } 
            } 
        }
    }
    var_37 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_2) >> (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_5)) - (21492)))))))));
    var_38 |= ((/* implicit */unsigned int) ((short) 12));
}
