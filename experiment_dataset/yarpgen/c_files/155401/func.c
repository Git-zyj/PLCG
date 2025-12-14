/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155401
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
    var_13 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((var_2) & (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (var_12))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned int) var_4)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_11 [(signed char)14] [(signed char)14] [i_1] [i_1] [i_1] [i_3] [10ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1]))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)0] [i_1] [(short)0] [i_0] [i_2 + 3])) ? (((/* implicit */int) arr_8 [(short)8] [i_3])) : (((/* implicit */int) var_1))))) ? (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                                arr_12 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) ((signed char) ((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_3] [i_3]))) >> (((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))))))) - (11567036214352334602ULL)))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((unsigned long long int) arr_0 [i_0])))) == (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned short)31418)) : (((/* implicit */int) (unsigned char)180))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_6))))))) : (var_12)))));
}
