/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136473
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [(unsigned short)21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)17] [16U])) >> (((/* implicit */int) (!(((4132990972U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43905))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [(_Bool)1]);
                        var_18 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_2] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [(signed char)0] [15ULL]))));
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (arr_1 [i_0] [i_0]))))));
                        arr_16 [20] [i_1] [17ULL] [20] [(_Bool)1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_0] [i_1])), (((min((((/* implicit */int) arr_2 [2ULL] [i_4])), (16775168))) | (((/* implicit */int) ((unsigned short) arr_4 [i_2])))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) var_8)) > (0LL)));
}
