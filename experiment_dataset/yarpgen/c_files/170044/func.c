/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170044
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
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
    var_15 = ((/* implicit */int) min(((~(min((var_9), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) (+((+(((/* implicit */int) (short)-1152)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)24576))))))));
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-1165)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24601))))))) ? (((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : ((~(min((((/* implicit */long long int) var_5)), (var_9)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [(_Bool)1] [5U] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)10))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_6] [i_5] [i_6 - 1] [i_5] [i_0] = ((/* implicit */unsigned char) ((((_Bool) ((_Bool) (short)1151))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23392))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))))) : (min((var_6), (((/* implicit */long long int) ((unsigned char) (_Bool)1)))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) ? (max((((/* implicit */long long int) -188457696)), (10LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((unsigned int) var_0))) || ((!(((/* implicit */_Bool) (signed char)0))))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) var_8);
}
