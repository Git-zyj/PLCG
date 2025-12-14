/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134416
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
    var_20 = ((/* implicit */short) min((0U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_18)))))));
    var_21 = var_16;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_22 = -13;
        var_23 = ((/* implicit */unsigned long long int) max((min((4294967295U), (((/* implicit */unsigned int) (unsigned char)242)))), (((/* implicit */unsigned int) min((arr_0 [i_0 + 3] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 3]))))));
        var_24 -= arr_0 [i_0] [i_0];
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                var_25 = ((/* implicit */_Bool) ((((max((((/* implicit */unsigned int) var_13)), (4294967289U))) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (arr_5 [i_0] [i_1] [i_1 + 2] [i_2]))))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) == (arr_4 [i_0 - 2] [11] [i_2 + 2])))) : ((~(2147483647))))) : (arr_6 [i_0] [i_0] [i_0] [i_0 + 1])));
                arr_7 [i_2] [i_1] [i_1] [i_0 - 2] = ((/* implicit */int) ((4294967279U) / (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_3 [i_0])))))));
                arr_8 [(_Bool)1] [18] [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((((2490385840258087159LL) != (((/* implicit */long long int) arr_4 [i_0 + 1] [(short)1] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (arr_6 [(_Bool)1] [i_1] [i_1] [i_2])))) : (((2269814212194729984LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))))) >> (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_2])), (var_10)))))))));
            }
            var_26 = ((/* implicit */unsigned char) 6895167228440902021LL);
            arr_9 [i_0 - 3] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((var_14) - (((/* implicit */int) arr_1 [i_0]))));
            var_28 = ((/* implicit */_Bool) (~(-2269814212194729985LL)));
            var_29 = ((/* implicit */int) var_8);
            var_30 = ((/* implicit */unsigned char) (-(arr_11 [(short)17] [i_3] [16U])));
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            arr_14 [i_0] [(short)0] = var_8;
            arr_15 [i_0 - 2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 3])))) ? (((((/* implicit */_Bool) min((-1273215942), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-68)) : (249350187))) : (arr_4 [i_0 - 1] [0] [i_4 + 1]))) : (((/* implicit */int) max((max(((_Bool)1), (arr_2 [i_0] [i_4 + 1]))), ((_Bool)1))))));
        }
        var_32 *= ((/* implicit */unsigned char) var_9);
    }
    var_33 *= ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)219)))) != ((~(((/* implicit */int) (short)-17565)))))))));
}
