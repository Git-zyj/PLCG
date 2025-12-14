/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156981
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */int) 2916341031U);
                                var_11 = ((unsigned short) max((((/* implicit */long long int) var_0)), (-8476191364390545136LL)));
                                arr_13 [i_1] [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_4] [i_4 - 4] [i_4 - 2])), (var_8)))), (((((/* implicit */int) arr_9 [i_2] [i_2] [5LL] [i_4] [i_4 + 3])) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_4 - 2]))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1378626276U)))) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_5))))) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((_Bool) arr_12 [i_0]))) : (max((((arr_5 [(_Bool)1]) << (((((/* implicit */int) var_8)) - (57018))))), (((/* implicit */int) max((var_5), (var_8))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 268433408U)) ? (var_0) : (((/* implicit */unsigned int) 142253509))))))));
                            arr_18 [19LL] [19LL] [19LL] [19LL] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) -203326157)), (18446744073709551613ULL))) < (((/* implicit */unsigned long long int) max((2916341040U), (((/* implicit */unsigned int) arr_9 [i_1 + 1] [i_5] [9LL] [i_6] [i_6])))))));
                            var_14 = ((/* implicit */unsigned char) var_1);
                            arr_19 [i_6] [i_1] |= ((/* implicit */unsigned short) (~((~(min((var_2), (((/* implicit */unsigned long long int) arr_4 [i_6] [i_1] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (short)1);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) & (((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [(short)4] [i_7] [i_7] [i_7] [i_7]))))) ? ((+(((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6500))) == (arr_20 [i_7] [i_7]))))))));
        var_17 = ((/* implicit */unsigned char) ((min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 732102279U)))), (((/* implicit */unsigned long long int) arr_16 [i_7])))) - (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (unsigned char)105)))))))));
        arr_23 [i_7] [i_7] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) != (((/* implicit */int) arr_7 [i_7] [(signed char)5] [i_7]))))))));
    }
    for (int i_8 = 1; i_8 < 10; i_8 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-20))));
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((arr_10 [i_10] [i_9] [i_8]) < ((-(((/* implicit */int) var_6))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)134)) ? ((~(((((/* implicit */_Bool) arr_31 [i_8] [(signed char)11] [i_8] [i_10])) ? (((/* implicit */long long int) 2826818569U)) : (var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-203326141) | (((/* implicit */int) (short)6503))))) ? (((/* implicit */int) (unsigned char)97)) : (((((/* implicit */int) arr_6 [i_8] [i_8] [11U] [(short)5])) ^ (((/* implicit */int) (short)8382)))))))));
                }
            } 
        } 
        arr_34 [i_8] = ((/* implicit */long long int) arr_9 [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1] [i_8]);
        var_21 = min((var_0), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)38475)), (arr_3 [i_8] [i_8])))) ? (((/* implicit */unsigned int) arr_5 [i_8 + 2])) : (max((1378626256U), (((/* implicit */unsigned int) (unsigned char)255)))))));
    }
}
