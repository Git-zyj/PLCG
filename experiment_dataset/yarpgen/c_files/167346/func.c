/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167346
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (signed char)69))));
        var_20 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3309012064165223135ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23592)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_6);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) arr_6 [i_1])), (min((var_13), (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        arr_7 [8] [16LL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) arr_1 [i_1] [i_1])) - (16086)))))) ? (((((/* implicit */_Bool) (short)-9524)) ? (((/* implicit */int) (unsigned short)5606)) : (((/* implicit */int) (unsigned short)512)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), ((unsigned short)65024)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) max(((unsigned short)65024), (((/* implicit */unsigned short) arr_5 [i_1])))));
    }
    var_22 -= ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((short) 3362644371U));
                                arr_20 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_3]))));
                                arr_21 [i_2] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned int) (short)24576));
                                arr_22 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) ((long long int) 0U));
                                arr_23 [i_2] [i_5] [i_3] [i_6] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned short)512)), (arr_19 [i_2] [i_3] [i_4] [i_5] [i_6]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                            }
                        } 
                    } 
                    arr_24 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65024))))) > (((((/* implicit */int) (short)30976)) - (((/* implicit */int) var_3)))))) ? (var_13) : (((/* implicit */int) arr_13 [i_2] [i_3] [i_3]))));
                }
            } 
        } 
    } 
    var_24 = var_11;
}
