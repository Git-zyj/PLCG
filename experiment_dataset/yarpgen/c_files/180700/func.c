/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180700
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
    var_17 = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)7504))))))));
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned int) 4829024676403749169ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_3 [22ULL] [i_0] [i_0]);
                var_21 ^= ((/* implicit */unsigned short) ((signed char) min((((/* implicit */long long int) ((_Bool) -1696479651))), (min((((/* implicit */long long int) (_Bool)1)), (var_3))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_0] [12ULL] = ((/* implicit */unsigned short) min((arr_5 [(_Bool)1] [i_1] [i_2]), (((/* implicit */unsigned int) ((_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2])))));
                    arr_7 [(unsigned short)7] [i_0] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2] [i_0])) ? (arr_3 [i_0 - 2] [5LL] [i_0]) : (arr_3 [i_0 - 2] [17U] [i_0])))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) (+(max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) var_8)) >= (1696479651))))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_1)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) -1696479652);
                            arr_16 [21LL] [i_0] [(unsigned short)1] [i_4] = ((/* implicit */unsigned char) var_8);
                            arr_17 [i_5] [(unsigned short)0] [i_0] [i_4] [i_0] [i_1] [i_0 - 2] = (+(arr_3 [i_0 + 2] [i_0 + 2] [i_0]));
                        }
                        arr_18 [17] [(unsigned short)1] [(unsigned short)1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0]))));
                        var_25 = ((/* implicit */short) 3621633451530021789LL);
                    }
                    var_26 = ((/* implicit */signed char) ((long long int) (unsigned char)224));
                    arr_19 [i_0] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) var_13);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
    {
        var_27 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_21 [i_6 - 1] [i_6 + 1])))) ^ (((/* implicit */int) min((arr_21 [i_6 - 1] [i_6 + 2]), (arr_21 [i_6] [i_6 + 1]))))));
        arr_24 [(_Bool)1] = -1696479660;
    }
    for (short i_7 = 4; i_7 < 13; i_7 += 2) 
    {
        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_5 [i_7] [i_7] [22LL])) >= ((~(arr_1 [i_7])))));
        var_29 = ((((/* implicit */_Bool) min((arr_10 [i_7 + 4] [i_7] [i_7 + 1] [i_7]), (((/* implicit */long long int) var_12))))) ? (min((arr_10 [i_7 + 1] [i_7] [i_7 + 4] [i_7]), (arr_10 [i_7 - 3] [i_7] [i_7 - 1] [i_7]))) : ((+(arr_10 [i_7 + 4] [i_7] [i_7 - 2] [i_7 + 2]))));
        arr_28 [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_11 [i_7])) >= (((/* implicit */int) var_8)))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_11 [i_7]), (((/* implicit */unsigned short) arr_15 [i_7] [i_7 + 4] [i_7 + 4] [i_7 + 4] [(unsigned short)20] [(unsigned short)4] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(-1696479666))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_7 - 4] [i_7 - 1] [i_7] [3LL] [18]))) == (1793593434U))))));
    }
}
