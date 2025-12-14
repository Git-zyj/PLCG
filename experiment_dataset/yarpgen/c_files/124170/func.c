/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124170
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) var_6))) : ((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-13044))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1843511451304078296LL)) ? (-1843511451304078280LL) : (1212290909908621544LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) (unsigned char)215)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2])))))))));
                            var_13 = ((/* implicit */unsigned int) ((unsigned char) arr_3 [i_1] [i_1 - 1]));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */int) arr_8 [i_1 - 2] [i_2])) >= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1] [i_2])) ? (arr_6 [i_1 + 2] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_1 [i_0] [i_1 + 1]) ? (((/* implicit */int) var_0)) : (var_5)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
}
