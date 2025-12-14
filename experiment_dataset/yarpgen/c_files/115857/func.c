/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115857
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((arr_0 [i_0] [i_1]) > (var_13)));
                        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 3591543402671367681ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [(signed char)2] [(signed char)2])))) : (((((/* implicit */int) (unsigned char)103)) << (((/* implicit */int) (unsigned short)0))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((unsigned int) arr_4 [i_1] [(unsigned short)18])) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_6 [i_0]))))))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_1 [(_Bool)1] [i_3]))));
                        arr_8 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_1 [i_0] [i_3])))));
                    }
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((long long int) ((signed char) (unsigned short)37143))))));
                    var_22 = ((/* implicit */long long int) arr_5 [i_1]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_11);
}
