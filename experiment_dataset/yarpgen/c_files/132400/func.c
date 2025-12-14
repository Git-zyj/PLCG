/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132400
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
    var_17 = ((/* implicit */short) var_3);
    var_18 -= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), (arr_0 [(_Bool)1])))) ? (33554431) : (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))))))))));
        var_20 = ((/* implicit */unsigned char) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) * (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        arr_5 [7LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (33554431) : (33554432)));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) | (arr_0 [(signed char)10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [10LL]))) : (arr_4 [i_1]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 4; i_3 < 16; i_3 += 2) 
            {
                arr_12 [i_1] = ((/* implicit */unsigned char) ((arr_1 [i_3]) ? (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_3])) : (33554431))) : (((/* implicit */int) arr_9 [i_1 - 1] [i_2] [i_3 + 1]))));
                var_23 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */short) ((-33554438) + (arr_0 [i_3])));
            }
            var_24 |= ((/* implicit */unsigned short) ((((long long int) arr_10 [i_1] [i_1] [i_1] [i_1])) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)181)) < (((/* implicit */int) arr_1 [(signed char)16]))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_1 + 2]))));
                        arr_21 [i_1] [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) (unsigned char)0);
                        var_26 = ((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1]);
                    }
                } 
            } 
            arr_22 [i_2] [i_2] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_2] [i_2])))));
        }
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) & (arr_19 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1 - 1])))) ? (((/* implicit */int) (unsigned char)12)) : (((arr_8 [i_1]) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))))))));
    }
}
