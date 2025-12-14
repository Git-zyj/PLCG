/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180153
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (723671240U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (short)-31484)), (3566060467U))) | (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_3 [i_1] [(_Bool)1] [i_1])), (var_6)))) ? (((4294967292U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                arr_7 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((int) var_5)))), (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))));
                arr_8 [16] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_1] [5LL] [i_1 + 2]);
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((unsigned int) var_0));
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        for (long long int i_3 = 4; i_3 < 19; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                {
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((24U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_8))))) : (((unsigned int) min((((/* implicit */unsigned long long int) arr_13 [i_2 + 1])), (var_4))))));
                    arr_16 [i_4] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) min((var_3), (((/* implicit */int) (short)-16525))))) / (min((((/* implicit */unsigned int) (short)-16525)), (4294967267U))))), (((/* implicit */unsigned int) arr_0 [(unsigned char)4] [i_4]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_14 = (short)16514;
                                arr_23 [i_6] [i_3 - 1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_7))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((((_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
