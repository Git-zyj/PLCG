/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161396
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-51)), (arr_1 [i_0 - 1]))))));
        var_17 *= ((/* implicit */int) (unsigned char)153);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((15), (((/* implicit */int) var_15))))) ? (((((/* implicit */int) (unsigned char)238)) * (((/* implicit */int) var_10)))) : (((/* implicit */int) max(((unsigned char)255), (arr_1 [i_0 - 1]))))));
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)56236)), (9223372036854775807LL)))) ? (max((((/* implicit */unsigned long long int) ((_Bool) (unsigned short)9315))), (min((((/* implicit */unsigned long long int) var_14)), (8430318261637070422ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_14), (var_11)))) || (((/* implicit */_Bool) ((unsigned char) 10016425812072481194ULL)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((long long int) min((((/* implicit */unsigned long long int) var_14)), (8430318261637070413ULL)))))));
                    var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) 8430318261637070418ULL))) ? (((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) arr_4 [2U] [i_1] [i_1])))))), ((((~(((/* implicit */int) (unsigned short)9276)))) | (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)0))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((long long int) arr_3 [i_0] [i_1]);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_7 [(short)9] [i_0] [i_1])), (var_1))), (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned short) var_9)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [8LL] [i_2])))) : (((unsigned int) (_Bool)1))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) var_13)))))));
        var_23 = ((/* implicit */unsigned char) min((((unsigned short) arr_10 [i_3] [i_3 - 1])), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)221))))) != (arr_10 [i_3] [(unsigned short)9]))))));
        arr_12 [i_3] = ((/* implicit */unsigned char) var_16);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_24 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        var_25 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_4])) && (((/* implicit */_Bool) var_8)))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */signed char) var_4);
                    arr_20 [i_4] [i_4] &= ((/* implicit */short) ((unsigned short) var_9));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [(unsigned char)2] [i_4] [i_4])) * (((/* implicit */int) var_3)))))));
                }
            } 
        } 
        arr_21 [(unsigned char)3] [i_4] |= ((/* implicit */_Bool) arr_13 [i_4]);
    }
    var_27 = ((/* implicit */_Bool) max((((/* implicit */int) max((((short) (_Bool)0)), (((/* implicit */short) var_0))))), (max(((~(((/* implicit */int) var_14)))), (((/* implicit */int) var_5))))));
}
