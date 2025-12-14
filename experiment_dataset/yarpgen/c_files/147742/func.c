/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147742
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
    var_10 ^= ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned char) (-(var_0)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((int) var_8)), (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_1)))) : ((+(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = var_4;
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (+(arr_3 [i_0])));
            var_13 *= ((/* implicit */unsigned long long int) ((arr_3 [16U]) << (((arr_3 [16U]) - (798452359)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 |= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max(((short)15), (((/* implicit */short) (_Bool)0))))) && (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_1))))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36517))) + (arr_4 [i_3 + 1] [i_3 + 1] [(signed char)14])));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) arr_1 [i_3 + 1])))))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            for (unsigned short i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_24 [4] [i_5] = ((/* implicit */_Bool) ((unsigned int) min((arr_22 [i_4] [i_5] [i_6 - 1]), (arr_22 [(_Bool)1] [(_Bool)1] [i_6 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 23; i_7 += 3) 
                    {
                        for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (short)15)) + ((~(((/* implicit */int) arr_17 [i_4 + 1] [i_5]))))));
                                arr_29 [i_4 + 1] [i_4 + 1] [i_6] [i_4 + 1] [i_5] [(unsigned char)8] = ((/* implicit */signed char) min((((((arr_11 [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << (((max((((/* implicit */unsigned int) (short)15)), (var_8))) - (2115355012U))))), (((((((/* implicit */_Bool) (unsigned short)51314)) ? (((/* implicit */int) arr_1 [14ULL])) : (((/* implicit */int) arr_23 [i_4] [(_Bool)0] [i_6 - 3])))) / (((/* implicit */int) (unsigned short)14205))))));
                                var_18 = ((/* implicit */short) (!((((_Bool)1) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])), (7299862107323562286ULL))))))));
                                var_19 = ((/* implicit */long long int) arr_8 [(short)6] [i_5] [(_Bool)1]);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_4] [i_8 + 3] [i_6 - 3]))))))))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_5] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_6])) + ((-(((/* implicit */int) ((_Bool) (_Bool)0)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || ((!(((/* implicit */_Bool) arr_1 [(signed char)23]))))));
            arr_35 [i_4 + 1] [i_9 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (short)-1)))) : (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) arr_16 [i_4])))))))), (((unsigned int) arr_0 [i_4 + 1] [i_9 + 1]))));
        }
        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_27 [i_4 + 1] [i_10 + 2] [i_10 + 2] [i_4]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (3303150413U)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (arr_12 [i_4 + 1])))))))));
            arr_38 [i_4 + 1] [i_10] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((((/* implicit */int) var_1)) | (arr_36 [i_10] [i_4 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 4012644013U))))))));
        }
        arr_39 [i_4] = ((/* implicit */unsigned short) (short)-18288);
    }
}
