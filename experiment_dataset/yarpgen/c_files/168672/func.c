/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168672
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) -4170657507781510362LL);
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) min(((signed char)30), (((/* implicit */signed char) (_Bool)1)))))))), ((-(((/* implicit */int) (signed char)-41)))))))));
                            var_15 = ((/* implicit */short) var_9);
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_1]) + (((((/* implicit */_Bool) -2078614385979652371LL)) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_1])))));
                var_16 = (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (4129122372U))))));
}
