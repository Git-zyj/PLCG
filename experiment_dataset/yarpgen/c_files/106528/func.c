/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106528
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
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */long long int) ((4194303) + (((/* implicit */int) arr_6 [(short)4] [(short)4] [(short)4]))))) : ((-(arr_0 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_12)))))));
                arr_7 [i_0] [i_1] [i_1 - 1] = ((unsigned int) arr_6 [i_0 + 3] [i_1 + 1] [i_1 + 2]);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_10))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((((/* implicit */int) (unsigned short)46)), (var_0))) > (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_3 [(unsigned char)12]))))))) | (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_12))))))));
                    var_17 += ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)-2)), (var_13))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (short)15458)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) -4194300);
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_0 + 3] [i_0] [i_0]))));
                    arr_15 [i_0] [i_1 + 1] = ((/* implicit */short) var_8);
                    var_19 = arr_11 [i_0];
                }
                /* vectorizable */
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_4 - 1] = ((/* implicit */signed char) var_4);
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_4]);
                        arr_22 [i_0] [i_1] [i_0 - 1] [i_5] = ((/* implicit */short) (+(arr_11 [i_0])));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((arr_17 [i_0] [i_0] [i_4 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_5] [20ULL] [i_5]))) : (16U))) << (((((((/* implicit */_Bool) (short)21686)) ? (((/* implicit */unsigned long long int) 3262295981390785492LL)) : (var_7))) - (3262295981390785468ULL))))))));
                        var_21 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) == (arr_4 [i_0 + 3] [i_0] [i_0 + 4])));
                    }
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 18446744073709551615ULL);
}
