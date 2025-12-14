/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155201
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
    var_11 = ((/* implicit */signed char) var_4);
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */signed char) (+(var_6)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) max((arr_0 [i_0]), ((!(((/* implicit */_Bool) (signed char)-124))))));
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_1 [i_0]))))), ((+(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) 3800896169494039198ULL);
                        var_17 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2])))) * (((/* implicit */int) var_5))));
                        arr_10 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(3800896169494039198ULL))))));
        }
        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) 3800896169494039198ULL);
            var_19 = min((max((((/* implicit */int) arr_8 [i_0] [(unsigned short)18] [(unsigned short)18] [i_0])), (((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) arr_1 [i_0])))))), ((+(min((((/* implicit */int) arr_5 [i_0])), (arr_12 [i_0]))))));
            arr_14 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((8191U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 - 2] [i_4 - 1] [i_4 - 2])))))), (arr_4 [i_0] [i_4 - 2])));
        }
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
        {
            arr_18 [i_0] = arr_1 [i_0];
            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_5 + 1] [i_5] [i_5 + 1] [i_0]))));
            var_21 = ((/* implicit */unsigned short) (signed char)124);
            arr_19 [i_0] [i_0] = (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])));
            arr_20 [i_0] [i_5] [i_5] = ((/* implicit */signed char) (unsigned char)67);
        }
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)188)))))));
    }
    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
    {
        var_23 = ((/* implicit */long long int) (+(min((-1), (((/* implicit */int) arr_1 [i_6 + 2]))))));
        arr_24 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_6 + 1] [i_6] [i_6 - 1]))));
        arr_25 [i_6] = ((/* implicit */int) (signed char)-117);
    }
    var_24 = ((/* implicit */unsigned int) var_4);
}
