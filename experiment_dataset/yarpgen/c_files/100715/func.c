/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100715
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((int) (+(var_5)))) : ((-(((/* implicit */int) arr_0 [i_0 + 3]))))));
        var_14 = ((/* implicit */unsigned int) min((((int) ((int) arr_0 [i_0]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0])), (var_2)))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))))))));
            var_16 = ((/* implicit */int) max((var_16), (((int) (unsigned char)29))));
        }
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) var_4);
            var_17 += ((/* implicit */short) max((((((/* implicit */_Bool) 9U)) ? (17205012545618025760ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : (1U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_6), (arr_6 [i_0]))), (((/* implicit */unsigned char) ((_Bool) arr_6 [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (arr_3 [i_2] [14])))) : (((long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
        arr_10 [i_0] = ((unsigned int) var_1);
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-((~(max((arr_5 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) var_3)))))))))));
        var_19 = ((/* implicit */unsigned long long int) arr_11 [(unsigned short)5]);
    }
    for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
    {
        arr_18 [(short)16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [13])) : (((/* implicit */int) arr_16 [i_4]))))), (min((var_5), (((/* implicit */unsigned long long int) arr_17 [i_4])))))), (((/* implicit */unsigned long long int) arr_17 [i_4]))));
    }
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)205))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)203))))) : (var_10)));
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)220))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_22 = var_4;
}
