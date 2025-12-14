/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162251
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_0] [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) (short)17713)))) & (max(((~(((/* implicit */int) (short)-15186)))), (((/* implicit */int) (short)32767))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_6 [i_0 - 4]), (arr_6 [i_0 + 1])))) & (((/* implicit */int) max((var_9), (arr_6 [i_0 - 1]))))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] = ((/* implicit */short) ((((((((/* implicit */int) (short)17717)) < (((/* implicit */int) (short)17714)))) ? (((/* implicit */int) max(((short)-4526), ((short)2)))) : (((/* implicit */int) (short)596)))) != (((/* implicit */int) (short)-1))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */int) ((((/* implicit */int) (short)21983)) != (((/* implicit */int) (short)3966))))), (((((/* implicit */_Bool) (short)-17707)) ? (((/* implicit */int) (short)-29539)) : (((/* implicit */int) (short)17723)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)15735)) | (((/* implicit */int) (short)32767))))) ? ((-(((/* implicit */int) (short)15360)))) : (((/* implicit */int) min(((short)-18710), ((short)6))))))));
                }
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)6), ((short)24979)))) ? (((/* implicit */int) (short)18053)) : (((/* implicit */int) (short)1024))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)19665)) / (((/* implicit */int) (short)32760))))) ? (((/* implicit */int) (short)10)) : ((~(((/* implicit */int) (short)-17288)))))) : (((/* implicit */int) arr_12 [i_0 - 4] [i_1] [i_4]))));
                    arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (max((((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (short)10780)))), (((((/* implicit */_Bool) arr_4 [i_4] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)18761)))))) : (((/* implicit */int) max((arr_1 [i_0] [i_1]), (((/* implicit */short) ((((/* implicit */int) (short)12288)) != (((/* implicit */int) (short)14064))))))))));
                }
                arr_20 [i_0] = ((/* implicit */short) ((min((((/* implicit */int) (short)3)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)16736)) : (((/* implicit */int) var_6)))))) < (((((/* implicit */_Bool) (short)17745)) ? (((/* implicit */int) arr_11 [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0 + 2]))))));
            }
        } 
    } 
    var_11 = (short)17472;
}
