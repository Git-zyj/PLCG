/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17682
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((var_9), (var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) (+((~(((/* implicit */int) (_Bool)1))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) (short)-22181))) ? ((+(((/* implicit */int) arr_5 [i_1] [i_2])))) : (((/* implicit */int) arr_5 [i_0] [i_2])))) + (((/* implicit */int) ((signed char) arr_1 [i_0 - 3] [i_0 + 1])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 - 2])) : (((/* implicit */int) arr_6 [i_0 - 2]))));
                        arr_11 [i_0] [i_3] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)27066)))) ? (13231064586663851990ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_2)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 - 1]));
                        arr_13 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1] [i_3]))))) >= ((~(2122374459366211856ULL)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (short)-11495)))) * (((/* implicit */int) arr_2 [i_0 - 1])))))));
                            arr_16 [i_3] [i_1] = ((/* implicit */long long int) (-((+((+(arr_0 [i_4] [i_0])))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + ((+(((/* implicit */int) max((var_10), ((signed char)-61))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            arr_19 [i_0 - 3] [i_0] [(_Bool)1] [i_3] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_3)))));
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_2]))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            var_20 = (((_Bool)1) ? (((/* implicit */int) arr_18 [i_6] [i_6] [i_0 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_6 - 2] [i_0 - 1] [i_0 - 2] [i_6])));
                            var_21 = ((/* implicit */_Bool) min((var_21), (arr_17 [i_0 + 1])));
                            var_22 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_5)))))));
                            arr_22 [i_0] [i_3] [(signed char)10] [i_1] [i_3] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)54308)) : (((/* implicit */int) (short)-22181))))) ? (arr_15 [i_0] [i_3] [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_2] [i_2] [i_6])) ? (((/* implicit */int) (short)-22181)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                }
            } 
        } 
    } 
}
