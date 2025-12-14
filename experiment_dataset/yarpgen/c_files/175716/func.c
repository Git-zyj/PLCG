/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175716
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
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned short) ((_Bool) arr_2 [i_0]))))));
                arr_7 [8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_4 [i_0 + 2]) : (((/* implicit */long long int) 2147483647))))) ? (((((/* implicit */int) (unsigned short)14270)) / (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (var_13))))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 2688592030U))) ? (((/* implicit */int) ((arr_11 [i_0]) >= (((/* implicit */int) (short)255))))) : (((((/* implicit */_Bool) 1606375246U)) ? (709818566) : (var_10)))));
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (signed char)-1)) + (16)))))) ? (((int) arr_8 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (unsigned short)35841))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)65535)) + (var_4))) * (((((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1])) >> (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 1]))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (var_3)))) ? (var_3) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((short) ((((arr_16 [i_5] [i_4] [i_4]) != (((/* implicit */int) (_Bool)1)))) ? (arr_15 [i_4]) : (((/* implicit */int) ((unsigned short) (_Bool)1))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_8 = 4; i_8 < 21; i_8 += 2) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19955)) && (((/* implicit */_Bool) 866859538)))))) <= (((unsigned long long int) 431160156))));
                                arr_24 [(_Bool)1] [i_5] [i_5] [i_5] [(unsigned short)13] [i_5] = ((int) ((int) arr_22 [i_4] [i_5] [i_8 + 1] [i_6] [i_8] [(_Bool)0] [i_6]));
                            }
                            for (short i_9 = 4; i_9 < 21; i_9 += 2) /* same iter space */
                            {
                                arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((var_8) ^ (arr_16 [i_9 - 4] [i_9 - 2] [i_9 - 1]))) != (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((signed char) arr_25 [i_9 - 4] [i_9] [i_7] [i_6] [i_5] [i_4]))) : (((/* implicit */int) (_Bool)1))))));
                                arr_28 [i_7] [(unsigned short)19] [(short)5] [i_7] [i_9] [i_6] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_19 [i_9] [i_5] [i_6]) ? (((/* implicit */int) ((unsigned short) (unsigned short)3))) : (((/* implicit */int) (unsigned short)1))))) ^ (((unsigned long long int) ((arr_15 [i_7]) & (((/* implicit */int) arr_14 [i_5] [i_9])))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                            {
                                arr_31 [i_4] [i_5] [i_4] [i_4] [i_10] = ((/* implicit */unsigned short) ((_Bool) var_12));
                                var_20 *= ((/* implicit */int) ((unsigned short) var_1));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))));
                            }
                            arr_32 [i_7] [i_5] [i_6] [i_7] = ((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (arr_16 [i_4] [i_5] [i_6])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -431160157)) ? (((/* implicit */int) (unsigned short)28536)) : (((/* implicit */int) arr_26 [i_4] [i_5] [i_4] [i_4] [i_4]))))))));
                arr_33 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2121844762)) ? (((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] [i_5] [i_5])) ? (arr_17 [i_4]) : (((/* implicit */int) (unsigned short)19)))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_2);
}
