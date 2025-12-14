/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171103
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
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)65535);
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = max((((/* implicit */unsigned int) (_Bool)1)), (4145005553U));
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 149961743U)), (1827748323132153076ULL)));
        var_19 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), ((((~(min((13359531476246911618ULL), (((/* implicit */unsigned long long int) var_5)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)56596)))))))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) | (32767ULL)));
}
