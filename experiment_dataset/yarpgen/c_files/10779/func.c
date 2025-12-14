/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10779
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1920)) % (((/* implicit */int) ((short) var_9)))))) ? ((-(((/* implicit */int) max((var_1), (((/* implicit */short) (unsigned char)12))))))) : (((/* implicit */int) arr_9 [i_1]))));
                                var_12 ^= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)-1929)) > (((/* implicit */int) ((arr_13 [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))))))));
                            }
                        } 
                    } 
                    var_13 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1921)) ? (-815777805070761873LL) : (arr_13 [i_0] [i_1] [(unsigned char)6])))) ? (max((arr_13 [(short)10] [i_1] [i_0]), (arr_13 [i_0] [i_1] [i_2]))) : (((arr_0 [i_2]) - (arr_0 [i_1]))));
                    arr_15 [i_0] [(short)11] [i_0] [i_0] = ((((/* implicit */int) arr_2 [i_2] [i_2])) > (((/* implicit */int) ((max((-815777805070761873LL), (((/* implicit */long long int) (short)14765)))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((((/* implicit */short) var_3)), ((short)-1939)));
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (var_7)));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_1)));
}
