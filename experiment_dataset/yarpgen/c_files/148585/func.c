/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148585
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
    var_13 *= ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */short) min((var_14), (var_12)));
    var_15 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) max((arr_1 [i_0 - 2]), (((/* implicit */long long int) max((((/* implicit */short) arr_0 [i_0 - 2])), ((short)-32765))))));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_0 [i_0 - 2])))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_0)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_16 *= ((/* implicit */signed char) arr_6 [i_1]);
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (arr_6 [i_1])))) ? ((+(max((((/* implicit */unsigned int) var_7)), (2316451401U))))) : (arr_6 [(unsigned char)2]))))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((unsigned char) (+(min((var_5), (((/* implicit */long long int) arr_13 [i_1] [5U])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_18 [12LL] [i_4] = ((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_5]);
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((!((!(((/* implicit */_Bool) 2316451401U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_9 [i_2] [18U] [18U] [7ULL]))))));
                            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) 2701851858U)) ? (655608120) : (((/* implicit */int) (_Bool)1))));
                            arr_19 [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5] [i_2 - 2] [i_4 + 1])) && (((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_4] [i_2 - 4] [i_4 - 3]))))) << (((/* implicit */int) ((_Bool) arr_16 [i_1] [i_1] [(unsigned short)17] [i_2 - 1] [i_4 - 3])))));
                        }
                        var_20 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_14 [i_2 - 4] [i_2 + 1] [i_4 - 2] [i_4 - 2]), (arr_14 [i_1] [i_2 + 1] [i_4 + 2] [i_4]))))));
                        arr_20 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((unsigned int) min((2701851858U), (((/* implicit */unsigned int) (_Bool)0))))) == (((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)188)))))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) ((4480253395434102339LL) << (((var_8) - (1895444305)))))), (min((((/* implicit */unsigned long long int) 2808256126U)), (var_11)))))));
}
