/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180058
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) ((var_8) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-2))))) : (min((var_0), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(arr_2 [i_0]))) : (arr_2 [i_0]))))));
        arr_4 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 652880188U)) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])))))) != (((((/* implicit */unsigned long long int) var_0)) % (arr_0 [i_0 - 1] [i_0 + 1])))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3642087108U)) ? (((/* implicit */unsigned int) -840192917)) : (156647838U)))) : (arr_0 [0] [i_0])));
    }
    /* LoopSeq 4 */
    for (int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)2)) | (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1 + 3]) : (var_11)))));
        arr_8 [i_1] = (+(min(((~(((/* implicit */int) (unsigned short)65532)))), (max((arr_6 [i_1 + 3]), (-2004762683))))));
    }
    for (int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2])) > (((/* implicit */int) ((((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (_Bool)1))))) >= (arr_9 [i_2 + 2] [i_2 + 3]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_16 += ((/* implicit */unsigned int) ((var_9) >> (((-1) + (10)))));
                        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) arr_15 [i_2 + 2])) : (arr_16 [i_3 - 1] [i_4] [i_4 + 3] [9ULL]))), ((~(arr_16 [i_3 - 1] [i_4] [i_4 + 2] [(signed char)3])))));
                        var_18 += ((/* implicit */_Bool) ((arr_14 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
    {
        var_19 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44121)))))) & (((((/* implicit */unsigned long long int) 2125764115)) * (14801900841838786905ULL))));
        arr_21 [i_6] [i_6] = ((/* implicit */signed char) ((4004357806316733392LL) >= (((/* implicit */long long int) arr_12 [i_6] [i_6 + 1] [i_6 + 1]))));
        arr_22 [i_6 + 1] = ((((/* implicit */int) ((arr_9 [i_6] [i_6]) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))) | (min((arr_6 [i_6 + 1]), (arr_18 [i_6 + 1] [i_6 + 1]))));
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) min((arr_16 [i_7] [i_7] [i_7] [i_7]), (min((((/* implicit */unsigned long long int) (_Bool)0)), ((~(arr_3 [i_7])))))));
        var_20 = ((/* implicit */unsigned short) arr_3 [i_7]);
    }
}
