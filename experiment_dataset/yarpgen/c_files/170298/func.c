/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170298
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 ^= ((/* implicit */long long int) var_4);
                            arr_11 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)2963)) && (((/* implicit */_Bool) arr_3 [i_1] [i_2 - 3])))));
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 2]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_15 = arr_13 [(unsigned char)4] [i_1] [i_4 - 1] [i_4 - 1];
                            var_16 = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 22; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_26 [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned char)173), (((/* implicit */unsigned char) var_6)))))));
                    var_17 = ((/* implicit */signed char) var_5);
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)44)) || (((/* implicit */_Bool) (unsigned char)144))));
                }
            } 
        } 
    } 
}
