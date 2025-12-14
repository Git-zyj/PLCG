/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109189
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
    for (int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 6633402546311641832ULL)) ? (((/* implicit */long long int) ((((((-456538001) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0 + 1])) - (25037))))) >> (((-1981975833595030476LL) + (1981975833595030492LL)))))) : (max((((((/* implicit */_Bool) arr_0 [i_2] [19U])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32753))) : (-1981975833595030476LL))), (((/* implicit */long long int) 456538016))))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 5183686748970201560LL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (min((((((/* implicit */_Bool) (short)32446)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((0U) - (3799122327U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (min((arr_6 [i_0 - 3] [i_2] [i_2 + 2] [i_2 - 1]), (arr_6 [i_0 - 3] [i_2] [3U] [i_2 - 1])))));
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_20 = ((((/* implicit */_Bool) arr_10 [i_3] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (arr_10 [i_3] [i_0 - 2] [i_3] [i_0 + 4]) : (arr_10 [i_3] [i_0 - 4] [i_0] [i_0 + 1]));
                            arr_17 [(_Bool)1] [10] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1479078294U)) || (((/* implicit */_Bool) var_19)))));
                            arr_18 [i_0 + 3] [i_1] [i_3] [i_0] [i_1] [4ULL] [i_1] |= ((/* implicit */_Bool) ((((_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 4]))) : (((long long int) arr_16 [i_0] [i_4]))));
                            arr_19 [i_0] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
                        }
                        for (int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            arr_22 [i_3] [i_4] [6ULL] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8ULL)) ? (var_1) : (((/* implicit */int) (_Bool)1))))) : (3090389053U)));
                            arr_23 [i_0] [(_Bool)1] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (3799122327U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19142))))))));
                        }
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            arr_27 [i_0 + 1] [i_1] [14U] [i_3] [16U] [i_7] [i_0 + 1] = ((/* implicit */int) ((short) var_11));
                            arr_28 [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                            arr_29 [i_0] [i_0] [i_1] [i_3] [i_4] [i_3] = (i_3 % 2 == 0) ? (((arr_20 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 1] [18]) << (((arr_14 [i_3] [i_3]) + (1539836452))))) : (((arr_20 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 1] [18]) << (((((arr_14 [i_3] [i_3]) + (1539836452))) - (1488012972)))));
                            arr_30 [i_4] [i_1] [i_1] [i_4] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (arr_14 [i_1] [i_0 + 3]) : (arr_14 [i_4] [i_0 - 2])));
                            arr_31 [i_0 - 1] [i_0 - 1] [i_3] [i_3] [i_4] [i_7] = ((/* implicit */long long int) var_17);
                        }
                        var_21 -= ((/* implicit */short) arr_24 [i_3]);
                        arr_32 [i_0 - 2] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) (+(((-9223372036854775802LL) ^ (-1981975833595030481LL)))));
                        arr_33 [i_3] [i_3] = (i_3 % 2 == 0) ? (((arr_5 [i_0] [i_0 - 2] [i_3 + 3] [i_3]) >> (((arr_26 [i_3] [i_3] [i_3]) - (609592317U))))) : (((arr_5 [i_0] [i_0 - 2] [i_3 + 3] [i_3]) >> (((((arr_26 [i_3] [i_3] [i_3]) - (609592317U))) - (2198688957U)))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        var_22 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((-6605605846177513010LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        arr_37 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((1981975833595030476LL) > (((/* implicit */long long int) arr_14 [i_3] [i_3])))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_41 [i_0] [i_1] [i_3] [5LL] [i_8 + 1] [19LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1] [i_8]))));
                            var_23 = ((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9] [i_3] [i_1] [i_0])) && (((/* implicit */_Bool) -1981975833595030476LL))))))));
                        }
                        for (long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                        {
                            arr_44 [i_3] [i_8] [19] [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_12 [i_10] [i_3] [i_3] [i_1] [i_0])) != (arr_38 [i_0 - 1] [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_1 [i_0 - 1] [21ULL]))))) : (((arr_21 [(_Bool)1] [i_1] [i_3] [i_8] [i_3]) % (((/* implicit */unsigned int) arr_43 [i_0 - 3] [i_0] [i_0 - 3] [i_0 + 2] [i_0 + 2] [1ULL]))))));
                            var_24 = ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) 456537988)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (456537988)))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10 + 2] [i_0 + 1] [i_0 + 3])) ? (arr_12 [i_10] [i_10 - 1] [i_10 - 1] [i_0 - 2] [16U]) : (arr_12 [i_10] [(_Bool)1] [i_10 - 1] [i_0 - 2] [(_Bool)1]))))));
                            var_26 += ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            var_27 = ((/* implicit */long long int) (+(arr_14 [i_3] [i_10 + 3])));
                        }
                    }
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-9223372036854775803LL)))) || (((((/* implicit */long long int) 1837129273)) < (9126085714151933278LL)))));
                }
                arr_45 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (min((1981975833595030476LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (_Bool)1)))))));
                arr_46 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1981975833595030476LL))));
            }
        } 
    } 
    var_29 &= ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) ((12504824253274667839ULL) > (var_2))))) * (((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_30 = ((/* implicit */short) 2692432414U);
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) -903180423)) == (0LL)))) + ((-(-456537988))))))));
}
