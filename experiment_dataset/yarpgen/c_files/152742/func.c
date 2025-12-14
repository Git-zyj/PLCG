/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152742
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [(signed char)4] [i_3] = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-53)) && (((/* implicit */_Bool) (signed char)-2))))))) > (((((((/* implicit */int) (unsigned char)245)) / (((/* implicit */int) var_3)))) % ((~(((/* implicit */int) arr_2 [i_0]))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_2] [i_3]);
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */long long int) var_6);
                        arr_15 [i_0] [(unsigned short)7] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) (signed char)52))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) var_10)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)161), (((/* implicit */unsigned char) (signed char)-57))))) ? (((/* implicit */int) (unsigned short)65440)) : (((/* implicit */int) (short)-4445))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] = ((signed char) (unsigned short)22038);
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (var_11))))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) != (4359421489844685220LL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)31158)) > (((/* implicit */int) (signed char)-18)))))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_7] = ((/* implicit */signed char) min((max((((((/* implicit */int) (signed char)-90)) & (((/* implicit */int) (signed char)63)))), ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [(signed char)8]))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_0 - 1] [(signed char)6] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) <= (arr_16 [i_0 + 2] [i_2] [(short)9] [i_7] [i_7] [i_1]))))))));
                        var_14 = ((/* implicit */short) ((((/* implicit */int) (signed char)75)) >= (((/* implicit */int) (signed char)89))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0 + 1] [(signed char)6] [i_0 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (signed char)0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(unsigned char)2] [(unsigned char)2] [i_7] [i_7] [(unsigned char)2])) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) arr_3 [i_0 - 1] [(unsigned char)11]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [(unsigned char)0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)2680)))) : (((/* implicit */int) arr_24 [i_0] [i_1] [(signed char)12] [i_7] [i_0]))))));
                    }
                    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 - 1] [(unsigned char)10] [i_1] [(signed char)12] [i_1] [(short)10])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_1] [(short)9] [(unsigned char)5]))))))), ((~(((/* implicit */int) (signed char)-97))))));
                }
            } 
        } 
    } 
    var_17 = var_10;
}
