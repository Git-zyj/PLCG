/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143066
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_9))));
    var_13 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_3)))));
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) var_10)) <= (319211723)))) & (((/* implicit */int) min((var_0), ((_Bool)0)))))) >= (((/* implicit */int) (signed char)-112))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)96))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [21U] [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((~(((6083874920386968791ULL) >> (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 2])))));
                                var_15 = ((/* implicit */short) (-((-(((arr_12 [i_4] [i_2] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
