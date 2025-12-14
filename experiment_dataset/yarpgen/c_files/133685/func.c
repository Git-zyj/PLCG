/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133685
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
    var_12 = ((/* implicit */signed char) ((unsigned int) min(((-(((/* implicit */int) (unsigned char)2)))), (var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */signed char) (unsigned char)219);
                arr_7 [i_0] [(short)10] = ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                arr_14 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_3])))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((3005384376U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [11ULL] [(signed char)8] [i_2])))))) < (min((((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [(_Bool)1])), (3141559599701924966ULL))))) ? ((~(((unsigned int) (signed char)-51)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3])) ^ (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) <= (((/* implicit */int) (_Bool)1)))))))))))));
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) min((arr_12 [(_Bool)1] [i_2] [i_2]), (-1740523216)))), (((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)202))))) : ((~(arr_4 [i_2] [(unsigned char)0] [i_3])))))));
            }
        } 
    } 
}
