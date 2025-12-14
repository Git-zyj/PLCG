/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169217
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)61))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((((/* implicit */_Bool) (unsigned short)1645)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)61))) : (1648357807003589492LL))), (((/* implicit */long long int) var_9)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)69)) < (((/* implicit */int) (_Bool)1)))))) | (max((((/* implicit */long long int) var_5)), ((+(1648357807003589492LL))))))))));
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~((-(((/* implicit */int) (signed char)55)))))))));
            }
        } 
    } 
    var_13 += ((min((-1648357807003589492LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 536805376U))))))) <= (((/* implicit */long long int) var_3)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) var_6);
                arr_11 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) (signed char)111))), (min((((/* implicit */int) ((((/* implicit */int) (signed char)69)) >= (((/* implicit */int) (signed char)69))))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned short)122))))))));
                var_14 = ((/* implicit */_Bool) ((unsigned short) (~(1073741824U))));
            }
        } 
    } 
}
