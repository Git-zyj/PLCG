/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173650
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
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)6205)), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) : ((((_Bool)1) ? (((/* implicit */long long int) -481317592)) : ((-9223372036854775807LL - 1LL))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 3] [(_Bool)1] [i_0 - 3] = ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) -8896237308967450957LL))) <= (((int) var_15)))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))))), (((-8896237308967450979LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))))));
                    var_19 = (+(((((/* implicit */_Bool) (unsigned short)16)) ? (var_9) : (((/* implicit */int) (!(arr_5 [(short)16] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            {
                var_20 = arr_10 [(unsigned short)1];
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((short) min((var_10), (((/* implicit */long long int) min((var_6), ((short)2071)))))));
                                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) ((signed char) -595299316)))), (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (9061813101492057381ULL))) * (((/* implicit */unsigned long long int) ((int) -595299316)))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23519)) ? (((/* implicit */int) (short)12522)) : (((/* implicit */int) (signed char)-123))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_17 [3ULL] [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 2]) : (((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    arr_27 [i_3] [i_3] = ((/* implicit */int) arr_20 [i_8] [i_4] [(signed char)5] [i_8]);
                    var_24 = (!(((/* implicit */_Bool) max((72057594036879360ULL), (((/* implicit */unsigned long long int) var_15))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_25 &= ((/* implicit */int) ((unsigned char) ((long long int) var_2)));
                    arr_31 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5))));
                    var_26 *= ((/* implicit */unsigned char) ((108523144U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16)))));
                }
                for (signed char i_10 = 4; i_10 < 12; i_10 += 4) 
                {
                    var_27 += ((/* implicit */int) (!(((/* implicit */_Bool) 9061813101492057364ULL))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_8)))))) / (((((/* implicit */_Bool) max((72057594036879360ULL), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */_Bool) 63752002)) ? (((/* implicit */int) (unsigned char)122)) : (arr_29 [i_10 + 1] [i_10 + 1]))) : ((((_Bool)1) ? (((/* implicit */int) arr_24 [8] [i_4] [i_4])) : (((/* implicit */int) var_8))))))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) >= (arr_0 [(unsigned char)10])))))) / (var_9))))));
                }
            }
        } 
    } 
}
