/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12667
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
    var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-4964))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_10)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) (short)-4981)) : (((((/* implicit */int) var_13)) * ((+(((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_11)))) % (16121476561142134239ULL)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) (short)-2132))) * (arr_1 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2132))) : (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(short)1])) ? (((/* implicit */int) arr_6 [(unsigned char)12] [(unsigned char)12] [i_2])) : (1610545774)))) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1])))) : (((((/* implicit */_Bool) max((var_17), (((/* implicit */long long int) var_12))))) ? (((long long int) (short)-2132)) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_1 + 4]), (((/* implicit */unsigned short) (short)-4964))))))))))));
                    var_20 -= ((/* implicit */short) max((arr_8 [i_2] [i_1] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_2]), (var_16)))))))));
                    var_21 = ((/* implicit */unsigned long long int) (-(-2910154046667977101LL)));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((arr_1 [6U]) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2])) / (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))))) ? (((((/* implicit */long long int) ((arr_5 [(unsigned char)1] [i_1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2] [(short)5] [i_0]))))) & (((long long int) arr_5 [i_0] [i_0])))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        var_22 -= ((/* implicit */long long int) var_14);
                        arr_19 [i_0] [i_3] [i_4] [i_0] [i_3] = (+((-(((/* implicit */int) arr_8 [i_5] [i_5] [i_4])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        for (unsigned char i_7 = 1; i_7 < 6; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (min((((/* implicit */unsigned int) arr_27 [i_6] [i_6])), (arr_4 [i_6] [(short)16] [i_8]))) : (((/* implicit */unsigned int) -1430979602)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_28 [i_6] [i_7] [i_9]);
                        arr_32 [i_6] [i_6] [i_6] = ((((((/* implicit */int) arr_18 [i_7 - 1])) != (((/* implicit */int) arr_18 [i_7 + 3])))) ? (((/* implicit */int) arr_5 [i_7] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))));
                    }
                }
            } 
        } 
    } 
}
