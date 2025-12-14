/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152464
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_3))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_11 *= ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (arr_2 [i_2]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((var_9) <= (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 1] [i_1 + 3])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) arr_4 [i_1 + 1] [i_3 + 2] [i_4 - 1]))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_3 + 1])) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_3 + 1] [i_4 - 1])))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)183))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [9ULL] [i_5])) ? (var_9) : (((/* implicit */int) arr_11 [i_0] [(unsigned char)1] [i_2] [i_3] [(unsigned char)8])))) : (((/* implicit */int) arr_10 [i_2]))));
                            arr_16 [i_1] [i_5] [i_5] [i_3] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)122))));
                        }
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)1) ? (var_9) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) / (min((max((((/* implicit */long long int) var_7)), (-2365556553274464611LL))), (((/* implicit */long long int) var_5))))));
    var_16 = ((/* implicit */unsigned short) ((long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5))))));
    var_17 = ((/* implicit */unsigned short) (signed char)-71);
}
