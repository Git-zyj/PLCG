/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156594
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)-41));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) (signed char)-1);
                            arr_13 [(signed char)12] [i_2] [(signed char)14] [i_2] [i_2] |= ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_11 [i_0] [i_2 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0] [i_2 + 1])) + (93)))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((_Bool) max(((unsigned short)20292), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 3] [i_2 + 1])) - (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 3] [i_2 - 3])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)-16)) : (arr_0 [i_0]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_1]))) : (max((((((/* implicit */_Bool) arr_3 [0] [i_0])) ? (-1589193401) : (1734541878))), (((/* implicit */int) arr_10 [(signed char)10] [(signed char)10] [(signed char)10]))))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (arr_3 [i_0] [i_0]) : ((+(-1037087199)))))));
            }
        } 
    } 
}
