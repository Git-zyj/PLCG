/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139342
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27915)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) == (max((((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (9223372036854775807LL))), (((/* implicit */long long int) ((9223372036854775807LL) <= (((/* implicit */long long int) var_2)))))))));
    var_17 = ((signed char) var_14);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_1 [i_0])))) ? ((((_Bool)1) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)28))));
                    arr_6 [i_0] [i_0] [i_0] = min(((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (1232728593905986191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_20 -= ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_3] [i_3])), (max((((/* implicit */unsigned short) (signed char)108)), ((unsigned short)65535)))))) : (((/* implicit */int) (((~(137438953216ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (unsigned short)65531)) : (arr_5 [i_3] [i_3] [i_3] [i_3]))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) 0))));
    }
    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        arr_11 [i_4 - 1] [i_4] = ((/* implicit */unsigned char) min((min((max((1308668642), (((/* implicit */int) var_13)))), ((+(((/* implicit */int) arr_3 [i_4 + 1] [i_4])))))), ((-(arr_2 [i_4 + 1])))));
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            arr_16 [i_4] [i_4 + 2] [i_5] = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_13 [i_4 + 2] [i_5] [i_5 - 1])), (1218798861))) ^ (((/* implicit */int) ((unsigned char) arr_2 [i_4 + 1])))));
            arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((int) (unsigned short)4))));
        }
    }
    for (int i_6 = 2; i_6 < 11; i_6 += 3) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_14 [(_Bool)1])) ? (1308668656) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned short)56001))))))));
        var_22 = ((/* implicit */signed char) ((((-1308668643) + (2147483647))) << (((((((/* implicit */_Bool) arr_18 [(unsigned short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_6] [i_6]), (((/* implicit */unsigned char) (_Bool)1)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (27ULL))))) - (44ULL)))));
    }
}
