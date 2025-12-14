/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166315
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((long long int) (short)-16390)))) ? (((((/* implicit */_Bool) max((9631992023231690827ULL), (((/* implicit */unsigned long long int) (short)32756))))) ? (((/* implicit */long long int) max((3292607079U), (((/* implicit */unsigned int) (signed char)-114))))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0 - 1]), (arr_4 [i_0 + 1]))))) >= (((unsigned int) arr_4 [i_0 + 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_9 [i_0] [(signed char)1] [i_3] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((_Bool) -2094426000));
                        arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (short)29550);
                        arr_11 [i_1] [i_1] = ((/* implicit */short) ((_Bool) (short)28495));
                        var_15 += ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_1)))));
                    }
                    arr_12 [i_1] = ((/* implicit */unsigned int) ((signed char) arr_0 [i_0 + 2] [i_0 + 2]));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned short) ((unsigned int) var_2));
                                arr_20 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1]))))) << (((((/* implicit */int) arr_4 [i_1 - 1])) - (55)))));
                                arr_21 [i_5 - 2] [i_0 + 2] [(short)2] [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            for (unsigned char i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                {
                    arr_32 [i_6] [i_7 - 3] [0LL] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_29 [8] [(_Bool)1] [i_7 + 3])) || (((((/* implicit */_Bool) (unsigned short)36743)) && (((/* implicit */_Bool) 499056679530020676LL)))))) && (((/* implicit */_Bool) arr_28 [i_7]))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(8814752050477860767ULL)))))) ? (max((min((5), (((/* implicit */int) (short)896)))), (((/* implicit */int) (short)-16409)))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
