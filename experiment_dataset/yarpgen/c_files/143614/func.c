/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143614
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_3))) & ((~(((/* implicit */int) var_6))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_0))))))))));
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_9 [i_0] [i_0 - 2]))), (max(((+(((/* implicit */int) arr_3 [i_0 + 3])))), (((/* implicit */int) arr_9 [i_0 - 2] [i_0 + 2]))))));
                    arr_10 [(signed char)17] &= ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_2)) : (351471645035605973LL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_4 [(short)13] [i_2] [9U])) ? (((/* implicit */int) arr_9 [i_0 + 2] [(_Bool)1])) : (((/* implicit */int) (signed char)14))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (short)16990)), (8254850078628710274ULL))), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_3 + 1] [(signed char)18])), (3003496513924357946ULL))))))))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) (_Bool)1))))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1] [i_1] [i_0])))))) ? (((min(((_Bool)1), (var_4))) ? (max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [(short)18])), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)2040)) || ((_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0 - 2] [i_0]))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        arr_16 [(short)5] [i_1] [(short)5] [i_4] = (short)-2043;
                        var_15 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35399695311091478ULL)) ? (((unsigned long long int) arr_5 [2ULL] [i_4 + 2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27644)) ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-24508))))))))) ? ((+(18411344378398460148ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_4]))));
                    }
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0 + 2])))) & (((((/* implicit */int) arr_4 [(short)7] [(_Bool)1] [i_2])) % (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_2))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned int) var_8))));
}
