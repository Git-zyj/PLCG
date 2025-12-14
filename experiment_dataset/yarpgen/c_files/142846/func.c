/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142846
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
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */long long int) (+(min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_17 ^= ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -511768436)), (var_4)))))));
                        var_18 = ((/* implicit */_Bool) ((int) (unsigned char)156));
                        arr_8 [i_0] [(unsigned char)10] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)0)), (arr_5 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 2) 
                        {
                            arr_16 [(_Bool)1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                            arr_17 [i_4] [(unsigned short)1] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */long long int) var_5)) / (-8232068673708900757LL)))));
                        }
                        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4] [i_1 - 3] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) ((var_6) == (arr_11 [i_2] [i_2] [i_2] [14LL])))) : (((((/* implicit */int) arr_3 [i_1 - 2])) << (((var_5) + (1812600392)))))));
                        var_19 *= ((/* implicit */signed char) (+(arr_2 [i_0] [i_1 - 3] [i_1 - 3])));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(-8232068673708900757LL))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4764735748081967158LL)) ? (-5908706891869855150LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1 - 1] [10] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 + 1])))));
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_5 [i_2] [i_2]))))))) ? (min(((-(var_7))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)64411))))))) : (((long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [10U] [(unsigned char)12])) + (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2] [(short)18])))))));
                    }
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_10))));
                }
            } 
        } 
    } 
}
