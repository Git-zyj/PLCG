/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105615
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
    var_13 = ((/* implicit */int) (+(min((((((/* implicit */_Bool) var_2)) ? (529674115U) : (((/* implicit */unsigned int) -1506491574)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (short)24279)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [6] = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))), (((((/* implicit */_Bool) 3843007714U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12189)))))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((int) (-(((/* implicit */int) (unsigned char)118))))) == ((-(((/* implicit */int) (unsigned char)0)))))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_8)))))))) ? (arr_5 [i_1 - 1] [i_1] [i_0]) : (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (2418102289U) : (max((529674113U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_3 [i_0] [(unsigned char)9])), ((+(var_1))))), (min((((var_9) ^ (((/* implicit */int) arr_4 [i_1] [i_0])))), (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
}
