/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180268
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
    var_13 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-17245)) : (((/* implicit */int) var_8))))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [4U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(arr_4 [15LL] [i_1] [22])))) ? (max((11087401952193048584ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [6] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((arr_4 [i_0] [i_0] [0U]) < (((/* implicit */int) var_8))))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_7)))))))));
                    var_14 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (4294967292U) : (var_4))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 2] [i_2])))))), (max((((/* implicit */long long int) max((var_0), (((/* implicit */unsigned char) arr_3 [i_0] [i_1]))))), (((((/* implicit */_Bool) -436119723468008240LL)) ? (4712996312442528022LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23845)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (unsigned short)20857);
                                var_16 = ((/* implicit */_Bool) (~(-2934335843985713864LL)));
                                arr_13 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((min((arr_2 [(unsigned char)12] [17ULL]), (((/* implicit */long long int) arr_10 [i_0 - 3] [i_0 - 4] [i_0] [i_0] [i_0 + 1] [(unsigned char)19])))) & (min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0]))) & (arr_2 [(unsigned short)12] [(unsigned short)12]))), (((/* implicit */long long int) ((arr_10 [i_0] [i_0] [(short)13] [(short)13] [i_2] [i_1]) ? (((/* implicit */int) arr_6 [i_2] [i_0] [i_2])) : (((/* implicit */int) arr_11 [16ULL] [i_1 - 3] [i_2] [i_1 - 3] [i_2]))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) (_Bool)0)), (arr_2 [i_6 - 1] [i_1 + 2]))));
                                arr_19 [22ULL] [i_5] [i_5] [i_5] [(short)12] |= max((((/* implicit */unsigned long long int) ((unsigned char) min((arr_15 [i_0] [20LL] [i_1 - 2] [2] [i_6] [i_1]), (-1643412141))))), ((+(max((195870823705550064ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1])))))));
                                var_19 *= ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50427))))) + (arr_2 [(unsigned short)1] [(unsigned short)1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) & (18446744073709551607ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
}
