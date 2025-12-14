/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134454
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = (+(max((arr_2 [i_1 + 4] [i_1 + 4] [i_2 - 1]), (arr_2 [i_1 - 1] [i_0] [i_2 - 1]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                        {
                            var_15 &= max((arr_11 [i_2 - 1] [i_2 - 2] [21ULL] [i_2 + 2] [i_2 - 1] [i_2 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(3032084425419659803LL)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 4]))))));
                            var_16 |= ((/* implicit */long long int) max((((1152921504606846944ULL) ^ (((/* implicit */unsigned long long int) 3491934432U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)480))))));
                            var_17 = ((/* implicit */signed char) arr_5 [i_4] [i_1] [i_4]);
                            var_18 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1565492784U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20179))) : (-3117366005795357156LL))) >= (((/* implicit */long long int) var_8))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [7LL])) && (((/* implicit */_Bool) arr_13 [17ULL] [17ULL] [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) var_6)))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) min((((/* implicit */unsigned short) var_3)), (var_6)))))));
                            var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) arr_6 [i_3] [i_1 + 3] [i_2]))))))) || (((/* implicit */_Bool) max((arr_4 [i_2 + 4] [i_1 + 1]), (arr_4 [i_2 + 1] [i_1 + 1]))))));
                            var_23 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) max((1565492776U), (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_2 - 2] [i_3] [i_0] [i_0] [i_3])))))))));
                            var_24 = ((/* implicit */unsigned char) ((max(((~(2892861005U))), (((/* implicit */unsigned int) var_13)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_25 *= ((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_7]);
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_8)), (min((arr_8 [i_1 + 2] [i_1 + 2] [i_2 - 1] [i_2 - 2]), (((/* implicit */long long int) (!(var_5))))))));
                            arr_22 [i_7] [i_1] = ((/* implicit */signed char) (+(((long long int) arr_12 [i_0] [i_2 - 1] [i_1 + 2] [i_7] [i_0]))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned char) var_2);
        var_28 = ((/* implicit */unsigned long long int) (+(680126132414692447LL)));
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) arr_7 [i_8] [i_8])) - (163)))))) ? (((((/* implicit */_Bool) arr_2 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_13)) : ((((+(((/* implicit */int) var_13)))) >> ((+(((/* implicit */int) var_13))))))));
        var_29 *= ((/* implicit */unsigned char) (+(max((var_8), (((/* implicit */unsigned int) arr_23 [i_8]))))));
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 22; i_9 += 1) 
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9 - 1]))) % (arr_29 [i_9 + 1])));
        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_9 + 1] [i_9 + 1]))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_9 + 1] [i_9 - 1])) + (((/* implicit */int) var_3))));
        arr_30 [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_29 [i_9]))))));
    }
    var_33 = ((/* implicit */unsigned long long int) var_12);
}
