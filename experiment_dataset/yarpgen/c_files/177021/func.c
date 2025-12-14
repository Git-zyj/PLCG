/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177021
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
    var_13 *= ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))), (((min((((/* implicit */unsigned long long int) 785803475U)), (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), ((+(min((var_8), (((/* implicit */unsigned long long int) var_7)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2077417541221298467ULL)) ? (1175099231U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))) ? (((max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) || (((/* implicit */_Bool) 921644087U)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_1])))))))));
                var_16 &= ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) ^ ((+(3119868059U))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17683)) * (((/* implicit */int) (signed char)32))))) : (max((((/* implicit */unsigned long long int) (unsigned short)36494)), (arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_1);
}
