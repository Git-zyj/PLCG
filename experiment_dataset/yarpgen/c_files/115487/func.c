/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115487
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
    var_16 = ((/* implicit */unsigned int) var_6);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 63LL)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)-38)))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) -1044763727434447484LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned long long int) arr_1 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [(unsigned char)9])) : (arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_0])))))) ? (((/* implicit */long long int) var_14)) : (arr_5 [i_1] [i_2]))))));
                    var_21 = ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1] [5]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [5LL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_2]))))));
                                var_23 += ((/* implicit */short) ((long long int) arr_4 [i_2]));
                                var_24 = ((/* implicit */unsigned int) ((unsigned char) arr_10 [4U]));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_25 += arr_14 [i_0] [i_0] [i_2];
                        var_26 |= ((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])));
                        var_27 &= ((/* implicit */long long int) var_0);
                    }
                }
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-19819))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_8]))))) ? (((arr_15 [i_0] [i_0] [8U]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_6])) ? (((/* implicit */int) (short)-19819)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1]))))) : (-6881284437851569126LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)37))))));
                                var_29 *= ((/* implicit */unsigned long long int) ((var_15) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7]))) : (arr_8 [i_8 + 1] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_7] [i_8])) ? (arr_8 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_6] [i_8])) ? (arr_19 [i_0] [i_0]) : (((/* implicit */long long int) arr_22 [(short)7] [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0])))));
                                var_30 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (6881284437851569126LL) : (((/* implicit */long long int) -973339322)))));
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */signed char) ((((_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1343459678)) : (7099954722419511653ULL)));
            }
        } 
    } 
}
