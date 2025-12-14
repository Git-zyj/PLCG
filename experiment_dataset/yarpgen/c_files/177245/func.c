/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177245
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
    var_16 &= ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((short) ((short) max((-2111343706567434638LL), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2111343706567434638LL)) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) var_4))))) * (0ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (+(arr_2 [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 357826117U)) != (2111343706567434642LL)));
            var_19 = ((/* implicit */short) (((-(1293975136518907001LL))) != (((/* implicit */long long int) 4094704419U))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(short)8]))))) ? (min((0LL), (arr_2 [i_1]))) : (max((arr_2 [i_0]), (arr_2 [(unsigned short)1])))))) ? ((~(arr_6 [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1293975136518907001LL))))));
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_7 [i_0] [i_2] [i_2])) : (((((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 0LL))))))))));
            var_23 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) == (arr_10 [i_0] [i_0] [i_2]))))) < (arr_7 [i_0] [i_0 - 1] [i_0 + 3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 0U)) <= (2515165208607945112LL))))) != (var_11))))) : (var_9)));
            arr_12 [i_0] [i_0] [i_2] = -1293975136518907004LL;
            arr_13 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_0 + 3])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? ((~(arr_10 [8U] [i_0] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2])))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) (+(((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
    var_24 = ((/* implicit */short) min((var_5), (((((/* implicit */_Bool) min((var_1), (var_8)))) ? (max((7909425767524402178LL), (((/* implicit */long long int) (short)10999)))) : (var_10)))));
    var_25 = ((/* implicit */long long int) (short)21403);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            {
                                arr_28 [i_7] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_7] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_7])) : (((/* implicit */int) var_14))))))));
                                arr_29 [i_3] [5ULL] [i_7] [7LL] [i_7] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    arr_30 [i_5] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_3])))) ? (arr_16 [i_4] [i_5]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_8 [i_3] [i_5])), (4294967293U))))))));
                }
            } 
        } 
    } 
}
