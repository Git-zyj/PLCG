/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134885
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)204)) % (((/* implicit */int) (unsigned char)191))));
    var_17 &= ((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [(unsigned char)7] = ((/* implicit */long long int) max(((((-(((/* implicit */int) arr_1 [5ULL] [i_0])))) ^ (((/* implicit */int) arr_0 [(unsigned short)13] [i_0 - 1])))), (((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned char)168))))))));
        arr_3 [5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) / (max((-1274333783), (((/* implicit */int) (signed char)-69))))));
        arr_4 [i_0 - 1] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (min((((/* implicit */int) arr_0 [i_0] [i_0 - 1])), (1200056588)))));
        arr_5 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-2147483647) + (2147483647))) << (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min(((unsigned char)191), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_9)) : ((~(-821058843)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (var_7)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 8; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_4] [4ULL] [8] [i_1] = ((/* implicit */unsigned long long int) -4238737728358692477LL);
                        arr_16 [(short)4] [i_4] [(unsigned short)6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */unsigned long long int) arr_7 [i_3 + 2])) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)14)), (-1274333783)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30151)) ? (763153778) : (-763153774)))) : (((arr_6 [i_2]) - (((/* implicit */unsigned long long int) 395414631))))))));
                        arr_17 [i_2] [i_1] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3 - 2] [4ULL])) ? (arr_14 [i_3 + 4] [i_3 + 4] [i_1]) : (arr_14 [i_3 + 1] [i_3] [i_1])))));
                    }
                } 
            } 
        } 
        arr_18 [(unsigned char)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((8188) / (((/* implicit */int) (signed char)-1)))) : (-763153759)));
        arr_19 [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])))) ? ((~(var_4))) : (((/* implicit */long long int) -395414631)))) ^ (var_7)));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((((/* implicit */long long int) -2147483630)) / (var_3)))))) ? (((long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) var_5))))) : (((/* implicit */long long int) (+(763153779))))));
}
