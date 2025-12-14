/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125997
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
    var_16 = ((/* implicit */unsigned long long int) 6667628148560178655LL);
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-71))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_0)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))));
    var_18 = ((/* implicit */unsigned short) (signed char)19);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) (((+(var_6))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))))));
                arr_6 [(_Bool)1] [(unsigned char)3] = ((/* implicit */signed char) var_4);
                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_4 [i_1 + 1] [i_0 + 1]), (arr_4 [i_1 + 1] [i_0 + 1]))))));
            }
        } 
    } 
}
