/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175345
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20323)) ? (2775827231U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_19 += ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned long long int) 1519140072U)), (var_15))), (min((8059574356241861078ULL), (var_15))))), (max((max((9454918921547662660ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_6))))));
    var_20 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) (short)-11917)), (1768541045)))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) * (8991825152161888948ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [(unsigned short)8]) : (((/* implicit */unsigned long long int) arr_1 [6ULL])))), (((/* implicit */unsigned long long int) ((var_17) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [1ULL] [15LL] [15LL])))))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_2 - 1])), (min((((/* implicit */long long int) var_7)), (arr_5 [i_0] [i_1] [i_1] [i_0]))))))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((1612998817U) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (arr_3 [(signed char)16] [i_1] [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
