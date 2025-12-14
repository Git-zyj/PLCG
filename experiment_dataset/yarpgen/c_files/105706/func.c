/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105706
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
    var_13 = ((/* implicit */long long int) min(((short)32276), (((/* implicit */short) ((unsigned char) var_7)))));
    var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((549755813887LL), (var_11)))))) && ((!(((/* implicit */_Bool) -1LL))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((min((max((((/* implicit */long long int) var_12)), (-5576622836413146456LL))), (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((-966978971) + (966978984))) - (13)))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)7)) ? (252157011) : (var_5))) > (-252157011)))))))));
                    arr_9 [i_2] [i_1] [i_0] [i_1] = min((((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)51)))))))), (max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) -3873280985411281345LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (3873280985411281345LL))))) > (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (8907497385935957311ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3873280985411281342LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) max((((min((((/* implicit */long long int) (signed char)121)), (var_11))) & (((((/* implicit */_Bool) 3044042181U)) ? (3873280985411281328LL) : (((/* implicit */long long int) var_10)))))), (max((((/* implicit */long long int) (short)20101)), (3873280985411281342LL)))));
                        var_16 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (_Bool)0)), (252157011)))));
                        var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) % (-252157011)))))), (((((/* implicit */_Bool) 3731423803U)) ? (max((((/* implicit */long long int) var_5)), (-3873280985411281328LL))) : (((/* implicit */long long int) ((unsigned int) var_3)))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -8273778407885916400LL)) : (2357232399778141183ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)0))))))))));
}
