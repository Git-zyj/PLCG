/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160522
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
    var_20 = ((/* implicit */unsigned char) ((2507952938390020317LL) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((min((arr_1 [i_0]), (((int) 2507952938390020305LL)))), (((((/* implicit */int) (short)-32527)) + (((/* implicit */int) var_17))))));
                    var_21 = ((/* implicit */int) max((var_21), (max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9122)) / (((/* implicit */int) var_3))))) ? (((((/* implicit */int) (short)32530)) << (((/* implicit */int) arr_2 [i_1] [i_2])))) : (((/* implicit */int) min(((short)-32541), ((short)32527)))))), (((/* implicit */int) ((_Bool) 4294967295U)))))));
                    var_22 = (unsigned char)175;
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) (short)-32527)), (14116344208655299083ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-32527))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-28)) * (((/* implicit */int) (short)32755))))))))));
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-13)) : (1694804113)))) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) -1694804111))))))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) (short)-29297)))))) : ((-(var_10)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12899)) ? (1694804113) : (((/* implicit */int) (unsigned char)162))));
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)12886), (((/* implicit */short) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 39375496)) ? (((/* implicit */int) (short)32735)) : (((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */_Bool) 673256784U)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (short)-32736))))))) ? (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)12))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned short)2047)))), (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_4)) : (var_10))))))));
    }
    var_26 = ((/* implicit */unsigned int) ((var_19) == (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)12899)))), (1694804103))))));
}
