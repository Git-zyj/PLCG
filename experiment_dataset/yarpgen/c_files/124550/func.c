/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124550
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -4190678440312050264LL)) ? (((/* implicit */int) (unsigned short)37108)) : (((/* implicit */int) var_1))))) & ((+(-5312245761357566624LL)))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_3) : (((/* implicit */unsigned long long int) 1139217391U)))))));
                            }
                            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) var_12)) - (104)))))) ? (((/* implicit */long long int) arr_0 [i_3 + 1])) : (((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */long long int) arr_0 [i_3 + 1])) : (var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_9 [i_0])))));
                            arr_21 [5U] [4] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) : (((((((/* implicit */_Bool) 1139217392U)) || (((/* implicit */_Bool) 3155749904U)))) ? (max((((/* implicit */unsigned long long int) 4294967283U)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1139217391U)) ? (3155749904U) : (4294967267U))))))));
                            arr_22 [i_1] [i_1] [(_Bool)1] [i_6] [i_1] = ((/* implicit */signed char) arr_20 [i_0] [i_1] [i_0] [i_6] [i_5]);
                            var_17 = ((/* implicit */long long int) arr_15 [(_Bool)1] [(_Bool)1] [i_6] [i_6]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_30 [i_8] = ((/* implicit */unsigned short) (~(6U)));
                    var_19 = ((/* implicit */unsigned short) max((max((var_11), (((/* implicit */unsigned long long int) (unsigned char)11)))), (((/* implicit */unsigned long long int) var_6))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) arr_23 [i_7]);
                                var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-17574))) ? (((int) (unsigned char)3)) : (((/* implicit */int) arr_32 [i_7] [i_7] [i_8 + 3] [i_10])))));
                                var_22 = ((/* implicit */unsigned char) var_10);
                                arr_36 [i_7] [i_8] [i_9] = ((/* implicit */int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)75)) ? (arr_33 [i_7] [i_8] [i_8] [i_11]) : (((/* implicit */int) (signed char)-76))))))), (((0LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33755)))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_24 [i_7] [i_9]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) << (((3886610142428010889LL) - (3886610142428010869LL)))))) : (((arr_23 [i_10]) & (((/* implicit */unsigned long long int) arr_33 [i_7] [i_9] [i_8] [i_11]))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_11])) || (((/* implicit */_Bool) (unsigned char)244))))) > (((/* implicit */int) arr_26 [i_8 + 1] [i_8 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 += (unsigned char)11;
}
