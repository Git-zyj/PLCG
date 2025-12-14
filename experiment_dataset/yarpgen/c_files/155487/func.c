/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155487
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) ((long long int) arr_3 [i_1] [i_0] [i_0]))));
                var_12 ^= ((/* implicit */unsigned long long int) ((long long int) ((int) ((unsigned short) (signed char)-126))));
                var_13 |= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) ((short) (_Bool)1))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((long long int) ((_Bool) ((unsigned long long int) var_5)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            {
                var_15 &= ((/* implicit */unsigned short) ((short) ((unsigned long long int) ((unsigned int) (unsigned short)18))));
                arr_9 [10U] [i_3] = ((short) (unsigned short)65515);
                var_16 &= ((/* implicit */int) ((unsigned char) ((unsigned short) ((long long int) -4866676096350656776LL))));
            }
        } 
    } 
    var_17 = ((short) ((long long int) ((_Bool) var_2)));
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                {
                    var_18 &= ((short) ((unsigned long long int) (_Bool)1));
                    arr_21 [16ULL] [i_5] [i_5] [i_6 - 3] = ((/* implicit */signed char) ((unsigned int) ((short) ((short) var_9))));
                    arr_22 [i_5] [i_5] = ((short) ((signed char) ((unsigned long long int) var_6)));
                }
            } 
        } 
    } 
}
