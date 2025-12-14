/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148756
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)20446)), (arr_6 [i_0] [i_1] [0])))))) && (((/* implicit */_Bool) arr_2 [i_1]))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 1; i_3 < 7; i_3 += 1) 
    {
        arr_14 [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3 + 3] [i_3 + 1]))))) ? ((-(min((((/* implicit */long long int) 2147483638)), (2003061371604910316LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */short) -2147483636);
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_21 += (unsigned short)65535;
        var_22 &= ((/* implicit */unsigned long long int) arr_18 [i_4]);
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) - (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((var_2) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) ((_Bool) 2147483635))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)602))) : (var_15))))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_22 [i_5]))));
                arr_26 [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_4) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) arr_23 [i_5]);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_21 [i_8 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_8 + 2])) >= (((/* implicit */int) arr_21 [i_8 + 2]))))))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_17 [i_5] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
