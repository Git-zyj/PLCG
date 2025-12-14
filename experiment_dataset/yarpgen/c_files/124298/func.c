/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124298
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1934461854U) : (1369205513U)))) ? (((var_11) ? (2925761755U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)29543)))))))) : ((((!(((/* implicit */_Bool) var_1)))) ? (min((10177079371340150998ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min(((+(-1312116132))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)-29564))) || (((/* implicit */_Bool) var_9)))))));
                    arr_10 [i_1] [i_1 - 1] [2ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)4)), (var_10))))));
                    arr_11 [i_0] [i_2 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_10)))))));
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (short)32745)) != (((/* implicit */int) (short)32757))))), ((~(((/* implicit */int) var_5)))))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_8 [i_0] [5ULL]) : (((/* implicit */long long int) -527946719))))) ? (((/* implicit */int) (short)29532)) : (((/* implicit */int) var_1))))) ? (((1369205539U) << (((1369205518U) - (1369205488U))))) : (((/* implicit */unsigned int) ((2147483647) >> (((((/* implicit */int) (unsigned char)217)) - (207)))))))))));
                }
            } 
        } 
    } 
}
