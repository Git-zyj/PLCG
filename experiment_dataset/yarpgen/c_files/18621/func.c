/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18621
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                var_15 += ((/* implicit */unsigned char) var_2);
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_0])), (var_12)))) ? (((arr_1 [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) : ((~(var_0)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((((int) var_5)) < (2147483615)));
                            arr_10 [i_3] [i_2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) 8384512U));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_4))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4286582784U)), (2097151LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) 1792303539)), (2097159LL))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = var_2;
    var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_0)))) ? (((var_0) & (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)))))));
}
