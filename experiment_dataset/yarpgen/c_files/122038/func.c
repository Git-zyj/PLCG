/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122038
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
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)34173)), (max((4151626500U), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31362))) | (1848831084U)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2268373952U)) ? (max((((/* implicit */int) var_0)), (arr_3 [i_0]))) : (((/* implicit */int) ((signed char) arr_9 [i_3] [i_3] [i_3] [i_3])))));
                            var_14 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)45193)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)12))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2413798395U)) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)9])) : (-2001648199)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned short)8] [10] [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_3]))) : (6778577070565578749LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = (unsigned char)255;
    var_16 = ((/* implicit */long long int) ((unsigned char) var_0));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (3761155371U)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)32756), (((/* implicit */short) (unsigned char)158)))))) : (var_7)))) || (((/* implicit */_Bool) (unsigned short)31349))));
}
