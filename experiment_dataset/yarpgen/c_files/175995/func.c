/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175995
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) (unsigned short)47940);
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) 9021438916197957765LL);
                        var_11 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_3])), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45369))) : (var_1)))))) : (var_3)));
                        var_12 = ((((/* implicit */_Bool) max((((797626644268837171ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) -9021438916197957772LL)) & (arr_0 [i_0])))))) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)22514)))) : (min((((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) max((8053097229575880822LL), (((/* implicit */long long int) var_9))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) var_5);
                        var_14 = ((/* implicit */unsigned short) (-(((unsigned long long int) -433211704620560975LL))));
                        arr_17 [i_4] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_12 [i_4] [i_2] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) var_8))))) | (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_2] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65535))))));
                    }
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        var_15 |= ((((/* implicit */_Bool) 403942947708188875LL)) ? (9021438916197957765LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3840))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_9))));
                    }
                    for (long long int i_6 = 4; i_6 < 18; i_6 += 4) 
                    {
                        var_16 += ((/* implicit */unsigned short) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_2))))))));
                        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6 - 1] [i_1])) || (((/* implicit */_Bool) -5327464767186326753LL))))), (((((/* implicit */int) arr_5 [i_6 - 4])) + (((/* implicit */int) arr_5 [i_6 + 3]))))));
                        arr_23 [i_6] [i_6] [i_6] [i_0] |= arr_1 [i_2];
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_4);
    var_19 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55791))) >= (var_8)))), ((+(var_1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (var_5)))))))));
}
