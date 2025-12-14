/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158074
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) min((((/* implicit */int) var_11)), (max((1824966064), (((/* implicit */int) (short)25837))))))) : (min((((/* implicit */long long int) 1824966069)), ((+(var_10))))))))));
    var_18 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) (-((~(arr_1 [i_0])))));
                var_20 -= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))), ((+(max((((/* implicit */int) var_5)), (arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_16);
    var_22 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (max((-8935053704661664223LL), (var_10))))));
}
