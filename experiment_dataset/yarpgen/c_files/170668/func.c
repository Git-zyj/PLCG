/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170668
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
    var_20 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (var_7) : (((/* implicit */int) (unsigned char)126))))) || (((/* implicit */_Bool) var_19))))) / (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) ((min((((/* implicit */int) (unsigned char)134)), (min((280113632), (((/* implicit */int) arr_1 [i_3])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((short) -16777216))))))));
                                var_22 = ((/* implicit */unsigned char) ((-280113633) + ((~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4 + 4] [i_4 + 2] [i_4] [i_4] [i_4]))))));
                                arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_4 - 2] [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4])) != (-280113633)))) - (((/* implicit */int) ((((((/* implicit */int) arr_9 [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))) >= (((/* implicit */int) (unsigned char)129)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_19))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)17])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (arr_8 [15LL]) : (((/* implicit */int) min((arr_4 [3ULL] [i_1] [(unsigned short)17]), ((unsigned char)120))))))));
            }
        } 
    } 
}
