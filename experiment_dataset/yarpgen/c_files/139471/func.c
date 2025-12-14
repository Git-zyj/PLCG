/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139471
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
    var_13 = ((/* implicit */unsigned short) var_6);
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_1))));
    var_15 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0]))) ? ((+((+(((/* implicit */int) arr_8 [i_0] [i_0])))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0]))));
                            var_16 = ((/* implicit */long long int) arr_4 [i_0]);
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((arr_1 [i_2]) ? (((/* implicit */int) arr_7 [i_3] [3U] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1 - 1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_1 - 1]))) : ((~(arr_10 [i_2 - 2] [i_1 - 1] [i_1 + 1])))));
                            arr_12 [i_3] [i_2] = ((/* implicit */unsigned char) ((arr_0 [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_3 [i_3]))))))) : ((+(-7608910301185090838LL)))));
                            arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_1 - 1] [i_0])) ? (arr_6 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_2 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7608910301185090838LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7608910301185090856LL)))) ? (((/* implicit */int) arr_7 [i_1 + 1] [(_Bool)1] [i_1 + 1] [(_Bool)1])) : ((~(((/* implicit */int) arr_7 [i_3] [i_2] [i_1 + 1] [i_0]))))))) : (((unsigned int) arr_9 [i_1 + 1] [i_1] [i_1 + 1]))));
                        }
                    } 
                } 
                arr_14 [i_0] [10LL] = (-((+(((/* implicit */int) arr_4 [i_1 - 1])))));
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1 + 1] [18] [i_1] [i_0]))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1 - 1])))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 1]))))) ? (((/* implicit */int) arr_5 [(unsigned short)11] [i_1] [i_0])) : (((/* implicit */int) ((unsigned short) ((arr_9 [i_0] [5LL] [i_1 + 1]) ? (arr_6 [i_0] [(_Bool)1] [2LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_19 = ((/* implicit */short) arr_10 [i_0] [i_1 - 1] [i_4]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) arr_19 [i_0] [i_1 + 1] [i_4]);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_1 - 1] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) ((arr_20 [i_0] [i_1] [i_4] [i_4] [i_5 + 2] [i_6]) ? (arr_17 [i_5 - 2] [(unsigned short)19] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1])))))))));
                            arr_25 [i_4] [i_5 - 2] [i_4] [i_0] = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [20ULL] [11LL] [i_0]);
                        }
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_21 += ((/* implicit */unsigned short) (-(((int) ((unsigned long long int) 5408966896595793492ULL)))));
                        arr_28 [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) arr_5 [i_0] [i_1 - 1] [i_4])))));
                        arr_29 [i_7] = ((/* implicit */long long int) ((((_Bool) arr_5 [i_1] [i_1 + 1] [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [12U])))) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                    }
                }
            }
        } 
    } 
    var_23 += ((/* implicit */int) ((_Bool) (unsigned char)87));
}
