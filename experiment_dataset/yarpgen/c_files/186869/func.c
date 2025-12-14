/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186869
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (signed char)31)))))) ^ (min((((/* implicit */long long int) var_10)), (2207100971953024140LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) arr_0 [i_0]);
                var_20 = ((/* implicit */unsigned char) (+(max(((-(((/* implicit */int) (short)28154)))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) (signed char)26))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_21 = ((/* implicit */signed char) ((_Bool) 4104296206U));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_1 [(short)7]) % (arr_1 [i_0])))) > (((long long int) (short)-32766))));
                }
                arr_7 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((190671070U) << (((((/* implicit */int) var_2)) - (33552)))))))) * ((((-(var_14))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) min(((unsigned short)31), (((/* implicit */unsigned short) (short)1411))))))));
    var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) (unsigned short)35379)), (var_2))))) + (max((((/* implicit */unsigned int) max(((signed char)-127), ((signed char)-48)))), (var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) arr_8 [i_3] [i_3]);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_12 [i_3] [i_4] [i_3])))));
                    var_25 ^= ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)48))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                }
            } 
        } 
    }
}
