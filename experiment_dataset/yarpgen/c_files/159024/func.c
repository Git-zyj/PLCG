/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159024
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned short) arr_6 [i_0]);
                    var_15 = ((/* implicit */unsigned short) (((~(max((arr_2 [i_0]), (((/* implicit */int) arr_9 [i_0 + 1])))))) != (((/* implicit */int) max((((/* implicit */short) min((var_2), (arr_1 [i_0])))), ((short)23107))))));
                    arr_13 [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0]), (arr_6 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_2 + 3] [i_2 - 1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned short)0] [i_2])) <= (((/* implicit */int) arr_3 [i_1 + 1])))))));
                    var_16 = ((/* implicit */unsigned short) var_1);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((max((5276436320134855387LL), (((/* implicit */long long int) (signed char)-66)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)12])) ? (var_9) : (((/* implicit */int) arr_1 [i_2]))))))))))))));
                }
                for (signed char i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    var_18 = ((signed char) arr_2 [i_0]);
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_3 - 1] [i_0 + 2])) < (((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_3 + 3] [i_0 + 1])))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)9378)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))))));
                }
                for (signed char i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    arr_22 [i_0 + 3] [(unsigned short)14] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_4 - 1] [i_4 - 1])))));
                    var_20 *= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) arr_6 [(unsigned short)0])) + (41)))));
                }
                arr_23 [i_0] [i_1 - 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20537)) ? (var_8) : (((/* implicit */int) arr_14 [i_0] [i_0]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_0 + 4]))))));
            }
        } 
    } 
    var_21 = var_1;
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-99))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) ? (((var_10) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) | (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */short) var_2))))) ? (var_10) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */int) var_2)), (var_13))), (((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_5), ((signed char)39))))));
}
