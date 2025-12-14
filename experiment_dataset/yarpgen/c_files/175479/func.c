/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175479
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
    var_16 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [(signed char)4] = ((/* implicit */int) min((((var_13) ? (min((-6468643212857562105LL), (((/* implicit */long long int) (unsigned short)32481)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (-1380761350)))))), (min((((/* implicit */long long int) max((316727379), (((/* implicit */int) (short)-14438))))), (-882637448260034004LL)))));
                var_17 = ((/* implicit */short) max((4885291571076695097ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-25326)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    arr_9 [i_2] = (!(var_15));
                    arr_10 [i_0] [i_2] = ((/* implicit */short) max((var_0), ((~(((((/* implicit */_Bool) (short)29457)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (arr_3 [i_2] [i_2 - 1] [i_2])))) ? ((-(((/* implicit */int) arr_3 [i_2 - 1] [(_Bool)1] [i_2 - 1])))) : (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (-4442568244939412838LL)))) ? ((+(((/* implicit */int) (signed char)-112)))) : (785300391)))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = (short)25862;
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */int) max(((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (561850441793536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7850337944046785665LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((var_0), (((/* implicit */long long int) (_Bool)1)))) : (min((arr_14 [i_5 - 1] [i_4] [i_3] [i_1]), (var_3))))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) (short)5)))));
                                var_20 = ((/* implicit */signed char) (~(max((((/* implicit */int) (short)11)), (-2021253145)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6]);
        arr_24 [i_6] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)14))))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((-1886685027) % (1951821970))), (((/* implicit */int) (!(var_5))))))) ? (var_7) : (((/* implicit */long long int) min((max((((/* implicit */unsigned int) (_Bool)1)), (1300538090U))), (var_11))))));
    /* LoopSeq 2 */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        var_22 += (short)-32760;
        var_23 -= ((/* implicit */short) var_0);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) (short)31744)) * (((/* implicit */int) (short)13058)))))));
        var_25 = ((/* implicit */signed char) min((var_25), (var_2)));
        arr_29 [i_8] [i_8] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)25)))), (-2147483633)))), (((((/* implicit */unsigned long long int) var_11)) + (((unsigned long long int) (_Bool)1))))));
    }
}
