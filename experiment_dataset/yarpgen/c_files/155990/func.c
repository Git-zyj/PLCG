/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155990
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)112))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    var_16 = ((/* implicit */signed char) (_Bool)1);
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (915733285)))), (5U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-31100), (((/* implicit */short) arr_1 [i_0]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-27133)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((min((((/* implicit */long long int) arr_8 [i_3] [i_3 - 1] [i_3] [i_3] [i_0])), (9223372036854775781LL))) <= (((/* implicit */long long int) (-2147483647 - 1))))))));
                        arr_10 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -2147483634);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_18 = (~(arr_6 [i_0 + 1] [i_0] [i_0]));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 7792642900543467478ULL))));
                        arr_14 [i_0 + 2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2 - 1]))));
                    }
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_20 ^= ((/* implicit */unsigned short) 3896705640U);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) 7);
                            arr_26 [i_0] [i_0] [i_5] [i_1] [i_7] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1])), (12554703036027511972ULL)))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_6] [i_7]))))))) < ((-((+(((/* implicit */int) (unsigned short)65280))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(arr_13 [i_0 + 2] [i_1] [i_5] [i_6] [i_8]))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-20388)) + (2147483647))) >> (((-1631883049) + (1631883072))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)30646)) : (((/* implicit */int) arr_16 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) > (((1182646943U) - (((/* implicit */unsigned int) -1352300334)))))))) : (((2247627634044459089LL) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                            arr_32 [i_0 + 3] [i_1] [i_5] [i_0] [i_9] = ((/* implicit */_Bool) 17709822558790965806ULL);
                        }
                        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((_Bool)1) ? (2104858541837603527ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))))))));
                            arr_35 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)32766)), (((((/* implicit */_Bool) ((4024440907U) - (2974364281U)))) ? (((/* implicit */int) (unsigned short)50213)) : ((((_Bool)0) ? (((/* implicit */int) (short)-17314)) : (-893147608)))))));
                        }
                        var_25 |= ((/* implicit */signed char) min((-5790420082371101649LL), (((/* implicit */long long int) 1347416166U))));
                    }
                    arr_36 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_5])) ^ (((/* implicit */int) (short)17423)))) << (((arr_13 [i_0 + 2] [i_0 + 2] [i_5] [i_0] [i_5]) - (16635117399744313237ULL))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-112)) % (arr_33 [i_0 + 1] [i_0] [i_1] [i_0] [i_0 - 1]))))));
                    arr_39 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((short) 1048574U));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) (unsigned char)77);
    var_28 = ((/* implicit */unsigned int) (short)32655);
    var_29 = ((/* implicit */_Bool) 5466977482299522858ULL);
}
