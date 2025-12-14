/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134415
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
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_8)));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    var_19 = ((/* implicit */long long int) (~(arr_3 [i_2] [i_1] [i_0])));
                    arr_8 [i_2 - 1] [i_0] [i_0] [10LL] = ((/* implicit */unsigned int) ((long long int) var_17));
                }
                for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_20 -= ((/* implicit */short) (~(3141822615002811568LL)));
                        arr_15 [i_0] [i_0] [11LL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) << (((min((((/* implicit */long long int) ((unsigned char) var_15))), (min((var_14), (var_17))))) + (754607021978169385LL)))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) % (8184LL))) != (((long long int) var_5))))))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        arr_20 [i_3] |= ((/* implicit */long long int) ((unsigned int) -2014980213157024022LL));
                        var_22 *= ((/* implicit */unsigned int) arr_10 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_26 [i_1] [i_0] = max((((/* implicit */long long int) var_5)), (((long long int) 8163LL)));
                                var_23 -= ((/* implicit */unsigned long long int) arr_16 [i_7] [i_7] [15LL] [i_0] [i_0] [i_0]);
                                arr_27 [i_7] [i_0] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (var_4)))) / (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(1347828512U)))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_13 [i_0] [i_3 + 1] [i_3 - 1] [i_3])));
                }
                for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_9 [i_8])))) ? (5561159679929141917LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [2U] [i_8] [2U] [i_8 - 2] [i_8 - 1] [i_8 - 1]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_8])) ? (226197490U) : (var_11))))))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6566668161835325885LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 4U)) > (3313992807916087002LL))))) : (var_4)));
                    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (3313992807916087002LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23293))))) ^ (var_4)));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) 3313992807916087014LL))), (9223372036854775807LL))))));
                }
                arr_31 [i_0] = (~(var_14));
                arr_32 [19ULL] [i_0] [19ULL] = ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
}
