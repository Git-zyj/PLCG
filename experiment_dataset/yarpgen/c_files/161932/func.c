/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161932
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((((~(433704795U))) << (((var_4) - (7998599093566329625ULL))))) >> (((((/* implicit */int) var_0)) - (56))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((signed char)-38), ((signed char)82))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */int) var_2)) >= (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) var_6))))))) | (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                arr_5 [i_1] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((3861262501U), (((/* implicit */unsigned int) (short)-1))))), (16777215ULL)));
            }
        } 
    } 
}
