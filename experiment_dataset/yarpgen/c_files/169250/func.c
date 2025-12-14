/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169250
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */int) var_9)), (((((((/* implicit */int) (short)29257)) >= (((/* implicit */int) (short)10359)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-32613)) || (((/* implicit */_Bool) var_11))))) : ((-(((/* implicit */int) var_14)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 2])) - (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2]))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) min(((short)-1), (arr_3 [i_0 - 2])))) ? (((/* implicit */int) ((short) var_4))) : ((~(((/* implicit */int) arr_3 [i_0]))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)303), ((short)0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) ((((/* implicit */int) (short)26524)) & (((/* implicit */int) var_15))))))));
            arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) ((((/* implicit */int) (short)29248)) != (((/* implicit */int) var_15)))))))) <= (((((/* implicit */_Bool) (short)-16868)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))));
            var_19 *= ((/* implicit */short) ((((/* implicit */int) (short)29686)) != (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (short)-29242)) <= (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-29248)) : (((/* implicit */int) (short)-29258)))) : (((/* implicit */int) min((arr_1 [i_0]), (var_14))))))) ? (min(((~(((/* implicit */int) arr_2 [i_0 + 1] [i_1])))), (((((/* implicit */_Bool) (short)-27394)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32403)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (short)-29254))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 - 1]))))))))));
            var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((((/* implicit */int) (short)27394)) / (((/* implicit */int) ((short) (short)(-32767 - 1)))))) : (((/* implicit */int) (short)-29248))));
        }
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) min(((short)-1), (arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (short)22463)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27394)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_0 [i_0 - 2])))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-2903)) : (((/* implicit */int) (short)-1))));
}
