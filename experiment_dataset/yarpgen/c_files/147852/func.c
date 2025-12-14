/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147852
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0] [i_0 - 2]))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)241)), (var_3)))))));
        arr_5 [i_0] = var_8;
        var_13 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) var_3)))), (((((/* implicit */int) var_7)) * (((/* implicit */int) (signed char)-88))))))));
        arr_6 [i_0] = (~(((820882457U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((614848893), (((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */int) var_4)) : (var_1)))) || (((/* implicit */_Bool) var_5)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)64893)), (var_0)))) ? (4398046511103ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_6))))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)1147))))))))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)25518))))));
            var_17 += ((/* implicit */long long int) arr_13 [i_2]);
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32596))))) * (((((/* implicit */long long int) ((/* implicit */int) var_3))) * (min((((/* implicit */long long int) var_7)), (6016704130262115685LL)))))));
            var_19 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (short)32766))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)599))) / (-293102502194349117LL))))), (((/* implicit */long long int) var_11))));
        }
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1])))))))));
            arr_17 [i_3] [i_1 + 1] = ((/* implicit */signed char) ((var_10) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) -614848916))))) : ((-(var_12)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_20 [i_1 - 1] [i_4] = var_2;
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6))))) / ((+(452601543U))))))));
            var_23 = ((/* implicit */short) (((~(max((((/* implicit */int) (short)-22684)), (var_12))))) - (var_1)));
        }
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) /* same iter space */
        {
            var_24 ^= ((/* implicit */unsigned int) var_1);
            var_25 = ((/* implicit */unsigned char) var_1);
            var_26 |= ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned char)185), ((unsigned char)247))))));
        }
        arr_23 [i_1] = ((/* implicit */unsigned int) 1935993591596531207LL);
    }
    var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)64934)), (-614848916)))))))));
    var_28 = ((/* implicit */int) max((var_28), ((+(((/* implicit */int) var_3))))));
    var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -1935993591596531228LL)) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-5140653266341688755LL))) : (1935993591596531203LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)143)), ((~(452601523U))))))));
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (((~(var_9))) / ((~(min((((/* implicit */int) (_Bool)1)), (var_9))))))))));
}
