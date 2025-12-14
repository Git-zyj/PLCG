/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158755
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)88)) ? (arr_3 [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)94)), ((unsigned short)49123)))))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_4 [19] [i_1] [i_2] [i_2])))))));
                    }
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1178062596)) ? (arr_5 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_4 - 2] [i_5])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (signed char)-56))));
                            var_20 = ((/* implicit */long long int) max(((signed char)102), ((signed char)(-127 - 1))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_4 [i_1] [i_2] [i_1] [7ULL]))));
                            var_22 = ((/* implicit */short) min((var_22), ((short)17452)));
                            arr_15 [i_6] [(short)9] [i_6] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5001))) : (1524314079U))), (4271928881U)));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (3569271396U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [(_Bool)1] [(signed char)9] [i_7 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 172721400U)) : (arr_0 [i_7])))))) ? (arr_17 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [(short)6]) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (arr_9 [i_7] [i_1] [i_2] [(unsigned short)18] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_19 [i_7] [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max(((signed char)102), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_2] [i_7 + 1] [9U] [i_1])))))));
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4 - 1] [(_Bool)1] [i_4 - 1] [i_7 + 1] [i_7]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(signed char)11] [i_2] [i_1] [i_0 + 1]))))) : (((/* implicit */int) ((13158996609764683298ULL) <= (((/* implicit */unsigned long long int) 1081413869))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)63)) || (((/* implicit */_Bool) arr_11 [(_Bool)1] [7] [(short)2] [i_4 - 2])))))));
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)91))))))) ? (((/* implicit */int) ((arr_0 [i_0 + 2]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)74)))))) : (((/* implicit */int) ((((1081413869) < (((/* implicit */int) (signed char)125)))) && ((!(((/* implicit */_Bool) (signed char)-8)))))))));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (signed char)-64))) % (((/* implicit */int) ((((/* implicit */_Bool) ((4122245895U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21)))))) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                        }
                        arr_20 [i_0] = (~((-((~(((/* implicit */int) (unsigned short)64074)))))));
                    }
                    arr_21 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0 + 2] [i_0] [11] [i_0]);
                    var_27 ^= 172721375U;
                    var_28 ^= ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 3]);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (865046559183244038LL))) > (((/* implicit */long long int) (~(var_5)))))) ? ((+(((((/* implicit */_Bool) (unsigned short)40428)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)128)))))) : (((/* implicit */int) (signed char)123)))))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) -1178062597))) ? (((/* implicit */int) ((short) -1910898294))) : (718670686)));
    var_31 ^= ((/* implicit */unsigned long long int) -1178062597);
}
