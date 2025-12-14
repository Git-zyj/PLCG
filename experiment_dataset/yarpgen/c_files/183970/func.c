/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183970
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) >> ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-2735844142617400723LL)))))));
    var_20 = ((/* implicit */unsigned short) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-29563)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23533)) ? (7603750810156223504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))) * ((+((((_Bool)0) ? (16502422488995568252ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                        var_22 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_5 [i_2] [i_3] [i_3 - 4]))))));
                        arr_10 [i_3] [i_3 + 1] [i_2] [i_3] [i_3] |= 1209094619;
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1209094619)) ? (((/* implicit */int) (_Bool)1)) : (1209094630))) + (((((/* implicit */_Bool) 3827088293U)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (arr_4 [i_0] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0])))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) 16480302847262085650ULL)) && (arr_0 [i_0])))))))));
        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2760150520039794486ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))) : (((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_5)))))))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_19 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_5] [i_4] [i_4]))));
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_0)) ? (arr_17 [(_Bool)1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))))))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || ((!(((/* implicit */_Bool) (unsigned short)27204)))))))));
                }
            } 
        } 
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (max((((/* implicit */long long int) arr_6 [i_4] [i_4] [i_4])), ((~(arr_11 [i_4])))))));
        var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_4 - 2] [i_4] [i_4]))))));
    }
    var_27 ^= ((/* implicit */short) var_14);
    var_28 |= ((/* implicit */short) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_17)), (6654042257200277097ULL))))))));
}
