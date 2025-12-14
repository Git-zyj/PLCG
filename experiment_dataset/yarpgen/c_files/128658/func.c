/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128658
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
    var_11 = ((/* implicit */unsigned long long int) 4294967295U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [i_0 - 1])) + (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_5) : (arr_2 [i_0]))))));
                    var_13 ^= ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)96)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) * (((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-40)), (arr_4 [i_0] [i_1]))))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? (9633958628426836378ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_7)));
                }
                for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned char) (((-(arr_12 [i_0 - 1] [i_0] [i_0 - 1]))) - (((/* implicit */unsigned long long int) ((unsigned int) (signed char)123)))));
                    arr_13 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_1 [(unsigned short)3])) || (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-86)), (3201704845U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)22)))), ((!(((/* implicit */_Bool) (unsigned short)4321)))))))) : (min((max((2097151ULL), (((/* implicit */unsigned long long int) (signed char)-25)))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (signed char)-22)), (arr_17 [0ULL] [i_1] [16U] [i_5] [i_5] [i_6])))));
                                var_17 = ((/* implicit */unsigned int) (signed char)-10);
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_4 [0ULL] [i_0 - 1])), (18079728193376998887ULL))), (((/* implicit */unsigned long long int) arr_4 [18] [i_0 + 1])))))));
                            }
                        } 
                    } 
                    var_19 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_10))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)));
                    arr_20 [i_0] [i_0 + 1] [(unsigned char)13] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) arr_4 [i_0 - 1] [i_0 - 1]))), (((unsigned int) arr_6 [i_0 + 1] [i_0 + 1] [i_4 + 1]))));
                }
                for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
                {
                    arr_23 [i_0] [i_0] [i_7 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7718908413554213606LL)) ? (549454241) : (((/* implicit */int) (unsigned char)215))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_3), (((/* implicit */short) (signed char)3)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) var_6))))) && (((/* implicit */_Bool) (~(var_7)))))))));
                }
                var_21 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_1))));
}
