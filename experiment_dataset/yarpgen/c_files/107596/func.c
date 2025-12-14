/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107596
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
    var_11 *= ((/* implicit */unsigned int) ((var_0) * (((/* implicit */unsigned long long int) min((var_9), ((-(((/* implicit */int) (signed char)0)))))))));
    var_12 = ((/* implicit */unsigned short) ((_Bool) -2729145508054793780LL));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4153867481135507781LL)), (18446744073709551598ULL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)14675))) > (arr_7 [i_0] [i_0 - 1] [i_0 + 1] [11LL] [i_0])))) : (((int) (unsigned short)5340))));
                                arr_12 [i_0] [i_2] [i_2] [1U] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-107))))) % (min((((/* implicit */long long int) (signed char)-80)), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2659892424320906424LL)))))));
                                arr_13 [5U] [i_2] [(unsigned short)4] [i_2] = ((/* implicit */short) ((unsigned short) var_2));
                                var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) - (((unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (14644776458117143406ULL)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [10] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_15 = (-(((((/* implicit */_Bool) arr_17 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_2 - 1] [i_2 - 1])))));
                                var_16 |= ((/* implicit */unsigned short) arr_8 [i_6] [i_5] [i_5] [i_2 + 2] [i_1] [i_1] [i_0 + 1]);
                                arr_20 [i_1] [i_5] [i_2] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_15 [i_2 + 1] [i_0 - 1] [i_2] [i_0 - 1])))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    arr_24 [i_0 - 2] [(unsigned short)15] [i_7] = ((/* implicit */long long int) max((var_9), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_7 - 1])) ? (((/* implicit */int) ((unsigned char) arr_10 [i_7] [i_7] [i_7] [i_7] [i_0] [7LL]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_7] [i_7] [i_7] [i_7] [i_1]))))))));
                    var_17 ^= ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (signed char i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) arr_10 [i_8] [i_8 + 1] [i_8] [i_8 + 2] [i_8] [i_8]);
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_19 [i_8 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned short) arr_0 [(unsigned char)3] [i_8]);
                    arr_27 [i_8] = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_1] [i_1]);
                    var_21 = ((/* implicit */int) var_4);
                }
                for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [3] [i_1] [i_9] [i_9])))), (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_19 [i_0] [17LL] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (15181831706538615662ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))))));
                    var_23 += ((/* implicit */long long int) 18ULL);
                }
                arr_31 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 1]))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_0 - 2])))))));
            }
        } 
    } 
}
