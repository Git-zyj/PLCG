/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128488
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-39))))), (var_8)));
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(1661014229)));
        arr_4 [i_0] = -1661014230;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-39))));
                    arr_11 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_2]))) || (((/* implicit */_Bool) min((1661014215), (-1661014219)))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)7))))) | (((((/* implicit */_Bool) 4380056371321004961LL)) ? (((/* implicit */unsigned long long int) 2554523901U)) : (15724244958770566091ULL)))))));
        var_21 += ((min(((~(-1661014213))), ((((_Bool)0) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (short)-30448)))))) >= (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) min((var_3), (var_15)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_17 [(_Bool)1] = ((/* implicit */_Bool) (~(1442529285821040054ULL)));
        arr_18 [(unsigned char)18] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    }
}
