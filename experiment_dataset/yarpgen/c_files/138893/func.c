/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138893
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_6))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_6)))))) ? (((/* implicit */int) ((unsigned short) max((-6937493191428724970LL), (((/* implicit */long long int) 9U)))))) : (var_3)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [(short)5] = ((/* implicit */unsigned int) 840729101);
                var_11 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_1 + 1])))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [(unsigned short)2] |= ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                            var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_2] [i_0])) : (((/* implicit */int) arr_9 [(signed char)10] [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? (6937493191428724970LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775803LL)))))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) <= (arr_2 [(signed char)7] [i_1] [(signed char)7]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned int i_5 = 4; i_5 < 9; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((2337227408U) ^ (((((/* implicit */_Bool) 9223372036854775793LL)) ? (35212908U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [(unsigned short)2])))))))) | (max((max((arr_16 [(signed char)5] [i_4] [5U] [i_4] [0ULL] [i_0]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) arr_8 [8] [i_1 - 1]))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                            {
                                var_13 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_0] [i_1])), (arr_9 [i_6] [i_5] [(unsigned char)7] [i_1] [i_0 + 1] [4LL])))))) ? (((max((9223372036854775803LL), (12LL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) ^ (var_7))) - (1661179753U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_5 + 2])))));
                                arr_24 [i_5] [i_4] [2LL] = ((/* implicit */unsigned int) ((max((max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [i_4] [(unsigned short)1] [(signed char)4])), (var_8))), (((/* implicit */long long int) ((short) var_8))))) - (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65531)) <= (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) 8368209498977429118ULL)) ? (((/* implicit */int) arr_6 [i_0] [0ULL] [i_4])) : (((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) ((signed char) (unsigned char)88))))))));
                                arr_25 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45924)) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -31LL))))) + ((-(((/* implicit */int) arr_22 [1] [0LL] [7U]))))))) : (max((16LL), (((/* implicit */long long int) var_9))))));
                                arr_26 [i_6] [7ULL] [7ULL] [i_6] [i_6] = ((((/* implicit */_Bool) max((((((/* implicit */long long int) 4259754374U)) - (arr_7 [i_4] [6]))), (((/* implicit */long long int) (unsigned char)255))))) ? (((arr_2 [i_0] [i_1] [i_0]) - (max((9ULL), (((/* implicit */unsigned long long int) arr_9 [i_6] [i_5] [i_4] [i_1] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65522)) != (((/* implicit */int) (short)30181)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) var_2);
    var_15 ^= (signed char)-50;
    var_16 &= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54)))))) - (((var_0) ? (((/* implicit */unsigned long long int) 0U)) : (var_5))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9U)) || (((/* implicit */_Bool) var_8)))))) : ((+(var_2)))))));
}
