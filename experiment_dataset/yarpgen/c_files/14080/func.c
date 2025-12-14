/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14080
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 -= ((/* implicit */signed char) (+(2613336596U)));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(2613336596U)))) ? (((/* implicit */int) (unsigned short)15065)) : (444845692)));
                var_11 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) -444845693))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (-543199613624186244LL)))) ? (arr_3 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) 7200641022925286802ULL)) ? (8209634393552144177LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min(((-(1681630695U))), (((/* implicit */unsigned int) (unsigned short)2496)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_4);
    var_14 |= min((min((((/* implicit */unsigned long long int) (+(var_4)))), (((((/* implicit */_Bool) -444845689)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (444845692))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_6))))))));
}
