/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121438
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
    var_12 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) + (2147483647))) >> ((((-(((/* implicit */int) ((unsigned short) var_1))))) + (421)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [(short)8] = ((/* implicit */unsigned char) var_1);
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_7 [i_3 - 4] [i_3 - 3] [i_3 + 2] [i_3 + 3]))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_4);
                                var_14 += ((/* implicit */unsigned char) (signed char)49);
                                arr_15 [i_0] [i_1] [i_2] [(short)7] [(short)17] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_3 + 1] [i_3 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_3 + 1] [i_3 + 2]))) : (arr_13 [i_4] [i_4] [i_3 + 2] [i_3 - 1])))) ? ((-(((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 4] [i_3 + 2])))) : ((~(((/* implicit */int) (_Bool)1))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_11)));
                                var_16 = ((/* implicit */signed char) min((var_16), (arr_4 [i_1] [i_1])));
                                var_17 = ((((/* implicit */unsigned long long int) arr_13 [i_3 - 4] [i_3 - 3] [i_3 + 3] [i_3 + 2])) >= (((((/* implicit */_Bool) var_8)) ? (7396436054295865255ULL) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_3] [i_5])))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                            {
                                var_18 = (+(((/* implicit */int) arr_9 [i_0] [17LL] [i_0])));
                                arr_21 [i_0] [i_1] [i_0] [(unsigned short)0] [12ULL] [i_3] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_3 + 1])) ? (((/* implicit */int) arr_17 [i_3 - 1])) : (((/* implicit */int) arr_17 [i_3 + 2]))));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) (_Bool)1);
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-29885)))))));
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (short)-11116)) : (((/* implicit */int) (short)15278))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1713785135)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned short)2] [(unsigned short)2]))))), (((long long int) 13920297046242119213ULL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */_Bool) (signed char)-62)) ? (11203149283851459871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32736))))))), (((/* implicit */unsigned long long int) 4294967295U))));
}
