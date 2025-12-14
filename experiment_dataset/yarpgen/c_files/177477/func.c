/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177477
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
    var_18 &= ((/* implicit */unsigned long long int) (((~((+(var_3))))) == (((/* implicit */int) max(((!(((/* implicit */_Bool) var_7)))), (var_2))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_19 = ((((/* implicit */_Bool) arr_5 [(unsigned char)4] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)24764)) : (((/* implicit */int) (signed char)8))))))) : (((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */short) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-54)) + (((/* implicit */int) (signed char)53))))) : ((+(169787493347821390LL))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1 - 2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_0)))))));
                            var_20 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4775332824781953818LL)) ? (((/* implicit */int) (unsigned short)22084)) : (((/* implicit */int) (unsigned short)43452))))), (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((unsigned int) (short)31037)) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3336053910813102498ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_0] [(signed char)1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */int) arr_3 [i_1]))))) : (arr_4 [i_1])));
                            arr_12 [i_2] [8LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31025)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) : (9290113170853152772ULL)));
                            var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41830)) ? (9156630902856398838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22083))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_5))));
}
