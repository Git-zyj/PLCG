/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152391
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)55)) : (var_8)));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            var_12 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (signed char)46))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)66)))) : (((/* implicit */int) var_2))))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) var_10))), ((~(-8906812767380493068LL)))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_1 - 2] [i_1] [i_0])))))))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (signed char)-16))));
        }
        var_15 -= ((/* implicit */_Bool) (signed char)0);
    }
    for (int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((arr_8 [0]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)36716))))))))));
                    var_17 ^= ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (arr_8 [i_2 - 3]) : (((arr_8 [i_2 + 4]) | (arr_8 [i_2 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_2] [i_3] [18U] [i_5] [i_3] [i_6 - 1] |= ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_7)), ((+(((/* implicit */int) arr_22 [i_3] [i_5] [i_3] [i_4] [i_3] [i_3] [i_2 - 3]))))))));
                            arr_24 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4))))), (min((((/* implicit */unsigned int) -1700526039)), (max((var_1), (var_1)))))));
                            arr_25 [i_2] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-110)), ((unsigned short)56852))))) % (var_1)));
                        }
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            var_18 += ((min((((/* implicit */unsigned int) arr_22 [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 2] [i_2] [i_2 - 2] [i_2])), (0U))) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 4]), (arr_15 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 3]))))));
                            var_19 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3432545517185128587LL)))))) >= (var_3));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) & (min((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_8))))), (((-4517161139176501208LL) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 + 4] [i_3] [i_2 + 4]))))))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_21 |= ((/* implicit */int) ((signed char) ((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                            arr_33 [i_2] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) max((min(((unsigned short)65520), (((/* implicit */unsigned short) (unsigned char)4)))), (((/* implicit */unsigned short) arr_11 [i_2 - 2]))))) % (((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_11)), (arr_21 [i_4])))))));
                            var_22 *= ((/* implicit */unsigned int) var_11);
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_23 -= ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)25357))))) == (((/* implicit */int) var_10)));
                            var_24 = ((/* implicit */unsigned int) (unsigned short)0);
                        }
                        arr_36 [i_2] [i_2] [i_4] [i_5] [i_5] [i_3] = var_5;
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    var_25 ^= ((/* implicit */unsigned char) min((((3229536231U) / (((/* implicit */unsigned int) ((512) & (((/* implicit */int) (unsigned short)65532))))))), (2219494630U)));
                    var_26 *= ((/* implicit */_Bool) arr_30 [i_11] [i_10] [i_2 + 1]);
                    arr_43 [6] [i_10] [i_10] [i_11] &= ((/* implicit */_Bool) ((long long int) min(((~(((/* implicit */int) var_5)))), (((((/* implicit */int) var_10)) << (((/* implicit */int) arr_38 [i_2 + 3] [i_10])))))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        arr_46 [i_12] = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((_Bool) var_5))) * (((((/* implicit */int) var_10)) * (((/* implicit */int) var_2))))))));
        arr_47 [i_12] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)65531)), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 3600479802U))))), (max((((/* implicit */long long int) var_1)), (-4405790696522268428LL)))))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)-55)))))))));
    }
    var_28 = ((/* implicit */_Bool) min((((6000333769922623061LL) - (((/* implicit */long long int) (+(((/* implicit */int) (short)-21467))))))), (((/* implicit */long long int) var_1))));
    var_29 |= var_1;
}
