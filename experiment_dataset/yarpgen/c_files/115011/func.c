/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115011
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_0);
        arr_3 [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) var_8))) >= (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((unsigned int) 3270667993626263934LL)) >> (((((/* implicit */int) ((signed char) var_7))) - (86))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [(signed char)4]) << (((((/* implicit */int) var_4)) - (176)))))) ? (max((((/* implicit */int) (unsigned char)45)), (-1885150710))) : ((~(((/* implicit */int) var_4))))))))))));
        var_11 = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)28811))))) ? (((long long int) (short)32766)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_12 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((arr_13 [8ULL] [i_4] [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1]) ^ (arr_13 [(unsigned char)10] [i_1] [i_2 - 1] [i_3] [i_1] [i_2 - 1]))), (3270667993626263928LL))))));
                        var_14 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_1] [i_3 + 1]))) < (var_7)));
                    }
                } 
            } 
        } 
        var_15 = arr_6 [i_1] [i_1] [i_1];
        arr_16 [i_1] [i_1] = ((/* implicit */long long int) max((max((arr_10 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) << (((-1942636394629414107LL) + (1942636394629414114LL)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                for (int i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    {
                        arr_27 [i_1] [i_5] [i_6 + 3] [i_5] [i_6] [i_1] = ((/* implicit */long long int) ((((((3270667993626263934LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6] [9U] [i_7])) ? (((/* implicit */int) (short)-3311)) : (var_0)))))) >= (((((/* implicit */_Bool) (short)32760)) ? (var_8) : (max((-7684513569308462055LL), (((/* implicit */long long int) var_2))))))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((((_Bool)1) ? (1942636394629414118LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6 + 1]))) : (3270667993626263911LL))))))));
                        arr_28 [i_1] [i_5] |= ((/* implicit */signed char) ((((/* implicit */int) min(((short)7840), (((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_6] [i_1])) || (((/* implicit */_Bool) (unsigned char)211)))))))) | (((/* implicit */int) ((arr_1 [i_1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (var_0) : (((/* implicit */int) arr_9 [i_1] [i_5] [i_5]))))))))));
                        arr_29 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), ((~(-3270667993626263935LL)))))) ? (((/* implicit */unsigned long long int) (~(-3270667993626263955LL)))) : (((3794262288082315657ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) var_7);
}
