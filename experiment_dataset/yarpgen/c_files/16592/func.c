/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16592
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_8)) - (83)))))) - (((((unsigned int) var_6)) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88)))))));
                var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (var_4))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-3078)) : (var_4)));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 24; i_3 += 3) 
        {
            for (short i_4 = 4; i_4 < 22; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((((/* implicit */unsigned long long int) 1190042520)) / (5598391647845322444ULL))) / (((/* implicit */unsigned long long int) ((unsigned int) var_5))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-25087)) && (((/* implicit */_Bool) -1874379579))))))))))));
                    var_15 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                    arr_13 [(unsigned short)0] [(short)0] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((-1444901284) < (((/* implicit */int) ((var_4) == (((/* implicit */int) var_6))))))));
                    var_16 = ((/* implicit */int) ((((((unsigned int) var_9)) & (((/* implicit */unsigned int) -1190042520)))) - (((/* implicit */unsigned int) ((((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) / ((+((-2147483647 - 1)))))))));
                    arr_14 [i_4] [i_3 - 1] [i_3 - 1] [i_4] |= (+((~(((/* implicit */int) (short)-3078)))));
                }
            } 
        } 
    } 
}
