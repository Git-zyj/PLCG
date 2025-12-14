/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138604
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
    for (short i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (short)-30998))))) : (((((/* implicit */_Bool) 5160701157299294352ULL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) | (((/* implicit */int) (unsigned short)47104)))), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_0] [i_0 + 3])) * (((/* implicit */int) var_1))))))) ? (max(((+(13286042916410257264ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-29)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_13 = ((unsigned char) (~(((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)0))))));
                        var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)26)))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_3 [i_3 + 3] [i_2]))));
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (unsigned char i_7 = 4; i_7 < 22; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5] [i_6 - 1] [i_7 - 3])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_6 + 2] [i_7 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_5] [i_6 - 1] [i_7 - 3]))))));
                    /* LoopSeq 1 */
                    for (short i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (arr_19 [i_5] [i_5 + 4])))) / (arr_14 [i_5])));
                        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (762150335623916631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_9))))))));
                        arr_23 [i_5] [i_6] [i_7 - 4] [i_7] [i_8] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)30))))), (var_3)))));
                        var_20 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))) + (((/* implicit */int) (unsigned short)65527)))));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) -2147483619)), (arr_14 [i_5]))))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
            } 
        } 
    } 
    var_21 -= (+(max((0LL), (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)133))))))));
}
