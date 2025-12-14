/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167062
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
    var_12 -= ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((min((((int) arr_4 [i_2] [7LL])), ((+(((/* implicit */int) var_11)))))), ((-(((var_5) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) var_11);
                                arr_13 [i_2] [i_4] = ((/* implicit */unsigned int) max((((arr_2 [i_3]) || (((/* implicit */_Bool) arr_5 [i_0])))), (min(((_Bool)1), ((_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned int) var_3)) : (3U))) | ((~(arr_3 [i_0])))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_5] [i_2] [i_1] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_2] [i_1] [18] [i_0])) : (((/* implicit */int) (unsigned char)42))))) ? ((-(((/* implicit */int) arr_15 [i_5] [i_5] [(unsigned short)17] [i_1] [(unsigned short)17] [(unsigned short)17])))) : (((/* implicit */int) (!(arr_15 [i_0] [i_1] [i_2] [i_1] [i_1] [i_5]))))));
                        var_17 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)112)));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */short) (unsigned char)217);
                        arr_19 [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (((((var_5) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), ((_Bool)1)))))))));
                        var_19 = ((/* implicit */signed char) (_Bool)1);
                    }
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_3))));
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (signed char)-99))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16269304431103744446ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (arr_14 [i_0] [i_1])))) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) arr_12 [(short)5] [i_1] [i_1] [i_0])) ? (105553116266496ULL) : (min((var_7), (((/* implicit */unsigned long long int) var_6))))))));
                }
            } 
        } 
    } 
}
