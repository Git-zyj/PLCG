/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161080
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)80)), ((unsigned short)65099)))), (((unsigned int) var_4))));
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) (unsigned short)3423);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) max((0), (((/* implicit */int) (_Bool)1))))), (-2510416317339749672LL))), (((/* implicit */long long int) max((((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-2)))), (min((((/* implicit */short) (_Bool)1)), ((short)-5960))))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)36);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (5937691958796452892LL))), (((/* implicit */long long int) (-((+(var_3))))))));
    var_15 = ((/* implicit */_Bool) var_1);
}
