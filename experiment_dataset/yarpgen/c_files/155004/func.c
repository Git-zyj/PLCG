/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155004
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */short) var_9);
                arr_6 [i_0] = max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (0U) : (10108112U))) >> (((arr_3 [i_1] [i_0]) - (151649106)))))), ((-(arr_4 [i_1]))));
                var_13 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((signed char) 10108095U))) ? (((/* implicit */int) ((unsigned short) 4284859183U))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    var_14 |= ((/* implicit */_Bool) ((10108110U) + (arr_9 [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1])));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (10108095U)));
                    var_16 = ((/* implicit */int) (unsigned char)126);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */int) ((((10108096U) <= (10108115U))) ? (-5267350748269602124LL) : (((/* implicit */long long int) 4284859183U))));
                        arr_13 [i_3] [i_3] = 2655556584U;
                        var_18 = ((/* implicit */int) 14495437128154789038ULL);
                        arr_14 [i_0] [0ULL] [i_1 - 2] [i_2 + 2] [i_3] [i_3 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-258965285087991575LL) : (((/* implicit */long long int) 10108107U))));
                        arr_15 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned short) var_1));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_1 - 1]))));
                        var_19 ^= ((/* implicit */short) var_1);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_20 |= ((/* implicit */unsigned char) (+(10108095U)));
                            var_21 = ((/* implicit */_Bool) -258965285087991598LL);
                        }
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10108093U)) ? (((/* implicit */int) var_3)) : (63)))) ? (((/* implicit */unsigned long long int) (-(0U)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : (((/* implicit */unsigned long long int) 4284859183U))))));
                            var_23 = ((/* implicit */unsigned int) (+(((unsigned long long int) (signed char)-31))));
                            arr_26 [(_Bool)1] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_7])) ? (392940139911685719LL) : (var_0)));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~((-(10108091U))))))));
                            var_25 -= ((/* implicit */unsigned int) 13765736154400249237ULL);
                            arr_30 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_8] = ((/* implicit */short) var_5);
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~(((int) arr_21 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((1073741823ULL) & (arr_28 [i_0] [i_1 - 1] [i_2])))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) % (((/* implicit */int) (_Bool)1))));
                            arr_33 [i_0] = ((/* implicit */short) 4284859196U);
                            var_29 = var_3;
                            var_30 = ((/* implicit */int) var_11);
                        }
                        arr_34 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) 1073741823ULL);
                        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        var_32 = ((/* implicit */unsigned char) ((var_11) >> ((((+(var_10))) - (3228614569179149325ULL)))));
                    }
                }
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (unsigned char)96)), (((arr_28 [i_10] [i_1] [i_0]) + (((/* implicit */unsigned long long int) var_4))))))));
                    var_34 = ((/* implicit */signed char) (unsigned char)71);
                }
            }
        } 
    } 
    var_35 = ((/* implicit */short) ((1073741822ULL) + (8467234052925994121ULL)));
}
