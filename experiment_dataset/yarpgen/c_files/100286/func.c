/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100286
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [(signed char)0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(unsigned char)10] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) var_8))))) : (((/* implicit */int) max(((unsigned short)6539), ((unsigned short)6555))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_3)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned int) arr_8 [i_2 - 1])), (var_0))));
        arr_12 [i_2] [i_2 - 1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_2 + 2]), (((/* implicit */unsigned short) arr_5 [i_2 + 2] [i_2 - 2] [i_2 + 2]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned char) ((long long int) var_7));
            var_11 ^= ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned int) var_3)), (var_0))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_3] [i_4])))), (((/* implicit */unsigned long long int) (~(arr_3 [i_5] [i_4] [i_2]))))))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) var_0))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) var_9))))))));
                        arr_20 [i_2] [10] [i_4] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5003637947477360986LL)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (short)-12545))))) ? (1187890802) : (((/* implicit */int) (unsigned short)41514))));
                    }
                } 
            } 
        }
        arr_21 [8] = ((signed char) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_2]))))));
        var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 941521868)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54432))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6525)) ? (6772464821877587456ULL) : (((/* implicit */unsigned long long int) 1500286276348019833LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [(unsigned char)9]))) : (((unsigned long long int) -6487820824787351975LL))))));
        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_22 [(signed char)17] [i_6])) && (((/* implicit */_Bool) var_4))))), (var_4))))));
        var_16 = ((/* implicit */signed char) (((!(arr_23 [i_6]))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_6] [(short)7])), (var_8)))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (var_9)))) ? ((+(941521854))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((short) arr_24 [i_6]))) : (((((/* implicit */_Bool) 6772464821877587463ULL)) ? (-941521869) : (145237421)))));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) -6953510486767125965LL)) ? (((/* implicit */int) (unsigned short)17805)) : (((/* implicit */int) (signed char)114)))) : (((/* implicit */int) var_3))));
}
