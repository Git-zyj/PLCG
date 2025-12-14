/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108816
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) arr_10 [15LL] [16LL] [i_3] [i_2 - 1]);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)43284))))) : (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0 - 1] [i_2 + 3]) : (arr_6 [i_0 - 2] [i_2 - 1])))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)43284)) + (((/* implicit */int) (unsigned short)43284)))) << (((((((/* implicit */_Bool) 18138524692497997974ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [11] [10] [i_2] [3] [i_1] [8])) ? (((/* implicit */int) var_13)) : (arr_3 [(signed char)2])))) : (var_9))) - (84LL)))));
                            var_19 = ((/* implicit */int) arr_4 [i_0] [7U]);
                            arr_15 [7] [i_3] [9U] [15] [i_4] = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) 1218566303U))))))), (min((0), (((/* implicit */int) (signed char)116))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [(signed char)12]) >> (((((/* implicit */int) arr_5 [i_0] [(signed char)14] [i_2 - 1])) + (58)))))) && (((/* implicit */_Bool) (+(var_14))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (8828331768418745776LL))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))) > (((((/* implicit */int) arr_2 [16])) << (((arr_12 [i_2 + 1]) - (8307486760034790697LL)))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) var_13);
                            arr_18 [(unsigned short)17] [8] [9LL] [i_3] [14LL] [i_1] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22252))) % (10675443923120920892ULL)))));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_21 [6LL] [i_3] [4U] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [9LL] [9LL])) ? (var_6) : (((/* implicit */unsigned long long int) arr_16 [5LL] [0]))))) ? (((/* implicit */int) max((arr_9 [i_3] [(signed char)2]), (arr_0 [2LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            arr_22 [(unsigned short)10] [i_1] [i_2] [3LL] [i_3] = ((/* implicit */unsigned short) min((min((((unsigned long long int) -1094960106098737852LL)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)116))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-35)), (arr_3 [i_1]))))));
                            arr_23 [(signed char)15] [i_3] [15LL] [(unsigned short)10] [i_3] [7LL] = max((5270437708685330523LL), (((/* implicit */long long int) (signed char)-36)));
                        }
                        for (signed char i_7 = 3; i_7 < 16; i_7 += 4) 
                        {
                            arr_28 [(signed char)16] [i_1] [(signed char)3] [i_3] [(signed char)5] [14LL] = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [0LL] [i_3] [(unsigned short)16] [1U]);
                            arr_29 [(signed char)4] [2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(unsigned short)12] [i_3] [13U])) ? (arr_20 [i_0] [i_2 + 1] [i_7] [4LL] [i_7]) : (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_2 + 1] [i_2] [i_7] [8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 1] [7]))) : (arr_20 [15LL] [i_2 + 1] [i_7] [13LL] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-107), ((signed char)96)))))));
                            var_23 = ((/* implicit */signed char) (-(1715276150)));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(-1265765364)))) ? (((/* implicit */int) arr_7 [(unsigned short)4] [(signed char)16] [i_0])) : (((((-1715276150) + (2147483647))) << (((((/* implicit */int) (signed char)59)) - (59))))))));
    }
    var_25 = ((/* implicit */unsigned int) ((int) max((((/* implicit */int) (signed char)-60)), (1715276150))));
    var_26 = ((/* implicit */unsigned short) var_11);
    var_27 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))) ? (((/* implicit */long long int) var_1)) : (((3648052550741622902LL) + (var_10))))));
}
