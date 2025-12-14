/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17885
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((int) var_0))) ? (min((((/* implicit */int) var_11)), (var_5))) : ((+(((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) max((((/* implicit */int) (short)-834)), (-260583313)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_16 = min((((/* implicit */unsigned int) ((_Bool) arr_4 [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (1948726531)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (((unsigned int) 1650115128518713998LL)))));
                arr_8 [i_2] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) -1343504607)) ? (10351146462344220974ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_3)))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_3])) || (((/* implicit */_Bool) arr_4 [i_0])))) ? (((((/* implicit */_Bool) 260583302)) ? (1289896400U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)836))))) : (((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))))));
                    var_18 |= ((/* implicit */short) ((((((/* implicit */unsigned int) max((arr_5 [i_1]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1])))) == (arr_9 [i_0]))) && (((/* implicit */_Bool) min((260583326), (((/* implicit */int) (signed char)-78)))))));
                    arr_13 [i_2] = ((/* implicit */signed char) min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2]), (((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) var_12)))) - (min((var_5), (((/* implicit */int) var_12))))))));
                    var_19 = min((((((((/* implicit */int) arr_3 [i_3] [i_1] [i_1])) <= (var_5))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_2)) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [(signed char)21])) ? (((/* implicit */int) arr_6 [i_3] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_2]))))));
                    var_20 = ((/* implicit */int) ((unsigned int) ((unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)15)))));
                }
                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)42))));
                var_21 &= max((((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))))), (((/* implicit */unsigned int) (((_Bool)1) ? (-2063335930) : (-860091731)))));
            }
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((((((/* implicit */_Bool) 1956211833U)) ? (((/* implicit */int) (signed char)-58)) : (-260583313))) | (var_5))))))));
            arr_15 [i_0] [i_1] [(signed char)11] = ((/* implicit */_Bool) ((((/* implicit */int) ((((unsigned long long int) arr_2 [i_0] [i_1])) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))) ^ ((-(((/* implicit */int) max((var_12), (((/* implicit */short) var_11)))))))));
            var_23 = max((((/* implicit */unsigned int) ((int) ((arr_0 [i_1]) / (arr_9 [i_0]))))), (((unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_24 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_4])) : (var_2)))) ? (max((arr_20 [2] [i_4] [2] [15U] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) arr_7 [i_0] [i_1] [i_1])))))))) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)183)) / (var_10))) / ((+(var_2)))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [(unsigned char)16] [i_1] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_0] [i_4]), (((/* implicit */unsigned char) var_8)))))) : (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [(short)22] [i_4] [i_5])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_4)) + (20132)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_20 [i_0] [i_0] [(_Bool)1] [i_0] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((unsigned int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_0 [i_0]) : (var_6)))) ? ((+(((/* implicit */int) var_1)))) : ((-(var_9)))))))))));
                        arr_21 [i_0] [i_0] [19LL] [i_5] [(short)11] [i_4] = ((((/* implicit */unsigned long long int) max((-260583326), (((((/* implicit */_Bool) 10721408156458704261ULL)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)-80))))))) * ((~(max((1038561026751096276ULL), (((/* implicit */unsigned long long int) (unsigned char)134)))))));
                        var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (var_5)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) arr_16 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 1])))));
                        var_27 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3406120901U)) ? (((/* implicit */int) (signed char)103)) : (var_10))) << (((((/* implicit */int) var_8)) & (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [21]) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_5] [i_1] [i_1] [i_5] [i_4] [i_5]) < (((/* implicit */unsigned long long int) var_5)))))) : (arr_0 [i_5 + 2]))) : (min((var_3), (((/* implicit */unsigned int) ((int) var_0))))));
                    }
                } 
            } 
        }
    }
    for (int i_6 = 4; i_6 < 21; i_6 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((unsigned int) ((var_1) ? (arr_9 [i_6 + 1]) : (arr_9 [i_6 + 1]))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_13)))));
    }
    for (signed char i_7 = 4; i_7 < 9; i_7 += 1) 
    {
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_7])))) ? (max((1038561026751096276ULL), (((/* implicit */unsigned long long int) (short)833)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) arr_3 [i_7] [i_7] [i_7]))))) >= (((((/* implicit */_Bool) 1719392915)) ? (6423588670535693475LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))))))) : (((((/* implicit */_Bool) ((int) arr_6 [i_7] [i_7]))) ? (((((/* implicit */_Bool) arr_0 [13U])) ? (var_7) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) var_0))))))))))));
        arr_28 [i_7] [i_7] = ((/* implicit */signed char) var_12);
        arr_29 [(_Bool)1] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_13)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_9), (((/* implicit */int) arr_27 [i_7])))) < (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_7 [i_7 + 2] [i_7 + 2] [i_7])))))))))));
    }
    var_30 -= var_8;
}
