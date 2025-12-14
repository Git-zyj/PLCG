/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120310
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (unsigned char)58))));
                    var_13 = ((/* implicit */short) var_3);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)4096))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_7)))))), (max((((/* implicit */unsigned long long int) (-(var_9)))), (min((((/* implicit */unsigned long long int) var_3)), (var_8))))))))));
    var_15 = ((/* implicit */unsigned char) ((short) (-((-(var_8))))));
    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) < (4294967285U)))) < (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11507))) <= (16921677968333456360ULL))))))));
}
