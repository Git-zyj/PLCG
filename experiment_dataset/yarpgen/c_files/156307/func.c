/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156307
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)17196)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (short)5474)) & (((/* implicit */int) (short)-17180)))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((var_15), (arr_1 [i_0] [i_0])))) == (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) var_17))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (short)-8485)) & (((/* implicit */int) (short)-8485)))))));
        arr_6 [i_1] [(short)4] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1944))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 1])) != (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2]))));
            var_22 -= var_15;
            var_23 = (short)8493;
            arr_10 [(short)9] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)8492)) & (((/* implicit */int) (short)8500))));
        }
        for (short i_3 = 1; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_24 = ((short) max((arr_14 [(short)0] [(short)0] [i_3 - 1]), ((short)-8485)));
            var_25 = min((((short) var_8)), (max((arr_9 [i_3 - 1] [i_3]), (var_15))));
            arr_15 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8479))))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (short)-4800))));
            arr_16 [(short)2] [i_3] = (short)(-32767 - 1);
        }
        for (short i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
        {
            arr_20 [i_4] [(short)8] = ((/* implicit */short) ((min((((((/* implicit */int) (short)-32760)) & (((/* implicit */int) (short)2016)))), (((((/* implicit */_Bool) (short)6960)) ? (((/* implicit */int) (short)21697)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_4])))))) << (((((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (26337))))) - (((/* implicit */int) arr_11 [i_1] [i_4] [i_1])))) - (840403)))));
            var_26 = ((/* implicit */short) (-((((+(((/* implicit */int) var_9)))) * (((((/* implicit */int) var_1)) & (((/* implicit */int) (short)6960))))))));
        }
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) (short)8484)) + (((/* implicit */int) (short)17202)))))));
    }
    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */short) ((((((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (short)8490)))) + (2147483647))) >> (((min((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_5))))), ((-(((/* implicit */int) (short)6534)))))) + (6545)))));
        arr_25 [(short)2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_23 [i_5])) ? (((((/* implicit */_Bool) (short)14570)) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) arr_23 [i_5])))) : (((/* implicit */int) ((short) (short)6063))))), ((~(((/* implicit */int) (short)-32762))))));
        var_28 = ((short) ((((/* implicit */_Bool) min((var_2), ((short)-32761)))) ? (((/* implicit */int) min(((short)8176), (var_1)))) : (((/* implicit */int) var_8))));
        var_29 = ((/* implicit */short) max((var_29), ((short)-20035)));
    }
}
