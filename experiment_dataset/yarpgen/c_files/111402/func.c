/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111402
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
            arr_8 [i_0] [i_1 - 3] [i_1 - 3] = ((/* implicit */unsigned char) var_1);
        }
        for (unsigned char i_2 = 3; i_2 < 8; i_2 += 4) /* same iter space */
        {
            arr_12 [i_0] [i_2 + 1] = ((/* implicit */signed char) arr_10 [i_0] [i_2]);
            var_16 = ((unsigned char) (_Bool)1);
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 3] [i_2 - 1])), ((+(((/* implicit */int) (unsigned char)73)))))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)182)))), (((((/* implicit */_Bool) (signed char)127)) ? (arr_10 [i_0] [i_2]) : (((/* implicit */int) (_Bool)1))))))))));
            var_19 = ((/* implicit */signed char) max((((unsigned short) (unsigned char)203)), (((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned short) (_Bool)0)), (arr_11 [i_0] [i_0] [i_0])))))));
        }
        for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) /* same iter space */
        {
            arr_15 [i_3] = max((((/* implicit */short) (unsigned char)246)), ((short)-23465));
            arr_16 [i_3] [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 + 2] [i_3])) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3])) : (((/* implicit */int) (signed char)-1)))));
            var_20 = ((/* implicit */int) (!(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_3])) : (((/* implicit */int) var_7)))) > (max((var_12), (((/* implicit */int) (_Bool)1))))))));
            var_21 = ((/* implicit */unsigned char) ((2147483647) < (((/* implicit */int) (_Bool)1))));
        }
        arr_17 [i_0] = max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56996));
        var_22 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) var_15))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_18 [i_4]))) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) var_9)))))))));
        arr_21 [i_4] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_18 [i_4])) : (var_12))), ((-(((((/* implicit */_Bool) (unsigned char)243)) ? (-25) : (((/* implicit */int) (signed char)90))))))));
        arr_22 [i_4] = ((/* implicit */signed char) ((short) (signed char)33));
        var_23 = ((((/* implicit */int) max(((signed char)-105), (((/* implicit */signed char) (_Bool)1))))) == (((/* implicit */int) ((unsigned char) arr_19 [i_4]))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_8))))));
}
