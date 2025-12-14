/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109771
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */short) (signed char)-66);
                    var_19 *= ((/* implicit */unsigned long long int) max(((((+(1022630245))) - (((/* implicit */int) arr_1 [i_2])))), ((+(((-680526819) + (-1022630237)))))));
                    var_20 = ((/* implicit */unsigned long long int) 8170714750379115112LL);
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) ((4131810551171837651ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
}
