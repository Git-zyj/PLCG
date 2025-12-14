/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105426
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
    var_10 += var_9;
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((max((-7804433110867429561LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) <= (((((((/* implicit */_Bool) var_9)) ? (7804433110867429560LL) : (((/* implicit */long long int) var_1)))) | (((long long int) var_7)))))))));
    var_12 = ((/* implicit */_Bool) (+((((_Bool)1) ? (max((274877906943ULL), (((/* implicit */unsigned long long int) 568913053U)))) : (((/* implicit */unsigned long long int) ((int) 3892561598U)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) (short)1023)) | (((/* implicit */int) max(((!(((/* implicit */_Bool) 3766093401051255886ULL)))), ((_Bool)0)))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(14680650672658295730ULL)));
            var_14 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -100418533)) ? (arr_0 [i_1]) : (var_8)))))));
        }
        arr_6 [(signed char)0] &= ((/* implicit */unsigned char) min((min((1661038649U), (((/* implicit */unsigned int) min((arr_2 [(signed char)10] [i_0]), (((/* implicit */short) (unsigned char)206))))))), (((/* implicit */unsigned int) arr_3 [i_0]))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) min((var_15), (arr_10 [i_2])));
        var_16 *= (+((~(arr_8 [i_2]))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) max((((var_8) - (var_8))), (16361015336327671283ULL))));
        var_17 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) ((unsigned short) -8976701042122997377LL)))), (-7804433110867429556LL)));
    }
}
