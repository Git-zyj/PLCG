/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104659
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)8))));
                    var_16 -= ((/* implicit */short) ((long long int) (~((~(((/* implicit */int) arr_5 [i_1] [i_2])))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [16LL])) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) arr_4 [(signed char)0]))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? ((+(((/* implicit */int) arr_2 [i_3])))) : ((~(((/* implicit */int) (unsigned char)88))))))) && (((/* implicit */_Bool) (unsigned char)46))));
        var_19 += ((/* implicit */short) (+(((/* implicit */int) var_15))));
        arr_12 [i_3] = arr_7 [i_3] [i_3] [(signed char)3];
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_20 += ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_3] [i_5]))))))));
                        var_21 += (-(((/* implicit */int) var_11)));
                    }
                } 
            } 
        } 
    }
}
