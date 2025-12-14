/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127803
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((((_Bool)0) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16867))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)14336)) : (324765834))))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_3 [16U])))) & (((/* implicit */int) arr_3 [i_1 - 1]))))));
                var_14 = ((/* implicit */short) var_6);
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_1 + 4] [i_1 - 1]), (arr_4 [i_1 + 2] [i_1 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 4] [i_1 + 4])) >= (((/* implicit */int) (_Bool)1))))) : (((int) arr_2 [16]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_2 + 1]), (13978764269055088196ULL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 + 1])))))));
        arr_8 [(unsigned short)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_2]))));
        arr_9 [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)61221))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (_Bool)1);
        arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)36726)) == (((/* implicit */int) (_Bool)1)))))) / (min((((/* implicit */unsigned long long int) (unsigned short)55123)), (arr_10 [i_3 + 2])))));
    }
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)13312))))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
}
