/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117679
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
    var_12 -= ((/* implicit */signed char) (+(-1LL)));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */signed char) (((!(((((/* implicit */_Bool) (unsigned short)51537)) && (((/* implicit */_Bool) 172969480U)))))) || (((/* implicit */_Bool) ((unsigned short) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))))))));
                arr_5 [5] = ((min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) % (max((((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1]))))), (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) var_6)))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0 + 1]))))) - (var_2)));
                var_16 *= ((/* implicit */unsigned int) arr_4 [4U]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */long long int) arr_6 [i_4] [i_3 + 1])))), (((/* implicit */long long int) arr_12 [21ULL] [i_3 + 1] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (((/* implicit */int) arr_10 [i_3 - 1]))))) ? ((-(((/* implicit */int) (unsigned char)32)))) : (((/* implicit */int) arr_8 [i_4]))))) : (max((-1LL), (((/* implicit */long long int) (unsigned short)20))))));
                    arr_15 [(unsigned short)13] [i_2] [(unsigned short)18] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_10 [i_4])), (var_0)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_10)) : (var_9)))))))));
}
