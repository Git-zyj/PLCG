/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16836
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_7))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (var_6))), (((/* implicit */int) (short)-21306))))) * (var_1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) 68719214592ULL))))) > (((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_1]))));
                            var_13 = ((/* implicit */long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14))))), (min((((/* implicit */int) arr_0 [i_0])), (arr_10 [i_3 - 3] [i_3 + 2] [i_3 - 2] [i_3 - 3] [i_3 + 4]))))), (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-9)) ? ((-(((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_2 + 1])))) : (((/* implicit */int) (short)20504)))) != (((/* implicit */int) (short)32755))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((68719214592ULL) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)8)) & (((/* implicit */int) (signed char)10)))) | (((/* implicit */int) (_Bool)0))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)47025)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) : (2382975029243300100ULL)))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_1] [i_1] [i_0])), (min((((/* implicit */unsigned short) var_0)), ((unsigned short)18495)))))) << (((((((/* implicit */_Bool) arr_9 [i_1] [8] [8] [i_0])) ? ((-(arr_3 [i_0] [i_1] [i_1]))) : ((-(arr_3 [i_0] [i_0] [i_1]))))) - (207038726)))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2128118297U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 4; i_4 < 8; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 3; i_5 < 8; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                        var_19 = ((/* implicit */long long int) min((var_19), ((-(((arr_6 [i_4] [i_1] [i_4 - 1] [i_5 - 2]) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)91))))) : (((arr_5 [i_5 + 3] [i_1] [i_4 + 2]) ? (arr_19 [i_0] [i_0] [i_4 - 2] [i_4 + 1] [i_1] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))))));
                        arr_21 [i_5 - 2] [i_1] [i_4 - 3] [i_5 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) (-(var_7))))), (min((var_4), (arr_14 [i_5 + 1] [i_4 + 1])))));
                    }
                    var_20 = ((/* implicit */unsigned char) (-(min((((unsigned long long int) arr_13 [i_4 + 2] [i_0] [i_4 - 4])), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)14)), (-1698138236))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(var_1)));
}
