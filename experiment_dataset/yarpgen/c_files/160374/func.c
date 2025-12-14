/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160374
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_3), (var_9))))))), ((~(9182361927721813404ULL))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            arr_15 [2] [2] [i_0] [2] [i_1] &= ((/* implicit */int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((unsigned int) (unsigned short)19437)))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                            arr_16 [i_0] [0LL] [i_4] [i_3] [i_0] = ((/* implicit */unsigned char) arr_14 [i_4 + 3] [i_1] [i_3 + 1] [i_3 - 3] [i_4] [i_4]);
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) -828669652))));
                            arr_17 [i_4] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) + (((/* implicit */int) arr_1 [i_0])))))));
                        }
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_1] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(short)5] [(short)5])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_3 [i_3 - 3])))) : (((/* implicit */int) var_1))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_14 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                            var_16 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) arr_13 [i_3 + 1] [(unsigned char)12] [i_3] [i_3] [i_1] [2]))), (((var_5) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 3] [i_3] [i_1] [i_3])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) 2147483647)), (var_5))))) ? (((/* implicit */int) arr_12 [i_0] [(signed char)5] [i_0] [i_0] [(signed char)1] [i_0] [i_0])) : (((/* implicit */int) ((short) max((var_2), (((/* implicit */unsigned int) var_6))))))));
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [(unsigned short)7] [i_1]);
                            var_20 ^= ((/* implicit */unsigned short) arr_8 [i_0]);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_24 [(unsigned short)8] [i_0] [i_0] [i_0] [i_2] [i_0] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_27 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) var_12);
                            var_22 &= ((/* implicit */unsigned char) ((arr_18 [i_7] [i_1] [i_7] [i_3 - 2] [i_7]) - (arr_18 [i_0] [i_1] [i_2] [i_3 + 1] [(signed char)6])));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) max((var_7), (((/* implicit */short) arr_4 [i_3 + 1])))))));
                            arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) (_Bool)0))), (min((arr_25 [i_3 + 1]), (((/* implicit */long long int) var_1))))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4116164349552160511LL)) ? (((/* implicit */unsigned int) -828669625)) : (417735234U)));
                        }
                    }
                    arr_32 [i_2] [i_2] [i_2] [i_2] |= ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((unsigned int) (signed char)10)) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) == ((-9223372036854775807LL - 1LL))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), ((-(arr_37 [i_9] [i_12])))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((unsigned int) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_41 [i_9] [i_9])))))));
        var_27 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)8))));
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_28 += ((/* implicit */unsigned int) (+(((int) var_8))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_9] [i_9] [i_9])))))));
            arr_47 [i_9] = ((((/* implicit */int) arr_33 [8])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_9] [i_9]))))));
        }
    }
    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((var_12), (((/* implicit */long long int) arr_33 [i_14])))) : (((/* implicit */long long int) (+(828669654))))))));
        arr_51 [i_14] [(_Bool)1] = ((/* implicit */signed char) ((min((var_0), (var_1))) ? (max((((((/* implicit */_Bool) (signed char)-14)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) arr_39 [i_14] [i_14] [i_14])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) max((var_0), (var_3)))), (((signed char) (short)721))))))));
    }
}
