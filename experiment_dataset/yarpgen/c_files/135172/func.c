/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135172
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((unsigned char) ((((/* implicit */_Bool) ((int) var_1))) || (((/* implicit */_Bool) (unsigned char)79))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_6)))), (min((var_0), (var_12)))))));
                    arr_8 [i_0] [14LL] [14LL] [i_0] = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)203);
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            {
                var_15 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                var_16 -= ((/* implicit */unsigned short) ((var_12) < (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-3)))))));
                var_17 += ((/* implicit */long long int) var_12);
                var_18 *= ((/* implicit */long long int) ((short) ((var_6) == (((/* implicit */long long int) ((var_3) * (((/* implicit */int) (unsigned char)0))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned int) max((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_4 + 3] [i_4 + 4] [i_4 + 3]))))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 2486340169U)))))))));
                            var_20 *= ((/* implicit */unsigned short) arr_17 [i_3] [i_3] [i_3] [i_5] [i_5] [i_6]);
                            arr_19 [i_4 + 2] [i_3] = ((/* implicit */signed char) max((((5262422536767832848LL) >> (((((/* implicit */int) var_4)) - (131))))), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_5)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) (short)-27094))))));
                    var_22 &= ((/* implicit */unsigned long long int) ((_Bool) ((((unsigned long long int) (unsigned short)33738)) + (((/* implicit */unsigned long long int) (-(arr_11 [i_8] [i_8])))))));
                }
            } 
        } 
    } 
}
