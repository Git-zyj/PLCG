/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152579
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 -= ((/* implicit */short) arr_5 [i_1]);
                            var_14 ^= ((/* implicit */signed char) var_6);
                        }
                        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+((~(2988428268U))))))));
                        arr_13 [i_2 + 2] [i_2] [i_0] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(13960439144609129624ULL)))) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_21 [i_0] = ((/* implicit */signed char) max(((((+(85388804786027408LL))) / (((/* implicit */long long int) 2988428268U)))), (arr_11 [i_0] [i_1] [i_2] [i_0] [i_5] [i_6])));
                            arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0] [i_2 + 1] [(short)4] [i_6] [i_6] [i_0]));
                            var_17 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = max((min((arr_4 [i_2 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]), (((/* implicit */short) arr_25 [i_2] [i_2 + 1] [i_7 - 1] [i_7] [i_7 - 1])))), (((/* implicit */short) ((arr_3 [i_2] [i_2 + 1]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [i_5] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_27 [i_7 + 1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_2 + 2] [i_1] [i_2]))));
                            var_18 = ((/* implicit */unsigned int) ((max((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4)))) ^ (((((/* implicit */_Bool) arr_17 [(short)3] [(short)3] [i_0] [i_7 + 1] [i_7] [i_7])) ? (arr_17 [i_2] [i_2] [i_0] [i_5] [i_5] [i_7]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) 2988428268U);
                            var_20 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) 1306539021U)), (((arr_3 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            arr_30 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned int) ((signed char) (short)-19513))), (1306539033U))));
                            var_21 -= ((/* implicit */short) (+(12754072333105999642ULL)));
                            var_22 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), ((~(8969105044372639199ULL)))))));
                        }
                        for (short i_9 = 3; i_9 < 8; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_0] [i_2] [i_5] [i_9] = ((/* implicit */signed char) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_2] [i_5] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16))) : (arr_20 [i_0] [i_0] [i_1] [i_2 + 2] [i_5] [i_9] [i_9]))))))));
                            var_23 *= ((/* implicit */unsigned long long int) (((~(2147483648U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2])) == (((/* implicit */int) arr_23 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2]))))))));
                            arr_35 [i_0] [i_1] [i_1] [i_2] [i_5] [i_9] [i_9] = ((/* implicit */short) 2988428269U);
                        }
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != ((((+(17703287028162590789ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_2] [i_2 + 1] [i_2] [i_2 + 2] [i_2 - 1] [i_5]))) ^ (8785030183515687049ULL))) == (((/* implicit */unsigned long long int) (~(arr_11 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1])))));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                    }
                    arr_37 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 9; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 8; i_11 += 3) 
                        {
                            {
                                arr_43 [i_0] = min((min(((unsigned short)42396), (((/* implicit */unsigned short) ((var_6) == (1306539024U)))))), (var_8));
                                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (short)32767)))));
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)55408);
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) min((arr_10 [i_11] [i_0] [i_10] [i_2] [i_0] [i_0]), ((unsigned short)10127)))) ? (((/* implicit */long long int) min((415027680U), (((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_1] [i_2] [i_10 - 2] [i_11]))))) : (max((((/* implicit */long long int) var_2)), (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_41 [i_11 + 2] [1] [i_2 - 1]), (arr_41 [i_11 - 2] [i_2 + 2] [i_2 + 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 2988428272U)) ? (((/* implicit */int) (short)19522)) : (((/* implicit */int) var_12)))) >> (((/* implicit */int) min((var_2), (var_4))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) 3112924349U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) & (var_11)))));
}
