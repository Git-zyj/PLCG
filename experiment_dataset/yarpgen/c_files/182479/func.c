/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182479
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 225779460470638079ULL))) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) : (18220964613238913537ULL)))) ? (var_2) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))))))));
        var_11 = var_9;
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (((arr_3 [i_1]) - (arr_3 [i_1])))));
            arr_5 [i_1] = ((/* implicit */signed char) ((unsigned short) 225779460470638087ULL));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) 225779460470638080ULL);
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((18220964613238913528ULL) == (arr_0 [i_0]))))))) ? (18220964613238913529ULL) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) var_1)) : (((arr_6 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (225779460470638097ULL)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) max((((_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((18220964613238913543ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71)))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)45045))));
                    }
                } 
            } 
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (4194303ULL)))) && (((_Bool) (+(arr_4 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))) + (arr_20 [i_5])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) > (arr_20 [i_5]))))) / (((((/* implicit */_Bool) 14952896322663777796ULL)) ? (4607869047477938542ULL) : (225779460470638077ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5]))) == (var_7)))))));
        var_14 = ((((/* implicit */_Bool) (-((((_Bool)1) ? (47411984) : (((/* implicit */int) (unsigned short)20491))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_20 [i_5])), (var_5)))), (2255614562328145039ULL))));
    }
    var_15 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 18220964613238913544ULL)) ? (var_8) : (((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), ((+(225779460470638102ULL)))));
}
