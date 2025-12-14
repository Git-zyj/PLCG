/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163501
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */int) max((((long long int) ((unsigned char) arr_4 [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [3])) ? (((/* implicit */unsigned int) -1416654027)) : (var_9)))) : (((unsigned long long int) arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_13 [i_4] [i_4] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((int) max((((/* implicit */long long int) 3038051762U)), (0LL))));
                            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((int) (-(((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */long long int) (+((~(((/* implicit */int) var_5))))))) != (max((-22LL), (((/* implicit */long long int) (unsigned short)0)))))))));
                            var_19 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned char) ((_Bool) 0LL))), (arr_16 [i_7] [i_3]))));
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_3 - 1] [i_2 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_0);
}
