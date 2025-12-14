/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159971
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    var_11 = ((/* implicit */long long int) (-(0U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), ((-(649262766U)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] [12U] |= 32736U;
                        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 11U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_12 [i_1] [i_2] [4LL])))) ? (arr_12 [14U] [i_1] [i_1]) : ((-(arr_12 [i_3] [i_1] [i_0]))));
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (32736U) : (4294967271U))) << (((((((/* implicit */_Bool) max((0U), (var_8)))) ? (arr_10 [i_4] [i_2] [i_1] [i_0]) : (arr_11 [i_0] [i_1]))) - (3800720783U)))));
                        arr_17 [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_7 [i_2])))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_0] [i_0] [11LL]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                        var_15 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_9 [i_4] [i_2] [i_1] [6U])))))))) ^ (max((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_4])))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-12951))))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) (((+(min((var_2), (((/* implicit */long long int) arr_7 [i_0])))))) * (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 10U))))), (arr_10 [14U] [i_1] [i_2] [i_4]))))));
                            arr_20 [12LL] [i_1] [12LL] [i_4] [i_0] [i_1] [14LL] |= ((/* implicit */short) (~(((((/* implicit */_Bool) 4294934559U)) ? (arr_18 [i_1] [i_5 - 1] [i_5 + 4] [i_5] [i_5] [i_5 + 4]) : (arr_18 [i_2] [i_2] [i_5 + 4] [i_5] [i_5] [i_5])))));
                            var_17 &= ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_5 - 1] [i_5 + 3] [i_5] [i_5 - 2] [i_5 + 2] [i_5 - 1])) ? (arr_18 [i_1] [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 4] [i_5]) : (4294967291U)));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)255)) ? (((/* implicit */long long int) ((0U) % (var_8)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_5 [i_0])) : (2061984893503129254LL))))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                            arr_23 [14U] [i_6] [i_4] [i_2] [i_2] [i_1] [2LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((1230981580U), (var_9))))));
                        }
                    }
                    var_20 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */long long int) 4294967287U))))) ? (((((/* implicit */long long int) 4288288921U)) - (var_1))) : (((/* implicit */long long int) max((3788202125U), (var_8))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_21 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((var_0) <= (4294967278U))) ? (((((/* implicit */_Bool) (short)-17639)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) && (((/* implicit */_Bool) 4294934559U))))))))) != (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) arr_4 [i_7]))))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 11; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 3; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) ((arr_10 [i_7] [i_7] [i_10] [i_11]) - (var_0))))), (arr_8 [i_8] [i_9] [i_10 + 2] [i_11]))))));
                                var_24 |= ((unsigned int) ((((/* implicit */int) ((var_7) <= (4294967280U)))) << (((((((/* implicit */_Bool) 3426740323U)) ? (32741U) : (3788202125U))) - (32735U)))));
                            }
                        } 
                    } 
                    arr_37 [i_7] = ((/* implicit */unsigned int) ((short) max((-8691188088561302227LL), (((/* implicit */long long int) (short)28454)))));
                }
            } 
        } 
        var_25 += 44U;
    }
}
