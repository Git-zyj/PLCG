/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13709
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        var_12 ^= ((/* implicit */short) min((max((((long long int) (unsigned short)46255)), (((/* implicit */long long int) arr_5 [i_3] [i_1] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_11))))))))));
                        var_13 &= ((/* implicit */short) (unsigned short)18);
                        arr_10 [i_3] [i_2] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */short) var_11)), (arr_7 [i_1] [i_1] [i_2] [i_2 - 1] [i_3 + 1] [i_3]))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned char)34))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_14 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((12191764187578806637ULL) | (arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1024)))));
                        var_14 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 7163110650004494100ULL)) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))) > (arr_0 [i_4] [i_2])))))));
                        var_15 = ((((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_2 - 1] [i_1])) & (((/* implicit */int) (unsigned short)49698)))) < (((((/* implicit */int) arr_13 [i_4] [i_1] [i_1] [i_2 - 1] [i_2])) << (((((/* implicit */int) var_0)) - (56758))))));
                        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                        var_17 -= ((/* implicit */unsigned int) ((((unsigned long long int) max((((/* implicit */unsigned long long int) var_8)), (11283633423705057516ULL)))) > (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (unsigned short)49698)), (1234299317U))))))));
                    }
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2 - 1]))))) | (-4331628305782307571LL)));
                        arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5]);
                    }
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), (min((arr_6 [i_0] [i_0] [i_1] [i_2]), (11283633423705057516ULL)))))) ? (((/* implicit */int) arr_18 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_4))));
                    var_19 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_2 [i_1] [i_2])))))), (((long long int) var_1))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) -1487672643);
    var_21 &= max((max((var_1), (((/* implicit */unsigned long long int) (~(var_7)))))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned short) var_4))))));
}
