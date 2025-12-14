/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148587
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-14))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)13)), (arr_5 [i_2] [i_1] [i_0]))))) : (min((arr_6 [i_0] [i_1] [(unsigned short)10]), (((/* implicit */long long int) arr_2 [(signed char)6]))))))) != (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_3 [i_2])))));
                    var_15 = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (signed char)113)))), (((((/* implicit */_Bool) 917598262331242062ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)13)))))));
                }
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((max((arr_6 [i_0] [i_0] [i_1]), (5599998955715563720LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-14)) != (((/* implicit */int) (signed char)14)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [i_4] = ((/* implicit */signed char) arr_14 [i_4] [i_4] [i_4]);
                    arr_18 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((8191) / (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (short)11657)) : (((/* implicit */int) (unsigned char)41))))));
                }
            } 
        } 
    } 
}
