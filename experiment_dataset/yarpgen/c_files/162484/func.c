/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162484
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
    var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) 14077143914687625911ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3950544106U))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14077143914687625928ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5380470626089620945LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4369600159021925712ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3)))))) : ((~(18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) var_10)) : (14077143914687625911ULL))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) (+(min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                        var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32700))))) >> (((var_0) - (2346024951U))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 4; i_4 < 17; i_4 += 1) 
                    {
                        var_23 |= ((/* implicit */_Bool) 3737784377U);
                        arr_16 [i_0] [(signed char)12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_0), (557182919U)))) ? (((((/* implicit */_Bool) 14077143914687625903ULL)) ? (557182919U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65)))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)65)))))))));
                        arr_20 [6] &= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                        arr_21 [i_0] = ((/* implicit */unsigned int) (unsigned char)190);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_1))));
}
