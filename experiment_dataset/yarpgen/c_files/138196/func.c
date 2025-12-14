/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138196
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) (+((-(((/* implicit */int) (unsigned short)65535)))))))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_4 [i_0 - 1] [i_0 - 1])))));
                var_21 = ((short) var_10);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */int) var_11)), (((int) var_10)))), ((-(((/* implicit */int) var_17))))));
    var_23 = (unsigned short)11454;
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) ((((_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) | (-7117323801321123615LL)))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) + (((/* implicit */int) (signed char)62))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */long long int) min((var_26), ((-(min((arr_3 [i_3]), (arr_3 [i_3])))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)15)), (3512481463U)))), (((((/* implicit */_Bool) arr_0 [i_3])) ? (-7732970993829755055LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_3] [i_3])))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_3])))) + (((/* implicit */int) (unsigned short)11454)))))));
        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)60)) | (((/* implicit */int) arr_5 [i_3] [i_3]))))))));
    }
    var_31 = ((/* implicit */unsigned char) ((signed char) var_15));
}
