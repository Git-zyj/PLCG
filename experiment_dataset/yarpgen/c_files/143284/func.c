/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143284
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
    var_11 = var_0;
    var_12 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_2 + 1] [i_2] [i_1 - 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0] [i_1])), (arr_0 [i_2 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1])) && (((/* implicit */_Bool) var_4))))) : ((+(((/* implicit */int) arr_5 [(short)10])))))) >= ((~(((((/* implicit */int) (signed char)10)) ^ (((/* implicit */int) var_7))))))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(min((((/* implicit */unsigned int) max((arr_3 [(signed char)13] [i_1 + 2]), (arr_4 [i_2])))), ((+(596117420U))))))))));
                    var_14 = ((/* implicit */short) (-(((((/* implicit */int) ((short) arr_5 [i_1]))) ^ (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) >= (var_10)))), (var_4))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((signed char) ((((/* implicit */_Bool) min((1048624503U), (arr_22 [i_3] [i_3] [i_4] [i_4] [i_5 - 1] [i_6])))) || (((/* implicit */_Bool) (short)2830)))))));
                        }
                    } 
                } 
                arr_25 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_2))))) : (((/* implicit */int) min((((/* implicit */short) arr_24 [i_3] [i_3] [i_4])), ((short)3))))))));
            }
        } 
    } 
}
