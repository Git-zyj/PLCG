/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114841
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(short)10] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))) : (min((((/* implicit */long long int) arr_1 [i_1 + 1] [i_1 + 1])), (var_9)))));
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3053925830U)) ? (-202443600) : (arr_4 [i_0] [i_1 + 1])))) ? (((17LL) << (((1146270040U) - (1146270020U))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (min((((/* implicit */long long int) 0U)), (-1LL))) : (min((var_3), (((/* implicit */long long int) var_8))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) arr_9 [i_1] [i_4] [18LL] [i_1 + 1] [i_4 - 1]);
                                var_17 = ((/* implicit */unsigned int) (-((~((-(((/* implicit */int) arr_3 [i_4] [i_2] [6U]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_5])) ? (arr_15 [i_1 + 1] [i_1] [i_5]) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [(unsigned short)18] [i_5]))) : (823652971)));
                            arr_18 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) -443418841)) ? (((/* implicit */int) (_Bool)1)) : (14));
                            var_19 &= ((/* implicit */_Bool) ((unsigned long long int) arr_9 [0LL] [i_5] [(unsigned short)12] [i_5] [i_1 + 1]));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [(signed char)7] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_32 [i_8] [i_8] [i_8] [(signed char)4] = ((/* implicit */int) (short)-17618);
                            var_20 += (!(((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_9])));
                            arr_33 [i_7] [i_8] [7] [i_10] = ((/* implicit */signed char) ((unsigned short) (((~(arr_24 [i_7] [i_8] [i_7]))) < (((((/* implicit */_Bool) 2LL)) ? (((/* implicit */int) (unsigned char)63)) : (-4))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 13; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_39 [i_8] [(unsigned short)4] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [0LL] [i_8] [i_7])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_25 [i_8] [i_8] [i_11]), (((/* implicit */unsigned long long int) -189707703157309068LL))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_8] [i_11] [i_8]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (14863677335705461477ULL))))))));
                            arr_40 [(short)12] [i_8] [i_12] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) 4260158024U)) ^ (9223372036854775793LL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11 - 2] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1]))) | (arr_17 [i_11 + 2] [i_11 - 1] [i_11 - 1] [(unsigned short)10]))) : (((/* implicit */unsigned long long int) ((arr_11 [i_7] [2U] [i_11 + 2] [i_12] [i_11] [i_12]) & (arr_11 [(_Bool)1] [i_8] [i_8] [i_8] [i_11] [i_12]))))));
                            arr_41 [i_7] [i_8] [i_11 - 2] [i_12] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((arr_35 [i_7] [i_7]), (((/* implicit */unsigned long long int) 3813230317U)))))) - (((/* implicit */unsigned long long int) (+(arr_23 [i_8]))))));
                        }
                    } 
                } 
                arr_42 [i_8] [i_8] = (i_8 % 2 == 0) ? (((/* implicit */long long int) (((((~(((/* implicit */int) ((_Bool) -295074828))))) + (2147483647))) >> (((((min((arr_11 [i_8] [i_8] [i_8] [i_7] [i_8] [23]), (((/* implicit */long long int) (unsigned short)16061)))) ^ ((~(4482932777807729815LL))))) - (4170545964820519746LL)))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) ((_Bool) -295074828))))) + (2147483647))) >> (((((((min((arr_11 [i_8] [i_8] [i_8] [i_7] [i_8] [23]), (((/* implicit */long long int) (unsigned short)16061)))) ^ ((~(4482932777807729815LL))))) - (4170545964820519746LL))) - (2223361867966640858LL))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 13645277228385466690ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) 1588614554)) == (3566788259U)))) : (((int) max((5ULL), (((/* implicit */unsigned long long int) 553208770))))))))));
                            arr_49 [i_7] [i_7] [i_8] [(signed char)9] = ((/* implicit */short) ((min((var_14), (min((((/* implicit */unsigned long long int) -1782441506)), (12988939083801010528ULL))))) - (min((9232849980720228224ULL), (((/* implicit */unsigned long long int) -20))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_13);
}
