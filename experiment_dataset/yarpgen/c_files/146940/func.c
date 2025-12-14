/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146940
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
    var_10 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */signed char) var_0)))))))));
    var_11 = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)167))))));
    var_12 = ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (short)32738)))) + (2147483647))) >> (((max((arr_1 [i_0 + 4]), (((/* implicit */long long int) var_2)))) - (8927419215041378949LL))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) (short)-32740)), (arr_0 [i_0 - 2] [i_0]))) % (max((var_1), (arr_0 [i_0 - 2] [i_0 - 2]))))))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (max((((var_6) + (((/* implicit */unsigned long long int) -1175127891)))), (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65013)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (short)32728)))) <= (((/* implicit */int) ((signed char) arr_2 [(short)20]))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1])) > (((/* implicit */int) arr_2 [12LL]))))))))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_12 [i_3 - 3] [i_3 - 3] [i_5 - 1] [i_5 - 1]);
                        arr_18 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) -1175127894))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [17LL])) ? (arr_6 [(_Bool)1] [i_3]) : (((/* implicit */unsigned int) 1175127887)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) == (3397079311675674630LL)))))));
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) var_7))))) || (((/* implicit */_Bool) var_5))));
                        arr_20 [(unsigned short)12] [(unsigned short)12] [i_4] [(unsigned short)12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 1175127886)) != (arr_5 [i_3 - 3] [i_3 - 2]))))) >= ((+(arr_5 [i_3 - 2] [i_3 - 3])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) var_3);
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (short i_7 = 2; i_7 < 17; i_7 += 3) 
            {
                {
                    var_19 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_6] [i_6] [i_7]))) + (var_4)))));
                    var_20 = ((/* implicit */int) arr_2 [i_7]);
                    var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                }
            } 
        } 
    }
}
