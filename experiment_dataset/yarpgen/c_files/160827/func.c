/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160827
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
    var_12 = ((/* implicit */unsigned char) var_6);
    var_13 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */long long int) 7U)) : (var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((7562407542459559530ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15894)))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */signed char) ((((long long int) var_6)) > (var_2)));
    var_15 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)11528)), (var_5)))) ? (((/* implicit */int) ((_Bool) -366904949388436983LL))) : (min((2121173446), (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) (unsigned short)65535);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-32744)), (12978944218284274534ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) ((((/* implicit */int) (short)-32729)) > (((/* implicit */int) var_10)))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (4294967289U))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 33U)))))))))))));
                            var_17 = ((/* implicit */int) var_3);
                            arr_13 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_0 + 1])), ((signed char)-86))))));
                            arr_14 [i_0] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_5 [i_3])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
