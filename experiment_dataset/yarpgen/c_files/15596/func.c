/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15596
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (13390712385947437408ULL)))) ? (min((var_13), (((/* implicit */long long int) (signed char)56)))) : (((/* implicit */long long int) (-(var_7)))))), (((long long int) 1116892707587883008ULL)))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (signed char)25)), (16742553813323955939ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) 15300827676792967886ULL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((18446744073709551615ULL), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -899583150000137491LL)) : (18446744073709551615ULL))))))));
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2147483647) : (((/* implicit */int) (unsigned short)3))))) ? (min((16865428127379745227ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967295U)), (var_13))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */short) var_12);
                    var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_0))))))) : (((((/* implicit */_Bool) ((unsigned int) (short)32761))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) var_14)) : (94161808U)))))));
                    var_24 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1344478707U)), (8581545984LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (4103714458U) : (((/* implicit */unsigned int) 649802794))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3841379323270778509LL)))))), (((((/* implicit */_Bool) ((long long int) (unsigned char)65))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))) : (((unsigned long long int) 1099503239168LL))))));
                    arr_14 [i_4] [i_3] [i_3] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)32766))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (4294967295U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)-815)), (-1591398541))))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (var_12) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))))));
                }
            } 
        } 
    } 
}
