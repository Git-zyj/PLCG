/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183091
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) var_11);
        var_14 = ((/* implicit */short) max(((+(((/* implicit */int) (short)22711)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16341)))))));
        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) % (1386245753651040632LL)))))), ((!(((/* implicit */_Bool) (unsigned char)31))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) > (min((((/* implicit */int) (signed char)-52)), (var_10)))));
            arr_5 [i_0] = ((/* implicit */unsigned short) var_10);
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)51)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            arr_7 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0] [i_1]))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((unsigned short) arr_9 [i_0] [(short)14])), (min((var_4), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))), (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned short)6522)) : (((/* implicit */int) (signed char)90))))));
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((short) (+(var_5))));
            var_18 = ((/* implicit */short) min((arr_8 [i_2] [i_2] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_2])) <= (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))))));
            arr_12 [i_0] = ((/* implicit */short) (~(min((max((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])), (var_10))), (((/* implicit */int) var_6))))));
        }
    }
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)6522), (((/* implicit */unsigned short) (signed char)38))))) ? (max((var_9), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)51)))))))));
}
