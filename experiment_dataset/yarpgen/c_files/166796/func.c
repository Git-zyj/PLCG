/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166796
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33522)) ? (arr_5 [i_0] [i_0]) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) (unsigned short)32013)) ? (((/* implicit */int) (unsigned short)32006)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((((arr_5 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0]))) < (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)32018)))));
                    var_19 *= ((/* implicit */unsigned char) (~(((((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))))) * (((/* implicit */unsigned int) 882871516))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 = max((((arr_4 [i_0]) >> (((arr_4 [i_1]) - (8219026965169120294LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) 274877906936ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) 9223372036854775807LL);
}
