/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109253
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
    var_19 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) (signed char)-44)) ^ (((/* implicit */int) (unsigned short)65535)))) ^ (((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */int) (unsigned short)23);
                        arr_9 [i_2] = ((/* implicit */unsigned int) var_7);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                    {
                        for (short i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)26))))) ? (((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2])) ? (arr_7 [i_0] [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4] [i_0] [i_2]))))) : ((~(var_10))))));
                                var_22 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(signed char)16] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 + 2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) var_5);
                    var_23 = ((/* implicit */unsigned short) (~((+(10560372830824933799ULL)))));
                }
            } 
        } 
    } 
}
