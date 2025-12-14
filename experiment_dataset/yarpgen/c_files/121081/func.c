/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121081
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((min((6559118895645023426ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6559118895645023426ULL))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (6559118895645023426ULL) : (6559118895645023439ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (17390295503312571501ULL))))))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) * (((((/* implicit */_Bool) (unsigned short)46725)) ? (11887625178064528188ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) >> (((/* implicit */int) var_0)))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524224U)) ? (2147483647) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) 526299414U)) || (((/* implicit */_Bool) var_0)))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((6559118895645023428ULL) << (((((/* implicit */int) (unsigned char)187)) - (185))))))))));
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 1832443782U)) ? (((/* implicit */int) (short)-23315)) : (((/* implicit */int) arr_1 [i_1 + 1])))) + (-1696963256)))) - (((arr_1 [i_1 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (263356219439210971LL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)204)), (((((/* implicit */_Bool) (unsigned char)208)) ? (6559118895645023441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52341)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56170))) : ((+(526299414U))))))));
                            var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) 268419072U)) ? (((/* implicit */long long int) 1982659900)) : (-3528762507880025150LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [12] [i_2] [i_3 + 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(short)6])) ? (((/* implicit */int) arr_8 [(_Bool)1] [(unsigned short)3] [(_Bool)1] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3 + 3])))) : (((/* implicit */int) (unsigned char)224))));
                        }
                    } 
                } 
            }
        } 
    } 
}
