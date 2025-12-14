/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168538
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((max((arr_2 [i_1 + 1] [i_0 - 1]), (arr_2 [i_1 + 1] [i_0 - 1]))), (((/* implicit */unsigned char) arr_5 [i_0 - 1] [i_0 - 1]))));
            arr_6 [i_0 - 1] [i_1] = min((max((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0 - 1] [i_1 + 1]))), (((/* implicit */short) min(((_Bool)0), (((((/* implicit */int) var_12)) > (((/* implicit */int) (signed char)-11))))))));
            arr_7 [i_1] = max((((/* implicit */unsigned char) min((var_10), (((/* implicit */signed char) ((((/* implicit */int) var_12)) == (((/* implicit */int) (short)-15409)))))))), (arr_2 [i_0] [i_0]));
            arr_8 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) min((max((((/* implicit */int) (_Bool)0)), ((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        }
        for (short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            var_21 = ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (max((-417539143), (((/* implicit */int) ((((/* implicit */int) var_12)) > (-2147483643)))))) : ((~(((/* implicit */int) arr_9 [i_2 + 2] [i_0 - 1])))));
            arr_13 [i_0] [i_2 + 3] = ((/* implicit */short) ((int) var_7));
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) arr_1 [i_0] [i_0])), (var_17))))), (((/* implicit */int) (!((_Bool)1))))));
        arr_15 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min(((signed char)-51), ((signed char)89))), (var_2))))));
        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) >= (1887333488)))), (arr_1 [i_0 - 1] [i_0 - 1])))) != (min(((-(-1441564394))), ((+(((/* implicit */int) var_3))))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((max((arr_1 [i_3 - 1] [i_3 - 1]), (max((((/* implicit */short) var_8)), (arr_3 [i_3 - 1] [i_3 - 1]))))), (var_19))))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1])) ^ (((/* implicit */int) (signed char)-20)))) | ((((_Bool)1) ? (((arr_12 [i_3 - 1]) + (var_16))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)7)) : (var_16)))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_24 += ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((short)1055), ((short)29842)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_2 [i_4] [i_3 - 1])))) : (((arr_19 [i_4]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))), (((((((/* implicit */int) var_4)) == (((/* implicit */int) var_7)))) ? (((/* implicit */int) arr_19 [i_3 - 1])) : (((/* implicit */int) var_15))))));
            var_25 -= ((/* implicit */_Bool) (~(min((((((/* implicit */int) arr_2 [i_3] [i_3])) | (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) (short)1034))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_30 [i_3] = ((/* implicit */short) (+(((/* implicit */int) var_15))));
                        arr_31 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_24 [i_3 - 1] [i_3] [i_3] [i_6 - 1])) : (((((/* implicit */int) arr_29 [i_5 + 2] [i_6 - 1])) / (((/* implicit */int) arr_20 [i_5 + 3] [i_3]))))))));
                        arr_32 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */signed char) min((min((((/* implicit */int) (short)-1035)), (((-1887333488) / (((/* implicit */int) arr_25 [i_3] [i_3] [i_3])))))), ((~(((/* implicit */int) arr_5 [i_3] [i_5 - 1]))))));
                    }
                } 
            } 
        }
    }
    var_26 -= ((/* implicit */int) var_1);
}
