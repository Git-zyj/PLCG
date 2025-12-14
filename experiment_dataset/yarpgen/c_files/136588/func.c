/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136588
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) -1964705653))));
                arr_5 [i_0] = ((/* implicit */unsigned char) max(((-(-5553235327501085528LL))), (((/* implicit */long long int) (short)24925))));
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_4 [i_2] [i_2 - 4] [i_2 - 3])) + ((-(arr_6 [i_2] [i_1] [i_0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2]))));
                        arr_10 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0]))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) > (arr_1 [i_0])));
                            var_22 = ((/* implicit */long long int) (~(arr_1 [i_0])));
                            arr_13 [i_2] [i_2] [i_2] [i_3] [i_4] [i_0] &= ((/* implicit */int) var_16);
                        }
                        for (long long int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_2] [i_2 - 4] [i_2] [i_2] [i_2 - 2] &= ((/* implicit */long long int) ((arr_1 [i_2]) > (((/* implicit */unsigned long long int) (~(arr_2 [i_2] [i_2]))))));
                            var_23 = ((/* implicit */long long int) arr_1 [i_0]);
                            arr_17 [i_0] [10] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (short)26377));
                            var_24 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_2 - 2] [i_5 + 1] [17LL]))));
                            var_25 = ((/* implicit */int) ((short) arr_6 [i_2] [i_2] [i_2 - 3]));
                        }
                    }
                    var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1073741823LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140)))))) ? (((long long int) (+(arr_14 [i_0] [i_2] [i_1] [i_2] [i_2] [i_2] [i_2 - 2])))) : (((((/* implicit */_Bool) (-(1964705653)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_0]))) : (arr_14 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [(unsigned char)8] [i_2 - 4])))));
                    arr_18 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_7 [i_2] [i_0])))) > (((/* implicit */int) ((((unsigned long long int) -721837970996425356LL)) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))))));
                    var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) > (((((/* implicit */_Bool) (-(5553235327501085524LL)))) ? (((/* implicit */long long int) 1675394335)) : (max((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0])), (arr_14 [i_1] [i_0] [i_1] [i_1] [21] [i_1] [i_1])))))));
                }
                var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))) > (((/* implicit */int) arr_15 [i_0] [2] [i_0] [i_0] [i_0]))))) > (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_29 = var_11;
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_0))));
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((4100813096748467324LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-25526))))))) > (((((/* implicit */_Bool) min((var_17), (var_2)))) ? (var_11) : (var_13))))))));
}
