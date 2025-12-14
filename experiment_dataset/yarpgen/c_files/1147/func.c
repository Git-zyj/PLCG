/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1147
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3279)) ? (0U) : (((/* implicit */unsigned int) -1945295096))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 262143)))) : (min((((/* implicit */unsigned int) var_6)), (var_1))))), (((/* implicit */unsigned int) var_2)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((short) 2147483638);
        var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))));
        var_13 = var_6;
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) & (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : (arr_0 [i_0 + 1])));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (short)-25513)))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (short)-24931)) : (((/* implicit */int) (unsigned char)61))))))) ^ (var_1)));
    }
    for (int i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_2 - 2] [i_2])) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (unsigned short)65253))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)165)) ? (2147483620) : (((/* implicit */int) (signed char)22))));
    }
    for (int i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) || (((/* implicit */_Bool) arr_9 [i_3]))))) >> (((((var_9) ? (((/* implicit */int) var_6)) : (-1945295093))) + (42)))))));
        var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) min(((short)16256), (((/* implicit */short) (signed char)79))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_5])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
                        {
                            var_22 *= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) var_0)))));
                            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_3] [i_4] [i_5 - 1] [i_6]))));
                        }
                        for (long long int i_8 = 1; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3 + 2] [i_6] [i_8])) ? (((/* implicit */int) arr_7 [i_6] [i_4])) : (((((/* implicit */int) var_2)) & (((/* implicit */int) var_5))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_4] [i_4] [i_5 + 1] [i_8 + 1] [i_8 + 1])) != (((/* implicit */int) arr_20 [i_3] [i_4] [i_5] [i_8 + 1] [i_4])))))));
                        }
                        for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)80)))))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) -37049925916136515LL)) : (12377028961593757348ULL))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_11 [i_3 + 2]))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_11 [i_3])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))));
                        var_30 |= ((/* implicit */int) ((unsigned int) -20));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12828)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned short)14045))))) && (((/* implicit */_Bool) arr_11 [i_3 + 2]))));
                            var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -3715854817442568522LL)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (0U)));
                            arr_34 [i_4] |= ((/* implicit */signed char) ((((arr_21 [i_3] [i_4] [i_5] [i_10] [i_3] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_26 [i_3])) : (((/* implicit */int) arr_18 [i_3 + 2] [i_4] [i_4] [i_4] [i_4] [i_11]))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_3 - 2] [i_5 + 1] [i_5 + 2])) < (((/* implicit */int) arr_16 [i_3 + 2] [i_5 + 1] [i_5 + 2]))));
                        }
                        var_34 *= var_0;
                    }
                    var_35 = ((/* implicit */unsigned short) max((((arr_22 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3]) | (arr_22 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2]))), (min(((+(var_1))), (((/* implicit */unsigned int) var_6))))));
                }
            } 
        } 
        arr_35 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) max((arr_19 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */short) (unsigned char)63))))) & ((~(17))))) | (((/* implicit */int) var_8))));
        var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_27 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]), (arr_27 [i_3] [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3])))) ? (((((unsigned int) arr_22 [i_3] [i_3 + 2] [i_3] [i_3] [i_3] [i_3])) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_3]))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)185)), ((+(((/* implicit */int) arr_23 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3 - 2])))))))));
    }
    var_37 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((2582947381U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (~(-2147483621)))))));
}
