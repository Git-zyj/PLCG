/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115018
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                        var_16 = ((((/* implicit */int) arr_3 [i_2 - 1] [i_0 - 1])) << (((/* implicit */int) arr_5 [i_0 + 1] [i_1])));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -9108201009776532440LL)) && (((/* implicit */_Bool) (unsigned short)39262))));
        var_18 = ((/* implicit */unsigned int) max((var_18), ((+(arr_9 [8LL] [i_0] [(unsigned short)5] [i_0] [i_0 + 1] [i_0])))));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((((unsigned char) 25U)), (((/* implicit */unsigned char) ((arr_3 [i_5] [i_4]) && (((/* implicit */_Bool) (unsigned short)55346)))))));
                var_20 = ((/* implicit */_Bool) max((((/* implicit */short) ((max((((/* implicit */long long int) arr_17 [i_4] [i_5] [i_4])), (var_2))) == (((-6520536345335159235LL) & (-4493844663565340300LL)))))), (min((arr_14 [i_4]), (arr_12 [i_4] [i_5])))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((((/* implicit */int) arr_7 [(unsigned short)15] [i_5] [(unsigned short)15])) + (((/* implicit */int) arr_7 [i_4] [7] [i_6])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), (var_15)))) || (((_Bool) var_12))))) - (1))))))));
                    var_22 = ((/* implicit */long long int) ((min((-1416804181), (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) (+(845346176549891484LL)))) ? (((/* implicit */int) (unsigned short)37945)) : ((~(-592508426)))))));
                    var_23 -= ((/* implicit */_Bool) max((min((592508426), (((/* implicit */int) (unsigned short)62370)))), (((/* implicit */int) (unsigned short)3166))));
                }
                arr_20 [i_4] = (unsigned short)15068;
                var_24 = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
}
