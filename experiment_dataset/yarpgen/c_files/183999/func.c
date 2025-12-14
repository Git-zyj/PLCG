/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183999
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
    var_14 = ((/* implicit */short) max(((~(min((((/* implicit */int) (signed char)-101)), (var_3))))), (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) var_5)) - (((int) 7962748611108006035ULL)))))));
        /* LoopSeq 4 */
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) (-(arr_4 [i_0] [i_1] [i_1 - 2])))))));
            var_16 = ((/* implicit */unsigned char) arr_3 [(unsigned char)9] [i_1 - 3] [(unsigned char)9]);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) var_0);
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_20 [(signed char)4] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)64760)) ? (var_6) : ((~(((/* implicit */int) var_5))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_3] [i_4]))));
                            var_19 -= ((/* implicit */unsigned short) 7962748611108006035ULL);
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 3; i_6 < 9; i_6 += 2) /* same iter space */
        {
            var_20 &= ((/* implicit */unsigned short) ((41210153) * (((/* implicit */int) ((3534030014U) == (2353783936U))))));
            arr_25 [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_6] [i_0]))))), (min((((/* implicit */unsigned int) arr_11 [i_0] [i_0])), (arr_8 [i_0] [i_6] [i_6])))))) - (((((/* implicit */_Bool) arr_9 [i_0] [i_6 + 1] [i_0])) ? (arr_19 [1ULL] [i_0] [i_0] [i_0] [i_6] [i_6 - 1] [i_6]) : (arr_19 [i_0] [i_0] [(signed char)8] [i_0] [i_0] [i_0] [i_0])))));
        }
        for (short i_7 = 3; i_7 < 9; i_7 += 2) /* same iter space */
        {
            arr_28 [i_0] [i_7 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 7962748611108006035ULL)) ? (10483995462601545571ULL) : (10483995462601545580ULL)));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 10)) ? (-1) : (((/* implicit */int) (unsigned char)115))));
        }
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        arr_31 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_8))))));
        arr_32 [i_8] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42905))) | (arr_29 [i_8]))), (((/* implicit */unsigned long long int) ((signed char) arr_29 [i_8])))));
    }
}
