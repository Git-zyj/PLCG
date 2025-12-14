/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118922
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)-89)) % (((/* implicit */int) arr_1 [i_0]))));
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)105), (((/* implicit */unsigned char) arr_2 [i_0] [i_1])))))))) / (((/* implicit */int) ((unsigned char) (+(var_5))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((signed char) var_5));
    var_12 = ((/* implicit */_Bool) max((var_12), (var_4)));
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) * (var_2))) == (min((((/* implicit */unsigned int) (_Bool)0)), (var_2)))))), (((unsigned char) ((int) (_Bool)1)))));
}
