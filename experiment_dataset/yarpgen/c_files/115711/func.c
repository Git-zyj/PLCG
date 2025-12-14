/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115711
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_3)) / (var_2))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (7762878324418740370LL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 - 2])) ? (7762878324418740370LL) : (((/* implicit */long long int) arr_2 [i_1 + 1] [i_1]))))) ? (max((8089587781935339478LL), (7762878324418740368LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [11LL])) ? (2756624257U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [(short)5])))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_2]))))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((arr_5 [i_2] [i_2] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))))) ? ((-(arr_2 [i_2] [i_3]))) : (((/* implicit */int) (unsigned char)2))))) % (arr_0 [i_1] [i_3])));
                        }
                    } 
                } 
                var_14 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_0]))) >= (arr_5 [i_1] [i_1] [i_1 - 1])));
                arr_8 [i_0] = ((short) ((arr_0 [i_0] [i_1 + 2]) % (arr_0 [i_0] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(arr_7 [i_0] [i_1] [i_0] [i_0])))) << (((/* implicit */int) max(((short)-22984), (((/* implicit */short) var_7)))))))) || (((/* implicit */_Bool) ((short) max(((_Bool)1), (var_9)))))));
                            var_16 -= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1] [i_0])) + (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_0] [i_0]))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [(signed char)4] = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) (+(max((arr_5 [i_1] [i_4] [(signed char)0]), (((/* implicit */unsigned int) var_1))))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1] [i_0])) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_4] [i_4] [i_4]))))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -7762878324418740365LL)) || (arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1])))) > (((/* implicit */int) ((-716858615534785512LL) > (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 |= ((/* implicit */short) var_7);
}
