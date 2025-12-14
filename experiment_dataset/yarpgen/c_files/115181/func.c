/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115181
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34130))) / (-6643956206375688922LL)));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)100)))))));
    var_15 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [0LL] [i_0 - 4] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_3] [i_0 + 1] [i_0 - 1]))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2502)) ? (((/* implicit */int) arr_11 [i_0 - 4] [i_0] [(unsigned short)9] [i_0 - 1] [i_4])) : (((/* implicit */int) (signed char)51))));
                                var_19 = ((/* implicit */int) (~(809592820U)));
                            }
                        } 
                    } 
                    var_20 = (+(((/* implicit */int) (_Bool)1)));
                    var_21 = ((/* implicit */unsigned char) (~((~(var_1)))));
                }
                for (unsigned int i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) (signed char)-1);
                        var_23 = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_5 - 1] [i_6 - 3] [i_6 - 1] [i_1] [i_6 - 1]);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_5 - 1] [i_6] [4LL])), (arr_3 [i_1] [i_5 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 16172213790658776881ULL)))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) var_12)) : (-6168976841856777964LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 6168976841856777963LL))))), (arr_5 [i_0] [8ULL] [i_5] [i_6 + 2])))));
                    }
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */signed char) ((-6168976841856777964LL) == (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_5 - 1]))))))))) ? (max((((((/* implicit */_Bool) (unsigned char)150)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_5] [3U]))))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (+(6643956206375688918LL))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) -2147483643)) | (var_5)));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    arr_23 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_15 [(_Bool)1] [i_1])))), (var_1))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-6168976841856777990LL))) ? (((/* implicit */int) ((arr_5 [(unsigned char)5] [i_1] [i_7] [i_7]) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [(unsigned char)5] [(unsigned char)5])))))) : (((/* implicit */int) arr_10 [i_7] [i_1] [(unsigned short)5] [6ULL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */int) max(((unsigned char)75), (((/* implicit */unsigned char) (_Bool)0))))) << (((((((/* implicit */_Bool) (short)-24334)) ? (arr_4 [i_7] [i_1] [i_0] [0ULL]) : (((/* implicit */int) (_Bool)1)))) + (1164702910)))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) 8428232160153513413LL))));
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)57)), (var_1)))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) (short)15855)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (var_12))))))));
                    var_30 = ((/* implicit */short) (signed char)100);
                }
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_10))));
                var_32 = ((/* implicit */short) 14385290671370284290ULL);
            }
        } 
    } 
    var_33 = ((/* implicit */int) var_2);
}
