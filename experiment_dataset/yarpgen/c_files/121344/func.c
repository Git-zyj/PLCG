/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121344
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)15)), (var_12)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [14U] [i_1] [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (unsigned char)249))))) ? ((+(var_4))) : (((((/* implicit */_Bool) var_13)) ? (-3857776371574117784LL) : (var_4)))))) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_5))))))) : (var_10)));
                    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned short)0), (var_7)))) ? (((((/* implicit */_Bool) 655750103965460397ULL)) ? (var_12) : (-3857776371574117776LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) && (((/* implicit */_Bool) var_12)))))))) / (min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 3464871415473279803LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-3857776371574117800LL)))))));
                }
            } 
        } 
    } 
}
