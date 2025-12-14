/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159637
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_11 [0LL] [i_0] [0LL] [i_2] [i_2] [15LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_6 [i_1])))), (((arr_9 [8LL] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (arr_8 [i_0] [(signed char)13] [i_0] [i_0])))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-9352)))) : ((-(((/* implicit */int) (unsigned short)5445))))));
                            var_14 -= (-(((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned short)16] [i_1] [i_2] [i_3])) == (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [(unsigned char)20])) ? (862130978) : (arr_6 [i_0])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned long long int) max(((~(4263196915610765472LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_13))))))))));
            }
        } 
    } 
    var_15 -= (!(((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)109)))) == (((/* implicit */int) max((((/* implicit */short) var_4)), ((short)-31600)))))));
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 = ((/* implicit */short) min((((/* implicit */signed char) var_0)), ((signed char)-93)));
}
