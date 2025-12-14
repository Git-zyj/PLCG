/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154977
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (~((-(0U)))));
                var_21 ^= ((/* implicit */unsigned char) arr_0 [i_1]);
                var_22 += ((/* implicit */unsigned short) arr_0 [i_1 - 2]);
                arr_5 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((+(arr_2 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) var_17)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_12 [10U] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) + (((/* implicit */int) arr_8 [i_2]))))), (2923286580U)));
                var_24 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (min((4294967295U), (((/* implicit */unsigned int) var_18))))))), (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 0U)))) : ((((_Bool)1) ? (108199233542344196LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9916)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_10);
}
