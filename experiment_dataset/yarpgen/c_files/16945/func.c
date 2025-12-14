/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16945
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
    var_19 = ((/* implicit */unsigned char) ((-2147483631) >= (((/* implicit */int) ((unsigned char) ((short) var_1))))));
    var_20 = ((/* implicit */unsigned int) ((6104831186052404349LL) + (-6104831186052404360LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) -6104831186052404358LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_16))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (-1822183935))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) -2147483632))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 -= ((/* implicit */unsigned int) ((((6104831186052404348LL) << (((((/* implicit */int) var_17)) - (32))))) & (((/* implicit */long long int) ((/* implicit */int) ((6104831186052404371LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))))))));
                    arr_8 [i_0 + 4] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (6104831186052404379LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    var_24 = ((/* implicit */signed char) ((3261466979277305076LL) >= (((/* implicit */long long int) -2147483632))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_17 [i_5] = ((unsigned char) ((6104831186052404360LL) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */long long int) max((var_16), (((/* implicit */unsigned int) var_17))))) : (max((((/* implicit */long long int) 0U)), (var_7)))));
                        /* LoopSeq 2 */
                        for (int i_7 = 4; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_26 &= ((/* implicit */unsigned char) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)44)) > (((/* implicit */int) var_3)))))))));
                            var_27 = ((/* implicit */short) ((long long int) var_12));
                        }
                        for (int i_8 = 4; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((long long int) max((-6104831186052404364LL), (6104831186052404399LL)))))));
                            var_29 |= ((((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned int) 6104831186052404349LL))))) & (max((((/* implicit */long long int) var_5)), (((-501862239102402424LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) * (5U)))));
                        }
                        var_31 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (9U)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_18))) ^ (3U)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (4000179540U)))) ? (-6104831186052404364LL) : (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))))));
                    }
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) max((((((4294967295U) % (11U))) | (6U))), (((/* implicit */unsigned int) ((-2147483631) > ((-2147483647 - 1))))))))));
                    var_33 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */long long int) max((2097024U), (452292360U)))) > (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (var_8)));
                }
            } 
        } 
    } 
}
