/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128013
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(7322143206351406900LL)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6)))))) : (((/* implicit */int) (short)-16026))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = (!(((/* implicit */_Bool) ((unsigned short) (-(arr_5 [(_Bool)1]))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_22 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (11654794488636624137ULL))));
                    var_23 = ((/* implicit */_Bool) (+((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)203))))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (140737488355327ULL))))));
                    var_24 ^= ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                var_25 = (~((+(((unsigned long long int) var_2)))));
                arr_15 [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_3] [(unsigned char)18] [i_4]);
                arr_16 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -96673873)) / (arr_4 [i_3] [i_3] [i_3])));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (((~(((var_15) - (var_13))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
}
