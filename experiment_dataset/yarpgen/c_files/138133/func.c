/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138133
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-651)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7456)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (144115188008747008ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (144115188008746984ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)6)), ((unsigned short)57929)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 144115188008747008ULL)))) : (min((var_14), (var_7))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)62790)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) arr_2 [i_1])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((((min((((/* implicit */unsigned long long int) (unsigned short)4096)), (18302628885700804607ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (248U)))))), (max((min((144115188008747008ULL), (((/* implicit */unsigned long long int) 4294967047U)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)57929))))))));
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((/* implicit */unsigned long long int) var_14);
}
