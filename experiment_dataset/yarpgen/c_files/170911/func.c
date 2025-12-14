/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170911
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
    var_18 += ((/* implicit */unsigned int) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = (-(((((/* implicit */_Bool) var_4)) ? (var_3) : (var_17))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((~(((/* implicit */int) var_12))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((!(var_12))) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9))) : (((/* implicit */unsigned long long int) var_0)))))));
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */unsigned short) ((unsigned int) 1847411440U));
    }
    var_22 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_23 = ((/* implicit */short) (~((+((+(var_10)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_7))))))), (var_13)));
                    var_25 = var_0;
                    arr_20 [(unsigned short)13] [i_5] [i_5] [i_4] = ((/* implicit */short) var_12);
                }
            } 
        } 
    } 
}
