/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131172
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_0 [(short)14])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_6)))) | (((unsigned long long int) arr_2 [i_0]))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                    var_14 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (var_9)))) && (((/* implicit */_Bool) ((unsigned char) var_0))))) ? ((((!(var_6))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_12))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [(short)18])) : (((/* implicit */int) var_5))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0 - 2] [i_1] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [(unsigned char)7] [i_3 + 3]))) : (var_9))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((max(((_Bool)0), ((_Bool)1))), ((!(var_6)))))))));
                        var_16 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32767)));
                        var_17 -= ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) ^ (-2807250333953868278LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)50)))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [11LL] [i_3] = ((/* implicit */unsigned char) var_11);
                    }
                    for (int i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_18 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (!((_Bool)0)))), (((var_5) ? (((/* implicit */unsigned int) arr_1 [i_4] [i_4])) : (33554400U))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) & (((/* implicit */int) (signed char)-9)))) * (((/* implicit */int) ((arr_6 [i_0] [i_4] [i_0]) > (((/* implicit */unsigned long long int) var_3))))))))));
                        arr_18 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 2] [i_0] [i_2] [i_1] [i_0] [i_0 + 1]))) > (var_10))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_2] [i_4 - 1] [i_2] [i_0 - 3] [i_0] [i_4 - 2])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0]))))));
                        arr_19 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 1361989776606870498LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3585713140920620860LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */signed char) var_6)), ((signed char)-9)))), ((~(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((signed char) var_4))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        arr_20 [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        arr_23 [i_0 - 3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_3))))))));
                        var_19 *= ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned int) (unsigned short)65528))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_0]))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))))) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [(unsigned short)1] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
    var_21 = max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) max(((signed char)-17), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-1)))) : (((unsigned int) (short)32767)))));
}
