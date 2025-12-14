/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182810
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
    var_10 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    var_11 = var_0;
    var_12 = ((/* implicit */short) min((((/* implicit */int) ((short) var_1))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_5 [i_1] [(short)2])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_15 ^= ((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (min((((/* implicit */int) var_5)), (-31834023)))))), ((((((+(var_4))) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) arr_10 [i_3])))) - (45)))))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (short)7494)) : (((/* implicit */int) var_6))))))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_2 + 1])))), (((/* implicit */int) (signed char)65)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            arr_15 [4LL] [9ULL] [9ULL] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_6);
                            var_17 = ((/* implicit */int) var_4);
                        }
                        var_18 &= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2]))) : (3636904893U)))) ? (((/* implicit */int) arr_6 [(signed char)8] [i_1] [i_2 + 1])) : (((/* implicit */int) var_9))))));
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) ((signed char) 134217727U)))));
                        var_20 &= ((/* implicit */int) var_8);
                    }
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(5534641411739360395LL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (+(3329767784U)))) : (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_17 [(short)1] [i_2 + 1] [(short)1] [(signed char)3]))) + (-1LL)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 8; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] = ((/* implicit */long long int) ((short) -442110612315684007LL));
                                var_22 -= ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_34 [i_0] [i_1] [i_8] [(unsigned char)0] [i_9] [i_10] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (unsigned char)169))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)16397)) + (((/* implicit */int) (signed char)-4)))) / (((/* implicit */int) ((signed char) 791988488U))))))));
                                arr_35 [i_9] [i_1] [i_8] [i_9] [i_10] [i_9] &= ((/* implicit */long long int) (~(min((73349186U), (((/* implicit */unsigned int) (short)-11127))))));
                                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                                var_24 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9] [i_10]))) % (var_4))), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
