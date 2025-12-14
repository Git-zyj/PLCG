/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18941
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 1])) + (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0] [i_1]))))))) ? (((/* implicit */int) (unsigned char)211)) : (((((/* implicit */int) max(((unsigned char)32), ((unsigned char)223)))) - (((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)56)))))))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (unsigned char)45);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_12 [i_3 + 1] [i_3 + 1])) - (13692624614201507538ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(arr_12 [i_2] [i_3 - 2]))))))));
                var_14 = ((/* implicit */short) var_1);
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | ((~((+(((/* implicit */int) (_Bool)1))))))));
}
