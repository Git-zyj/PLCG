/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175335
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = (!(((/* implicit */_Bool) 3768104426U)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 4060842170U)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)-26672)))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)26373)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                var_18 = ((/* implicit */_Bool) max((max((1563242450U), (234125102U))), (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (((234125126U) / (1160757764U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6632)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) ((arr_6 [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) arr_6 [i_3] [i_0]);
                    arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (8898731341928364328ULL)))) ? (arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */_Bool) (short)11309);
                }
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(4294967286U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_4])) ^ (((/* implicit */int) arr_15 [i_0] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((arr_15 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))) : (arr_3 [i_2])))))));
                    var_22 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((int) (short)11309))) != (6769785099130923934LL)))));
                    arr_17 [(_Bool)1] [i_4] [i_0] [i_0] [i_1] [i_0] = max((((/* implicit */unsigned short) max((((_Bool) var_6)), ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))))))), ((unsigned short)15788));
                }
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    var_23 = ((((((/* implicit */_Bool) 3134209518U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))))) * (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-11306))))));
                    var_24 = ((/* implicit */int) (_Bool)1);
                    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_5] [i_5 + 4] [i_0] [i_5 + 4]))));
                    arr_21 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) -211823977)) : (3954032147U)));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_19 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_5] [(_Bool)1]);
                }
                arr_23 [i_0] [i_0] [i_0] = 1952017289;
            }
            var_26 = ((/* implicit */unsigned long long int) -4606057448861267062LL);
        }
        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6769785099130923933LL)) ? (211823972) : (((((/* implicit */int) (_Bool)1)) << (((-1168245484) + (1168245509)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483636)) ? (((/* implicit */int) arr_15 [i_6] [i_6])) : (913346467)))) & (((var_4) >> (((-4606057448861267079LL) + (4606057448861267110LL)))))));
        var_28 = 16952691244922058980ULL;
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
    }
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((2060856325) + (((/* implicit */int) (_Bool)0)))))));
}
