/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127482
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) (!(((((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0))))) >= (((((/* implicit */unsigned int) 1025091018)) - (var_14)))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((short) var_7))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */int) (signed char)-104);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) var_6);
                            arr_21 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min(((short)511), (((/* implicit */short) arr_0 [i_0] [i_0 - 1]))))) >= (((((/* implicit */_Bool) -756870901)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_6] [i_1 - 1] [i_2] [i_0 - 2]))))));
                            var_19 = ((/* implicit */unsigned int) var_9);
                            var_20 *= ((/* implicit */short) ((((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)-15)), ((unsigned short)28672))), (((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 1]))))) > (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)15)) : (var_8))) == (((/* implicit */int) arr_17 [i_0 - 3] [i_0 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_9 [i_1 - 1] [i_0 + 2]))))) - (((((/* implicit */_Bool) 287151085U)) ? (-756870894) : (((/* implicit */int) (signed char)-124))))));
                            arr_25 [i_7] &= ((/* implicit */unsigned int) min(((~(var_1))), (((((/* implicit */_Bool) -3957005802557425727LL)) ? (((/* implicit */int) arr_17 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1])) : (((/* implicit */int) var_3))))));
                            var_21 -= ((/* implicit */int) ((unsigned char) min((((/* implicit */int) (short)-13193)), (arr_2 [i_1 + 2]))));
                            arr_26 [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_5])) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)6378)) / (((/* implicit */int) (signed char)-15))))))));
                        }
                    }
                    arr_27 [i_2] [i_1] [i_0] = ((/* implicit */short) (((-((-(((/* implicit */int) arr_10 [i_1] [i_0] [i_2] [i_0] [i_1 - 2])))))) - (((/* implicit */int) ((((((/* implicit */int) (signed char)-78)) - (756870900))) == (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) -2147483645))))))))));
                }
            } 
        } 
    } 
    var_22 = var_0;
}
