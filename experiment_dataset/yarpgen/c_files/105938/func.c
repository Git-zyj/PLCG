/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105938
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_4)), (17941710674917310173ULL)))));
                var_11 = ((/* implicit */int) max((var_11), ((-(((/* implicit */int) var_6))))));
                var_12 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_0 [i_1 + 1] [i_0]), (arr_3 [i_0] [13LL])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)96)))), (((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1 - 3])))));
                arr_5 [i_1 - 2] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) & (arr_2 [i_1 + 1] [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) max((-1125948165966496733LL), (((((/* implicit */_Bool) 1125948165966496732LL)) ? (var_8) : (var_3)))))) ? (((((/* implicit */_Bool) (+(var_1)))) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))) : (var_3)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            {
                arr_12 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) -1125948165966496725LL))) ? (((long long int) var_5)) : (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1]))) : (-1467243826453024396LL))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)89))) : (35993612646875136LL)))) ? (((/* implicit */long long int) 964225216)) : ((-(arr_11 [i_3] [i_3])))))));
                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)64)) ? (1821931061U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) ? (((arr_11 [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) (short)-16071))))) : (min((((var_3) ^ (var_1))), (((/* implicit */long long int) (signed char)25))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((9624476221093259811ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((long long int) (signed char)-8)))))) ? (((unsigned long long int) (~(var_8)))) : (((/* implicit */unsigned long long int) min((-1051268313), (min((((/* implicit */int) arr_6 [i_3])), (1997278401)))))))))));
                    arr_15 [(_Bool)1] [9LL] [i_3] = ((/* implicit */unsigned short) -1125948165966496758LL);
                    arr_16 [i_3] = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_6 [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) arr_21 [i_2] [i_2 - 2])) ? (-1125948165966496733LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_2 - 1]))))))));
                                arr_22 [i_4] [i_4] &= ((/* implicit */short) (((~(7))) - (((/* implicit */int) ((short) arr_7 [i_3 - 2])))));
                                arr_23 [16] [16] [(signed char)6] [(signed char)0] [i_4] &= ((/* implicit */short) var_5);
                                var_17 = ((/* implicit */signed char) arr_19 [i_5 + 1] [(signed char)11] [i_5 - 1] [i_3 - 2]);
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [(signed char)12] [17LL] [i_2])) ? (((/* implicit */long long int) -17)) : (var_3)))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (short)16383))))) / (((arr_11 [i_2] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [(_Bool)1] [(_Bool)1])))))));
                }
            }
        } 
    } 
}
