/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143610
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_12)))))))));
                var_16 &= ((/* implicit */unsigned char) ((unsigned short) min((min((var_5), (var_5))), (((/* implicit */unsigned long long int) arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_17 = var_9;
                            var_18 = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)10] [(unsigned short)8] [i_0] [i_0 - 1] [i_0])))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_10))))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))), (min((var_3), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_8 [(unsigned char)7] [i_1]), (((/* implicit */signed char) var_0))))), (max((((/* implicit */long long int) (unsigned short)1)), (0LL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((_Bool) min((var_6), (((/* implicit */long long int) var_7))))), (var_8)));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -223065296)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (0ULL)));
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        for (signed char i_5 = 3; i_5 < 24; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    arr_18 [i_4] = var_10;
                    arr_19 [(signed char)7] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483647)) ? (((var_0) ? (var_4) : (((/* implicit */int) (short)14350)))) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
