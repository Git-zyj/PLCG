/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171070
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [(short)7] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)119)) * (((/* implicit */int) (short)32158))));
                                arr_13 [(unsigned char)11] [i_1] [i_2] [(short)22] [(_Bool)1] [i_1] [i_2] = ((/* implicit */int) (((~(16383ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))) | (1U))) != (((/* implicit */unsigned int) -162500313))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [(signed char)16] = ((/* implicit */unsigned long long int) ((((int) (+(var_7)))) + ((-(((/* implicit */int) ((_Bool) var_6)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_5] [i_2] [10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))), (((/* implicit */unsigned long long int) ((_Bool) var_9)))))));
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (~((-(((/* implicit */int) ((((/* implicit */int) var_11)) == (arr_11 [7ULL] [i_6] [23ULL] [i_2] [i_0] [i_0]))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_5] [(unsigned short)11] [1] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((unsigned int) 0U))));
                                var_14 ^= (((+((~(((/* implicit */int) arr_3 [i_6] [(unsigned char)18])))))) | (((/* implicit */int) var_12)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)-1)))))))), (((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (short)32158))))) ? (max((897499128533257232LL), (((/* implicit */long long int) arr_0 [i_10])))) : (((/* implicit */long long int) (~(var_7))))))));
                            arr_32 [i_7] [i_10 + 1] [i_9] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) arr_3 [i_10 + 2] [i_10 - 1])))));
                            arr_33 [i_7] [i_9] [i_8] [i_7] = ((/* implicit */short) (((~(((((/* implicit */int) var_0)) & (var_7))))) != ((+(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_15 = (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_35 [i_8] [i_8] [i_7]))))))));
                                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_12] [i_12 - 1] [(_Bool)1] [(signed char)8])))) < (((/* implicit */int) var_1))));
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) ? (arr_28 [(_Bool)1] [i_12 + 1] [i_12 + 1] [i_12 + 1]) : (arr_28 [i_12] [i_12] [(short)12] [i_12 + 1]))))));
                                arr_41 [i_7] [i_12] [i_8] [i_8] [2LL] [i_7] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_36 [i_11 + 2] [i_11 + 2] [i_12 - 1] [i_13 - 1])))) >> (((var_3) ? ((~(var_7))) : (((/* implicit */int) arr_38 [i_12 + 1] [i_12 + 1] [i_13 + 2] [i_11 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            arr_47 [0] [i_7] [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) max(((-(((long long int) 18446744073709551614ULL)))), (((/* implicit */long long int) (-(((/* implicit */int) (!(var_3)))))))));
                            arr_48 [11LL] [11LL] [i_7] [i_15] = ((/* implicit */long long int) (~((~(0)))));
                            var_18 ^= ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                            var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_10 [(_Bool)1] [i_8] [i_8] [i_15] [i_14]), (((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_28 [i_7] [i_7] [(signed char)18] [3ULL])))))))));
                            arr_49 [i_7] [i_7] [(_Bool)1] [i_7] = ((((/* implicit */_Bool) arr_37 [(short)12] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((long long int) ((unsigned long long int) 8589934591ULL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
}
