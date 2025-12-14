/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149661
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
    var_14 = ((/* implicit */signed char) var_9);
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min(((unsigned short)17423), (((/* implicit */unsigned short) var_7))))))) == (((/* implicit */int) ((((((/* implicit */int) (signed char)47)) - (((/* implicit */int) (unsigned short)23912)))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) arr_1 [6U] [i_0])))), (((/* implicit */int) var_5)))) & (((/* implicit */int) ((((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) < (((/* implicit */int) min((arr_0 [i_0]), ((unsigned short)41623)))))))));
        arr_3 [i_0] [17U] = ((/* implicit */short) 2755257655U);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1]))));
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_2))), ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0 - 1]))))));
                }
            } 
        } 
        arr_10 [i_0] = var_7;
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (-(arr_11 [i_3 + 2] [i_3])));
        arr_14 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((4294967295U) <= (2410851164U))))));
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 17; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33082)) ? (((/* implicit */int) arr_2 [i_3])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3])) : (((/* implicit */int) var_6))))));
            arr_18 [i_3] = ((/* implicit */unsigned short) (signed char)-101);
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            arr_25 [i_3] [i_3] [i_3] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32756))) <= (2988885200U)));
                            var_21 -= ((/* implicit */signed char) arr_2 [10U]);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) (unsigned short)3790)) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64639)) && (((/* implicit */_Bool) (short)-773))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 3; i_8 < 17; i_8 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_2)))) == (((/* implicit */int) ((unsigned short) arr_2 [i_3])))));
            var_24 = ((/* implicit */short) (~(((/* implicit */int) (short)11631))));
            arr_29 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
            var_25 = ((/* implicit */unsigned int) var_10);
            arr_30 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3789))) : (1306082114U)));
        }
        arr_31 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-19481))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-122)) || (((/* implicit */_Bool) var_2))));
}
