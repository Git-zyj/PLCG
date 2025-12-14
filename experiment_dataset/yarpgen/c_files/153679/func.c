/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153679
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
    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 7753306575895859912ULL)) ? (((((/* implicit */_Bool) 16652173656260538058ULL)) ? (10693437497813691703ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) : (((10693437497813691703ULL) & (16974341635926125782ULL))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (798705352)))), (var_7)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)-10897)), (10693437497813691703ULL)));
                    var_14 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_3))))) : (max((((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)215)))))))));
    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_9))))))))));
}
