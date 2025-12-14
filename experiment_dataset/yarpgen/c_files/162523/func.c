/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162523
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = (~(((/* implicit */int) var_8)));
        var_14 = ((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_5)))))));
        var_15 = ((/* implicit */_Bool) ((2570872934659351431ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            {
                var_16 = ((min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13208651990297092817ULL))), (((/* implicit */unsigned long long int) var_13)))) >> (((max((((/* implicit */unsigned long long int) var_13)), ((+(var_6))))) - (7622003357975115039ULL))));
                arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (max((-1393746903), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)139))));
                var_17 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [12ULL])) ? (((/* implicit */int) var_2)) : (arr_5 [12LL]))) == (((/* implicit */int) (unsigned char)161)))))) * (min((var_9), (((/* implicit */unsigned long long int) var_7))))));
                arr_9 [i_1] [i_2] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (signed char)-54)), (max((((/* implicit */unsigned long long int) (unsigned short)40114)), (2194927375147885248ULL))))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)124)))));
            }
        } 
    } 
}
