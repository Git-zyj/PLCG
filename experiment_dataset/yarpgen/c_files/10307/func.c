/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10307
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
    var_15 = max(((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14141195271712870046ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) -1919678935)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_6)))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_0 [i_0 - 3])) / (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)25356)))))))));
        var_19 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (338711657U)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 58335264414134743ULL)) ? (((((/* implicit */_Bool) 14141195271712870046ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 4])))) : ((-(((/* implicit */int) var_10))))))) ? (((/* implicit */int) max(((unsigned char)215), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (var_13))))))) : (max((((/* implicit */int) arr_1 [i_0 + 2] [i_0])), ((+(((/* implicit */int) (short)-19344))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_3))))), (max((var_12), (var_13)))))), (max((((/* implicit */unsigned int) var_2)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_10 [i_2 + 2] [i_2 + 1] [i_3] = ((/* implicit */short) (_Bool)0);
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_2 + 2])))) ? (((unsigned long long int) 2714723198U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_3] [i_3] [i_2 + 2])))));
                }
            } 
        } 
    } 
}
