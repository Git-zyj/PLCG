/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181162
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(signed char)12] [i_2] [i_2 + 1])) || (((/* implicit */_Bool) max((arr_7 [(_Bool)1] [i_2] [i_2 + 1]), (arr_7 [(_Bool)1] [i_2] [i_2 + 1]))))));
                    var_22 += ((((/* implicit */_Bool) (~(max((arr_4 [(unsigned char)12]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))))) && (((/* implicit */_Bool) (unsigned short)20907)));
                }
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned short)20903))));
            }
        } 
    } 
    var_24 = (+(((((/* implicit */_Bool) 12919713772811951469ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))));
    var_25 = var_10;
    var_26 = ((/* implicit */int) 5527030300897600162ULL);
}
