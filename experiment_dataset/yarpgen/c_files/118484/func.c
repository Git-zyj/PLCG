/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118484
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)76)) ? (12745705476288301200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16742)))))), (min((max((15207499292252493178ULL), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (6345309246523293095LL))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / ((+(var_0)))));
    var_12 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) (unsigned char)55)))), (((68719476735LL) <= (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)183), ((unsigned char)179)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [9LL] [i_0] = ((/* implicit */short) var_0);
                var_13 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) var_2)))));
            }
        } 
    } 
}
