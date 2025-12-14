/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168411
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */short) var_5);
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) arr_1 [i_3 + 1]);
                            arr_12 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3 + 4])) && (((/* implicit */_Bool) var_18))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_6))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (arr_11 [i_2] [i_2] [i_3 + 2] [i_3] [i_3]) : (arr_11 [i_0] [i_3] [i_3] [i_3] [i_0])));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 750014594U);
                            arr_16 [i_1] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)11281)))) != (var_17)));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_15)))))));
                        }
                        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            var_24 -= (signed char)-62;
                            var_25 = ((/* implicit */unsigned short) ((((int) arr_14 [i_3 + 3] [i_3 + 4] [i_3 + 3] [i_3 + 3] [i_6 - 1])) != (min(((-(((/* implicit */int) (signed char)61)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))));
                            var_26 = ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_15))) / (-4952766608097231902LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14672339524934843698ULL))))) : (1502235095));
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) ((int) (signed char)67));
                        }
                    }
                    var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (1080863910568919040ULL)))) ? (((var_1) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_10))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_28 = ((/* implicit */int) (((~(max((var_2), (((/* implicit */unsigned long long int) var_3)))))) >> (((((/* implicit */int) (unsigned short)55653)) - (55639)))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))) / (((/* implicit */unsigned long long int) arr_24 [i_0] [i_9 + 3] [i_8 + 4] [i_9 + 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)94)) + (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) (signed char)-64)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] [i_9])) : (((/* implicit */int) var_11))))), ((~(var_13))))))))));
                        var_30 = ((/* implicit */short) (((~(((/* implicit */int) var_4)))) != (((int) ((((/* implicit */_Bool) 2927569486U)) ? (arr_23 [i_0] [i_7] [i_8 - 1] [i_9]) : (331815157U))))));
                        var_31 = ((/* implicit */long long int) var_16);
                        arr_27 [i_7] [i_8] [i_7] = ((/* implicit */short) max((((/* implicit */int) (((~(((/* implicit */int) var_7)))) >= (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */int) var_4)) + (-551290435)))))));
                    }
                } 
            } 
        } 
    }
    var_32 += ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_14))))))));
}
