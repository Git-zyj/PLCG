/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110698
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (-768705754)));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [(short)13] [i_1] = ((/* implicit */int) max((((/* implicit */short) (!(((-26) > (-768705749)))))), (var_4)));
                var_13 *= ((/* implicit */long long int) ((4333588114841627474ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523)))));
                var_14 = (((!(((/* implicit */_Bool) ((long long int) 1742257757))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((768705780) == (((/* implicit */int) (short)-10965))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                            {
                                var_15 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)210)), (2152266950U)));
                                arr_13 [i_1] [(unsigned char)13] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3] [i_4])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-21))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)13] [i_2] [i_4]))) : (((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_4 + 1] [(short)22] [i_2 + 1] [19])) <= (((/* implicit */int) (short)-8858))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2])) ? (max((-4960502536612555351LL), (arr_11 [i_0] [i_1] [i_5] [i_3] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(signed char)14] [(signed char)14])) ^ (((/* implicit */int) var_8))))))) << (((((((((/* implicit */_Bool) var_2)) ? (5692635838235200094ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_2] [i_0] [i_5])))) ^ (((/* implicit */unsigned long long int) (~(arr_8 [1] [i_5])))))) - (5692635838579292540ULL))))))));
                                arr_16 [i_0] [i_1] [(_Bool)1] [i_1] [i_5] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_2 + 1])))) >> (((arr_8 [i_0] [i_0]) + (797438773)))));
                            }
                            var_17 = ((/* implicit */unsigned int) (-2147483647 - 1));
                            arr_17 [i_0] [i_0] [(unsigned char)12] |= ((/* implicit */signed char) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
