/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148667
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (max((4294967269U), (3213881907U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0 - 1] = (-((-(var_1))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)6)))) / (((/* implicit */int) (unsigned char)249))));
            arr_7 [i_1] = ((/* implicit */short) (~(2136367278U)));
            arr_8 [i_1] [i_1] = 3955403947U;
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0] [i_0 + 2]), ((unsigned char)104))))) % (arr_5 [12U] [i_2])));
                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)14))));
            }
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) (unsigned char)248);
                arr_19 [(short)12] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_16 [(unsigned char)3] [i_2] [i_0]);
                var_15 = ((((arr_5 [i_0] [i_0 + 3]) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_4] [i_2] [i_0]), (((/* implicit */short) arr_0 [i_4] [i_0])))))))) ? (max((((/* implicit */unsigned int) min((var_2), ((unsigned char)7)))), (min((((/* implicit */unsigned int) (unsigned char)62)), (arr_1 [i_0] [i_2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)14))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(arr_22 [i_0] [i_0 + 3] [i_5 + 4] [i_6] [i_6] [i_0 + 2]))))));
                        arr_24 [i_6] [i_2] [i_5] [i_6] |= (-(min((((/* implicit */unsigned int) (short)32760)), (2147450880U))));
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [8U])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0] [i_2] [i_5] [i_6]))))) : (((var_0) >> ((((~(arr_6 [i_2] [i_5] [i_6]))) - (356972087U)))))));
                    }
                } 
            } 
            var_17 ^= (-(((unsigned int) arr_1 [i_2] [(unsigned char)12])));
        }
    }
}
