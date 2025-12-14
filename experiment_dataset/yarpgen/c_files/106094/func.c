/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106094
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
    var_15 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((((/* implicit */int) (short)5401)) ^ (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 1206703904U)))))))), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))) / (5631854667454751916LL))), (((/* implicit */long long int) ((((/* implicit */long long int) 2409240108U)) >= (-5018697692753227477LL))))))));
                var_17 = ((/* implicit */long long int) 2114393448U);
                arr_4 [i_1] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (5112585448549748349LL))) / (((/* implicit */long long int) ((((/* implicit */int) (short)10833)) | (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)187)) ^ (((/* implicit */int) max((max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)204))), (((/* implicit */unsigned char) (signed char)116))))))))));
}
