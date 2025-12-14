/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106547
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)96), (((/* implicit */signed char) arr_10 [i_2] [i_1 - 1]))))) ? ((-(arr_5 [i_0] [i_2] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)19))))) ? (arr_0 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))))))));
                        var_18 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_10 [i_2] [i_1 + 2]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-106))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-286775294) : (((/* implicit */int) (short)15360))))))));
        var_20 = ((/* implicit */short) (signed char)86);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */int) 13645752303626220017ULL);
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 - 1]))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_9 [i_4] [(signed char)8] [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_6] [i_5] [i_4]))))) : (((((/* implicit */_Bool) arr_12 [i_6] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (0ULL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (short i_8 = 2; i_8 < 15; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 3; i_9 < 15; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            {
                                arr_33 [i_8] [i_10] = ((/* implicit */unsigned short) (~(arr_23 [i_4 + 1] [i_8 - 1] [i_9 - 3])));
                                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140737488355327ULL)) ? (((/* implicit */int) (unsigned short)28507)) : (((/* implicit */int) (unsigned short)50335))));
                            }
                        } 
                    } 
                    arr_34 [i_4] [i_7] [(unsigned short)4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-17842)) : (((/* implicit */int) arr_4 [i_7] [i_7]))))));
                }
            } 
        } 
    }
    for (short i_11 = 2; i_11 < 19; i_11 += 3) 
    {
        var_24 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)19])) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (short)30726))))) | (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))))))), ((-(arr_9 [i_11 + 1] [i_11 + 3] [i_11 - 1] [i_11 + 1])))));
        arr_38 [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) (short)17216))));
        var_25 -= ((/* implicit */unsigned long long int) arr_5 [i_11] [i_11] [i_11]);
    }
    var_26 = ((/* implicit */unsigned int) (signed char)100);
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (signed char)-77)) ? (-286775284) : (((/* implicit */int) (unsigned short)25356)))))))));
    var_28 = ((/* implicit */unsigned long long int) (((!((_Bool)0))) ? ((-(((/* implicit */int) (unsigned char)3)))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) ((short) var_5))) - (12873)))))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            {
                arr_45 [(_Bool)1] = ((/* implicit */long long int) (-(((8729406294426777138ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))))));
                var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) max((var_7), (((/* implicit */short) var_3)))))))), (min((((((/* implicit */_Bool) 9717337779282774464ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (var_9))), ((+(0LL)))))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-113))))))) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_4 [(short)19] [i_13])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)92), (((/* implicit */signed char) var_13)))))))))))));
                arr_46 [8ULL] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (-(var_11)))), (max((((/* implicit */unsigned long long int) arr_41 [i_13])), (arr_29 [i_12] [i_12])))))));
            }
        } 
    } 
}
