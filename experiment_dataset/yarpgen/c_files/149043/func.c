/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149043
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
    var_12 = ((/* implicit */int) max((var_12), (((int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) (-(((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (var_6))) - (3118808935820441573LL)))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)52)) / ((+(((((/* implicit */int) var_10)) * (((/* implicit */int) var_2))))))));
                    var_15 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) + (-3118808935820441574LL)));
                }
                arr_7 [i_0] = ((/* implicit */signed char) (((-(var_11))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((3118808935820441573LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))))) * (arr_0 [i_1 + 2] [i_0 + 2]))))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36068)) >> (((((/* implicit */int) ((unsigned short) (unsigned short)44343))) - (44340)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) (short)-4422)) + (4450))) - (27)))));
}
