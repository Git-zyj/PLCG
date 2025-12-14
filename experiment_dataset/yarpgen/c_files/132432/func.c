/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132432
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
    var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-126))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+((-(4611686009837453312ULL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (var_4))) || ((!(((/* implicit */_Bool) arr_7 [i_0] [i_1])))))))));
                var_11 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (signed char)105)) * (((/* implicit */int) (short)-16136)))));
                arr_9 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) -546576628)) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_9))) : (13759184987161749993ULL));
                var_12 = ((/* implicit */int) arr_7 [i_0] [15LL]);
                var_13 += ((/* implicit */unsigned int) max((max(((unsigned short)8806), (((/* implicit */unsigned short) (signed char)-28)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_1)))))))));
            }
            arr_10 [i_0] [5LL] [i_0] = ((/* implicit */_Bool) (unsigned char)133);
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)173))))));
        var_14 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0]) ^ (arr_7 [i_0] [i_0])))), (16ULL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_16 [i_3] = ((min((((((/* implicit */_Bool) (unsigned char)1)) ? (7911031109065908458LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))), (((/* implicit */long long int) 3216359942U)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_4 [(unsigned short)3]))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (short i_5 = 3; i_5 < 19; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 4; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */_Bool) (unsigned short)48941)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)126)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_22 [i_5] [(signed char)0] [i_5])))))))))));
                                var_16 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_6 [i_5 - 1] [i_6 - 4] [i_6] [14])), (var_8))) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((313793261) ^ (((/* implicit */int) (signed char)-56))))), (4063232U))))));
                                var_17 = ((/* implicit */_Bool) 346534906436222067ULL);
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_3] [(unsigned char)19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (-8540173052334140284LL)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) var_6))));
                    arr_28 [i_3] [i_4] = (+(((var_3) ? (var_9) : (((/* implicit */unsigned long long int) -8934178333336555653LL)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_32 [i_3] = min((((/* implicit */int) ((unsigned short) arr_18 [i_3] [i_3]))), (((var_4) ? (((/* implicit */int) arr_18 [i_3] [i_8])) : (((/* implicit */int) arr_18 [i_3] [i_3])))));
            arr_33 [i_3] = ((/* implicit */unsigned short) 0ULL);
        }
    }
}
