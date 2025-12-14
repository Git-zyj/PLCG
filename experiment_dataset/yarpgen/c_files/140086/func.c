/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140086
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
    var_11 = ((/* implicit */_Bool) 18446744073709551600ULL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1])))))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [4LL] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)5] [(unsigned short)5])), (-498833663))));
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_1] [i_2 + 1] = ((/* implicit */_Bool) min((498833663), (((/* implicit */int) ((var_3) && (arr_10 [i_2 - 1]))))));
                        }
                        var_13 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_3])) : (((var_1) / (arr_8 [i_1] [(_Bool)1] [(_Bool)1] [i_1])))));
                    }
                } 
            } 
        } 
        arr_16 [(_Bool)1] [i_0] &= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 + 1])) ? (((/* implicit */int) arr_6 [i_5 + 1] [(_Bool)0] [i_5])) : (((/* implicit */int) arr_18 [i_5 - 2]))));
                arr_23 [i_0] [i_5 - 1] [i_6] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5])));
            }
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_14 *= ((/* implicit */_Bool) arr_3 [i_7]);
                arr_26 [i_0] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 926159524)) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_5 + 1] [i_7])) : (498833662)));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3201487570185630039ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_0] [i_5 - 1] [i_0] [i_0] [i_5]))));
                arr_27 [(signed char)2] [(signed char)2] = ((/* implicit */long long int) arr_2 [(unsigned short)10]);
                /* LoopNest 2 */
                for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_34 [6] [6] [6] [i_7] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5 + 1]))));
                            arr_35 [2LL] [i_8] [i_9] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_5 + 1] [i_8 + 1]));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 1048575))));
                        }
                    } 
                } 
            }
            arr_36 [i_0] = (!(var_9));
            var_17 ^= ((/* implicit */int) (_Bool)1);
        }
    }
    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= ((-(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_10)) : (498833634)))))));
}
