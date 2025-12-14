/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141990
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
    var_14 = ((/* implicit */_Bool) var_13);
    var_15 = ((/* implicit */unsigned short) -1500750288);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) && ((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51273)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)1))))), (((arr_0 [(unsigned char)14] [(unsigned char)14]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))))) || (((/* implicit */_Bool) -2098259356))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-16553)) * (((/* implicit */int) (signed char)28))))) ? (((/* implicit */int) (!(arr_3 [(unsigned short)8] [i_2 + 1] [i_2])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) min(((+(arr_10 [i_0] [i_2] [i_4]))), (((/* implicit */unsigned int) -1500750281)))))));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((3801250178U), (((/* implicit */unsigned int) (signed char)-22))))) && (((/* implicit */_Bool) (unsigned short)51291))));
                                var_19 = ((/* implicit */signed char) min(((unsigned short)51291), ((unsigned short)45705)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
