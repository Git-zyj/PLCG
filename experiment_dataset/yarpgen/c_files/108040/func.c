/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108040
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_6 [i_2]);
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) 5894272716946262432ULL))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))) : (((((/* implicit */_Bool) 16585797752334156327ULL)) ? (((/* implicit */unsigned long long int) 6880939918665831736LL)) : (15737865937909797055ULL)))));
                    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) arr_5 [i_1])) | (arr_2 [i_2])))))) ? (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (((unsigned int) 35184372088831LL))))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_13))));
                    var_21 = ((/* implicit */signed char) (+((+((+(((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
    var_22 = min(((+(((941027398) | (((/* implicit */int) (short)32735)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
}
