/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118122
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-(((int) 2165460476559343275ULL)))))));
                                var_13 = ((/* implicit */unsigned short) arr_10 [i_0] [i_4 + 1] [i_3 + 1] [i_0]);
                                arr_15 [i_0] [(unsigned short)8] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) arr_6 [i_3] [(_Bool)1]);
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(arr_4 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((signed char) var_10)))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) 2165460476559343246ULL))) > (((/* implicit */int) var_9))))) : (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [0U]))) * (arr_13 [i_0] [17U] [i_1] [17U] [14U])))))));
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)53597)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned char) var_4);
}
