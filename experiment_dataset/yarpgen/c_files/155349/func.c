/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155349
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 |= ((/* implicit */long long int) arr_3 [i_2]);
                    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1])) >> (((max((((/* implicit */unsigned int) arr_3 [i_0])), (3077244698U))) - (3077244696U)))))) + (((((/* implicit */_Bool) -7630758559779077067LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) % (-1239254700967698153LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (-1345107675)))) ? (((727435396) >> (((/* implicit */int) (signed char)31)))) : (max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))));
                                var_16 = ((long long int) min(((-(arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 1] [i_4]))), (((/* implicit */unsigned long long int) min((var_11), (1345107687))))));
                                arr_13 [i_0] [16LL] = arr_3 [i_0];
                                arr_14 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((var_7) ? (1260113235) : (((/* implicit */int) arr_4 [i_1] [(_Bool)1])))) : (max((((/* implicit */int) (signed char)-54)), (727435401)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */int) arr_7 [i_2] [i_4]))))))) : (((/* implicit */int) ((signed char) arr_6 [i_0] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_5 - 1] [i_6]);
                                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-1)))) : (((long long int) (_Bool)1))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_1 + 1] [i_2] [i_6]))) : (13711940052916530088ULL)))));
                                var_19 += ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-80)) ? (((7540739061283932328LL) >> (((((/* implicit */int) (signed char)-30)) + (75))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1369591428)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_15 [i_0 - 1] [i_0 - 1])))))), (((/* implicit */long long int) var_8))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((((/* implicit */int) ((arr_2 [i_5] [i_2]) >= (((/* implicit */unsigned int) -592875569))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (var_12)))))), (((/* implicit */int) (unsigned char)239)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((-7549301647453531292LL) ^ (((/* implicit */long long int) -1662055255))));
}
