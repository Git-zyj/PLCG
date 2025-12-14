/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185517
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
    var_15 ^= ((/* implicit */unsigned int) ((unsigned short) var_10));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_11 [2ULL] [i_1] [i_2] [i_0] [i_1] [i_1] &= ((/* implicit */int) ((unsigned short) ((short) var_1)));
                        arr_12 [(signed char)7] = ((/* implicit */unsigned char) ((short) 3510678327299848398LL));
                    }
                    var_16 += ((/* implicit */short) arr_5 [i_0] [i_2]);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_1 [i_0] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (short i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            {
                arr_21 [i_5] = ((unsigned long long int) (unsigned short)0);
                var_18 = ((/* implicit */unsigned int) (short)-4096);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    arr_29 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) ((unsigned short) 6LL))));
                    var_19 &= ((/* implicit */unsigned int) ((unsigned short) ((int) (unsigned char)62)));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned long long int) arr_27 [20])) : (var_11))))));
                }
            } 
        } 
    } 
}
