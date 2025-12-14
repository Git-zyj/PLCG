/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142847
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (signed char)-34))))), (576460752303292416ULL))))));
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max(((signed char)(-127 - 1)), ((signed char)68)))) ? (var_1) : (((/* implicit */long long int) min((3570341836U), (((/* implicit */unsigned int) (unsigned char)28)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((/* implicit */int) max((min((((/* implicit */short) (signed char)102)), ((short)-1))), (((/* implicit */short) ((5668225833770082534ULL) != (((/* implicit */unsigned long long int) var_8)))))))), (((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? ((+(var_10))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (var_8) : (((/* implicit */int) arr_3 [i_0] [i_1])))))))))));
                arr_4 [i_0] [i_1] = ((((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])) << (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))) ^ (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)21389))))) ? (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */long long int) arr_1 [i_0]))))) : (((/* implicit */int) arr_2 [i_1 - 1] [11ULL])))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 + 1])), (78483294477616367LL))), (((min((arr_0 [i_0]), (((/* implicit */long long int) var_5)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2413509902U)) <= (576460752303292416ULL)))))))));
            }
        } 
    } 
}
