/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122085
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59750)) + (((/* implicit */int) (unsigned char)122)))))))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (arr_1 [i_0] [i_0])))) * (((/* implicit */int) (signed char)99))))));
                    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)142), (((/* implicit */unsigned char) (signed char)24))))), (((var_6) - (((/* implicit */int) (unsigned char)58)))))))));
                    var_13 = max((((arr_0 [i_1 + 2] [i_1]) ? (10674023195232857999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3602159025U)) || (((/* implicit */_Bool) -1627085076))))));
                    var_14 = ((/* implicit */signed char) max((((4294967287U) << (((((/* implicit */int) (unsigned char)201)) - (179))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)-31315)) >= (var_6)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) 1494716824U)), (var_3))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (19)))), (-2530105613256282482LL))))));
}
