/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167814
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
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_5)) : (((unsigned int) var_0)))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45290)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1359957244U)) < (11454697347484882289ULL))))))) ? ((((!(((/* implicit */_Bool) var_1)))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) arr_1 [11U]))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-28004))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11454697347484882262ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))), (arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        arr_5 [i_0] = ((((1166997130U) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)22686)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) ? (min((var_9), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)43145))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
            arr_10 [(unsigned char)2] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)242)), (1202316777)));
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            {
                var_12 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) var_3))))))))));
                var_14 = var_3;
            }
        } 
    } 
}
