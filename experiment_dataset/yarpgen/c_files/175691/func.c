/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175691
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
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_2 - 3] [i_2 - 3])), (((((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_2 + 3] [i_2 + 1])) * (((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_2 - 1] [i_2 - 2])))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    arr_13 [i_0] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_1])))) ? (((/* implicit */int) var_6)) : (229814747)));
                    var_14 ^= ((/* implicit */long long int) (_Bool)1);
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1839393173)) ? (1839393173) : (((/* implicit */int) arr_4 [i_1 + 3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)217)) : (-1839393154)))) : (arr_1 [i_0 + 3])));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_2 [i_0])))) ? (((/* implicit */int) (unsigned char)175)) : ((~(((/* implicit */int) (short)-30323))))));
                }
                var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) 1839393164)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) - (-1LL)))));
                arr_14 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (2334833612022852989ULL) : (((/* implicit */unsigned long long int) -1839393192)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3)))))))) ? (var_1) : (((((13LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((((/* implicit */_Bool) 1839393172)) ? (var_1) : (((/* implicit */int) (short)-30324)))))));
                var_18 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (signed char)68)) >= (((/* implicit */int) (short)-11649))))) ^ (((/* implicit */int) ((_Bool) var_6))))) < (((/* implicit */int) arr_4 [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            {
                arr_22 [3LL] [i_4] = ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 1])), (var_9))), (((/* implicit */long long int) min((arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 1]), (arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 1]))))));
                var_20 = (~(((((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_21 [(_Bool)1])) - (142))))) << (((((1839393168) ^ (((/* implicit */int) (_Bool)1)))) - (1839393152))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+((-(var_9)))))) - (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))))));
}
