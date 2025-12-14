/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160602
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) max(((short)32759), (var_4)))) ? ((~(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1821895713U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32750))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((long long int) var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (arr_2 [i_0] [i_1])));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (short)32767)) : ((~((+(((/* implicit */int) arr_0 [i_0])))))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32734))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 3933312258U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32750))))) : (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_5))))))));
                var_16 = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) >> (((-1827150346) + (1827150373)))))));
                var_17 = ((short) (signed char)82);
            }
        } 
    } 
    var_18 = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((var_5) / (((/* implicit */int) var_8))))))), (var_6)));
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (signed char)64)) & (((/* implicit */int) (short)-1614)))))))));
}
