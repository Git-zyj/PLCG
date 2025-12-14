/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134629
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((3016689723U) / (1278277573U)))) ? (((/* implicit */unsigned long long int) ((3016689723U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))))), ((!(((arr_3 [i_0]) || (((/* implicit */_Bool) (unsigned char)255))))))));
                    arr_7 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) ((_Bool) (unsigned char)127))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_22 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) 2290002667U)) ? (((/* implicit */int) (signed char)-50)) : (536870911)))));
                                arr_23 [i_3] [3U] [i_3] [i_4] [i_3] = ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                } 
                arr_24 [i_4] [i_4] = ((/* implicit */unsigned short) ((arr_0 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_4] [i_3])))));
                arr_25 [i_4] = ((/* implicit */unsigned char) var_6);
                var_12 = ((/* implicit */unsigned int) (-(-536870911)));
                arr_26 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((signed char) (signed char)-6)))))));
            }
        } 
    } 
}
