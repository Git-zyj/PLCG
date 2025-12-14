/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171764
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
    var_11 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 3839206353U)) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_1)))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) < (4294967295U))))) != (min((((/* implicit */unsigned long long int) (unsigned char)229)), (4732837799062803825ULL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) (((-(((3731988899U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1] [i_1])))));
                arr_4 [i_0] [i_0] [9U] = ((/* implicit */long long int) max((((((1778405936654598684ULL) >= (4423295476853051364ULL))) && (((/* implicit */_Bool) ((12544220265410829326ULL) >> (((((/* implicit */int) arr_1 [i_0])) - (46311)))))))), (((152909774100265606ULL) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) - (268173312ULL)))))));
                arr_5 [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((18446744073441378304ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (20)))), (268173317ULL)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (18446744073709551596ULL))) || (((/* implicit */_Bool) arr_3 [i_0 - 2] [(unsigned short)3]))))) < (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) | (7708200889760888288LL))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-11)), (arr_3 [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) || (((((/* implicit */_Bool) 18446744073441378304ULL)) || (((/* implicit */_Bool) (unsigned char)9))))))));
    var_14 = ((/* implicit */unsigned int) var_10);
}
