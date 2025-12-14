/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150751
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
    var_20 ^= ((/* implicit */short) var_15);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-30974))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31332)))))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned char) (_Bool)0);
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((unsigned short) var_14));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            var_23 &= ((/* implicit */short) (((((~((~(((/* implicit */int) (short)-16556)))))) + (2147483647))) << (((((min((((/* implicit */long long int) (-(((/* implicit */int) (short)30973))))), ((~(var_17))))) + (8690256877885598532LL))) - (30LL)))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)34203)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28502))) : (var_7))))), ((+(((/* implicit */int) (unsigned short)12288)))))))));
        }
        var_25 = ((long long int) arr_5 [i_1] [i_1]);
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (((_Bool)0) ? (arr_20 [i_6] [i_3] [i_4] [i_5] [i_6]) : (arr_4 [i_3])))))));
                            arr_23 [i_6] [i_5] [i_4] [i_3 + 1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_14))))) ? (((/* implicit */int) (unsigned short)9869)) : ((+(((/* implicit */int) (short)30974))))))));
                            arr_24 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [12LL] [i_1]))));
                            arr_25 [i_1] [i_3 - 3] [i_3 - 3] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((11869112923142984041ULL) - (11869112923142984027ULL)))))), (arr_21 [i_1 - 2] [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3] [i_3 - 2])) << (((((/* implicit */int) (short)6919)) - (6907))))))));
                            arr_26 [(short)14] [(short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_18), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) min(((unsigned short)31580), (((/* implicit */unsigned short) var_9)))))))) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((unsigned long long int) (unsigned short)33956)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (signed char)35))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_17), (((/* implicit */long long int) var_16)))) >= (((/* implicit */long long int) ((/* implicit */int) (short)17951)))))))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_18 [i_1 - 2] [i_3 + 2] [i_3 - 2])))))));
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_19))))))))));
        var_29 = ((/* implicit */signed char) ((0ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))));
    }
    var_30 *= ((/* implicit */unsigned long long int) (short)28782);
}
