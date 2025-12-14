/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165472
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (unsigned char)205))));
    var_14 = ((/* implicit */long long int) (unsigned char)67);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_15 = var_0;
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((((long long int) (signed char)87)) <= (arr_1 [i_0 - 3] [i_1 - 1])));
            arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)89)) * (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_1 - 1])) > (((/* implicit */int) (signed char)18)))))));
            var_17 = ((/* implicit */_Bool) arr_3 [i_1]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_2]))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (_Bool)0))));
        arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)87)) >> (((((/* implicit */int) (signed char)-100)) + (109)))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [12])) && (((/* implicit */_Bool) (signed char)101)))))));
        arr_9 [i_2] [i_2] = (_Bool)0;
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */long long int) arr_10 [i_3] [(_Bool)1]);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)6))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))));
        var_21 = ((/* implicit */int) var_0);
        arr_14 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) : (arr_12 [i_3])));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_28 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) arr_15 [i_6] [i_7])) : (var_3))) << (((var_10) - (6202337811640966432ULL)))));
                        arr_29 [i_7 - 1] [i_4] [i_5] = ((long long int) 9223372036854775807LL);
                    }
                } 
            } 
        } 
        var_23 = (signed char)78;
    }
    var_24 = ((_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1))))) << (((var_7) - (6397713333415342579ULL)))));
}
