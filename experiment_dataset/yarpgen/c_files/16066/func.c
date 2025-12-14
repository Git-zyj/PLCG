/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16066
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) (_Bool)1);
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)17936)) ? (((/* implicit */unsigned int) 166243050)) : (976996681U))) << (((max((((/* implicit */int) ((short) 245622366))), (var_16))) + (6583)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0 + 2] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [(_Bool)1])) | (((/* implicit */int) (unsigned short)17936))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) : (max((4125775729U), (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))))))), (((17032610177166188562ULL) >> (((((/* implicit */int) arr_0 [i_0 + 3])) - (13992)))))));
            var_22 ^= ((/* implicit */short) min((((((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) var_16))))) ? (1414133896543363053ULL) : (((/* implicit */unsigned long long int) 976996681U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)248)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1414133896543363053ULL) <= (((/* implicit */unsigned long long int) 3317970614U)))))) : (137862758U))))));
            var_23 ^= ((((/* implicit */int) ((unsigned char) ((((((/* implicit */int) (short)-28624)) + (2147483647))) >> (((1414133896543363053ULL) - (1414133896543363043ULL))))))) % ((-(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_18))) ? (((((/* implicit */_Bool) ((unsigned int) 3U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (max((((/* implicit */unsigned long long int) var_13)), (var_1))))) : (((((/* implicit */_Bool) var_14)) ? ((+(6929275356442513094ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3317970614U)) ? (var_8) : (((/* implicit */unsigned int) -1704582733)))))))));
            arr_8 [i_2] [i_2] [1ULL] = ((/* implicit */unsigned short) min(((+(max((2275106945U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_0 [i_2]))))))));
        }
    }
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)53635)) == (((((/* implicit */_Bool) ((signed char) (short)0))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_14 [i_3 - 3] [i_3 - 3] [i_3 - 3]))))));
            arr_15 [i_3] [(_Bool)1] [i_3] = ((/* implicit */_Bool) (((+(var_0))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 1])))))));
        }
        var_26 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((var_11) | (((/* implicit */int) arr_0 [i_3 - 1]))))), (((((/* implicit */_Bool) (signed char)127)) ? (var_13) : (4249463110U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                {
                    arr_23 [i_6] [i_5] = ((/* implicit */long long int) (((~((+(arr_3 [i_6] [i_5 - 1] [i_6 + 2]))))) & (max((((((/* implicit */_Bool) var_14)) ? (3317970614U) : (var_9))), (((((/* implicit */_Bool) arr_1 [i_3 - 3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))) : (2366497715U)))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_30 [i_6] [i_5] [i_5] [i_6] [i_5] [i_7 + 1] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 3317970615U))) ? (((/* implicit */int) (short)200)) : (((((/* implicit */int) (!((_Bool)0)))) | (((/* implicit */int) (_Bool)1))))));
                                var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_3] [i_3 + 2] [i_3] [i_3]))) : (var_18)))) ? ((~(var_10))) : (((/* implicit */int) arr_22 [i_3 - 2] [i_5 - 1] [i_6 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_18 [i_3] [i_3] [i_3])))) : (max((var_14), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-34)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) % (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 3317970615U)) : (var_15))))) : ((-(8629709027135454433ULL)))));
    }
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_29 = ((/* implicit */_Bool) max((var_29), ((!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [10U] [10U])))) ? (((unsigned int) 0U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11174)) || (((/* implicit */_Bool) var_0)))))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            arr_37 [i_10] = ((/* implicit */signed char) ((_Bool) arr_10 [i_9]));
            arr_38 [i_9] [(_Bool)1] [i_10] |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 3317970614U)) || (((/* implicit */_Bool) max(((signed char)-113), (((/* implicit */signed char) (_Bool)0))))))))));
            var_30 ^= ((/* implicit */_Bool) var_9);
            var_31 ^= ((/* implicit */short) ((unsigned short) (+(((((/* implicit */int) (unsigned short)60665)) << (0ULL))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_11] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))) : (((3360374409U) - (3317970615U)))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? (max((((/* implicit */unsigned long long int) (signed char)-7)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (arr_29 [i_13] [i_12] [(unsigned short)16] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11]))))))));
                    }
                } 
            } 
            arr_45 [i_9] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2891749359U)) ? (((/* implicit */int) (unsigned short)192)) : (((/* implicit */int) (unsigned char)5))));
            var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [i_9] [4U] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : ((-(3150665984U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((int) var_5)))))));
        }
        var_35 = ((/* implicit */_Bool) max((var_35), (((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_17 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) > (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_27 [(signed char)3] [i_9] [i_9] [i_9] [2ULL])))))))))));
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */unsigned long long int) max((8U), (3317970615U)))) : (var_1)))) ? (max((((4157104538U) >> (((((/* implicit */int) var_6)) - (41))))), (((/* implicit */unsigned int) ((signed char) 132120576ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)251)) - (((/* implicit */int) (unsigned char)5)))))))));
}
