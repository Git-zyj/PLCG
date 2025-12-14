/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142189
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
    var_17 = ((/* implicit */unsigned char) ((signed char) var_1));
    var_18 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_14)) : (var_10))), (8964801553648055345ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (var_9)));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_2 - 2])))))) | (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
    var_20 |= ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) var_15)), (min((var_2), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_3 [i_4] [i_3] [i_3])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    arr_16 [i_3] [i_4] [i_3] = ((/* implicit */int) min(((short)-2080), ((short)16)));
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)16)), (6606328571451263642LL)));
                    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)43)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) -3749217392027694573LL)), (18446744073709551611ULL)))));
                }
            }
        } 
    } 
}
