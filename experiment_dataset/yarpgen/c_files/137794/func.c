/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137794
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (9215599940160293304ULL))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) arr_12 [i_2 - 1] [i_3] [i_4 + 1] [i_3] [1]))), (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_3 - 2] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_3 - 2] [i_4 + 1] [i_4]))) : ((-9223372036854775807LL - 1LL))))));
                                var_18 = ((unsigned char) ((min((0ULL), (((/* implicit */unsigned long long int) var_2)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) 1773911105))))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_2 [i_4]) >> (((2344530777U) - (2344530754U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_8 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 2]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (arr_3 [i_0]) : (var_0))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (~(((int) ((unsigned int) 35668911119502923LL)))));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_13 [i_5] [i_6 - 1]))) ? (arr_7 [i_6 + 1]) : (((/* implicit */unsigned long long int) max((2608421034U), (var_0)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_5] [i_5] [i_7]) != (((/* implicit */unsigned long long int) 4294967289U)))))) | (((unsigned int) 283188349U)))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38202)))));
                            var_24 = ((/* implicit */unsigned long long int) (+(min((arr_4 [i_8 - 2] [i_8 + 2] [i_8 - 2]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7])))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) arr_17 [i_5] [i_5] [i_6]);
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 6305553030002139330LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27203))) : (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 15439330938983308532ULL))) ? (max((var_5), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))));
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_13)));
}
