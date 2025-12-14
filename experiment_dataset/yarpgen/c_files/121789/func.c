/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121789
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-59)) ? (((((/* implicit */_Bool) -7755108166311920429LL)) ? (((/* implicit */int) ((_Bool) -7755108166311920429LL))) : (((/* implicit */int) (signed char)52)))) : (((((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [(unsigned char)6] [(unsigned char)6])) - (arr_3 [i_0] [i_1]))), (((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((signed char) arr_3 [i_1] [i_0 + 2]))))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (short i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        var_20 -= ((/* implicit */long long int) var_10);
                        var_21 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)186)) ? (7755108166311920419LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_18 [i_2] [i_5 - 3])), (arr_15 [i_2] [i_2] [i_2])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_20 [i_3]))) ? (((/* implicit */int) ((_Bool) var_3))) : (((((/* implicit */int) var_11)) + (((/* implicit */int) var_5))))));
                        var_23 = ((/* implicit */unsigned short) 4095ULL);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4] [i_4 - 1])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_0))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) + (arr_21 [i_4] [i_4] [i_4] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_4] [i_2]))) : (arr_21 [i_2] [i_3] [i_3] [i_6] [(_Bool)1])));
                        var_26 = ((_Bool) arr_11 [i_6] [i_4 + 1] [7LL]);
                    }
                    var_27 ^= ((/* implicit */short) ((arr_17 [i_2] [(signed char)5] [i_4 - 2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((-2570562489111661416LL), (((/* implicit */long long int) ((signed char) arr_18 [i_2] [(unsigned short)2])))))));
                }
            } 
        } 
    } 
}
