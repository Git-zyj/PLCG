/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189438
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((8851219753192322430ULL), (((/* implicit */unsigned long long int) 1866645841U)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((min((6762235238429279630LL), (((((/* implicit */_Bool) (short)33)) ? (var_12) : (var_8))))), (((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2100960412U))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */int) (short)-28672)) + (2147483647))) >> (((var_19) + (6696571116561009403LL)))))), (min((((/* implicit */long long int) (unsigned short)65528)), (-5344078198066326979LL))))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)33)), ((unsigned short)63365)))), (var_9)))) + (max((((/* implicit */long long int) 2147483641)), (7437617785767993294LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) max((var_5), ((-(((/* implicit */int) (signed char)4))))))) >= (max((((/* implicit */long long int) (signed char)-53)), (((((/* implicit */_Bool) 622916370099654016LL)) ? (var_8) : (((/* implicit */long long int) 15U))))))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 1307036011);
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (3403342001U))), (((/* implicit */unsigned int) min((var_5), (1352502982))))));
            }
        } 
    } 
}
