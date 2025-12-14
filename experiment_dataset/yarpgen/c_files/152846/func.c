/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152846
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)60))))), (var_19))) : (956945628U)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_21 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_19))))) * (((/* implicit */unsigned int) max(((((_Bool)0) ? (((/* implicit */int) var_7)) : (var_4))), (((/* implicit */int) min(((signed char)-45), (((/* implicit */signed char) var_1))))))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)39))))) ? ((~(((((/* implicit */int) var_12)) | (((/* implicit */int) (signed char)127)))))) : ((~((~(19)))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                arr_9 [i_1] = ((/* implicit */short) var_0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~((+(-32))))))));
                    var_23 = (-(3739643081U));
                    var_24 = ((/* implicit */signed char) var_12);
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
                }
            }
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_19)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)36)) || (((/* implicit */_Bool) var_12))))) : ((+(var_9))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (arr_1 [i_0]) : ((+(((/* implicit */int) var_17))))))));
                arr_16 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_18))))))) ? ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_4])))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_17))))))));
                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? ((+(31U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */short) var_8)), (var_6))))))));
            }
        }
        var_27 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(131072)))) ? (((((/* implicit */unsigned int) arr_1 [i_0])) + (3194076507U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) (signed char)-45)), (3509139415U)))));
        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4294967281U)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-96)), ((short)1640)))))) : (((((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) min((var_1), (var_1)))) : (((((/* implicit */_Bool) (short)-25376)) ? (-1847382038) : (((/* implicit */int) (short)-1640))))))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) -1071914044))), (max((max((var_19), (((/* implicit */unsigned int) var_4)))), ((~(3509139415U)))))));
        arr_20 [i_5] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)2046))))) ? ((~(((/* implicit */int) (short)29338)))) : (((/* implicit */int) arr_5 [i_5])))));
        arr_21 [i_5] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_13)))), ((~(((/* implicit */int) ((_Bool) 382427153U)))))));
    }
}
