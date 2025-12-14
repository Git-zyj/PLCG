/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139200
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
    var_18 = ((/* implicit */long long int) max((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (max((var_3), (((/* implicit */unsigned short) var_2)))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))) && ((!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2317750333U))) >= ((+(3282557250U)))))), (max(((+(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)-53))))))))))));
            arr_4 [i_1] = (!(((/* implicit */_Bool) arr_3 [i_0])));
            arr_5 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_3 [i_1]), (arr_3 [i_0]))) : (arr_2 [i_0])))));
        }
        var_20 = ((/* implicit */unsigned int) (-((~(min((arr_3 [11LL]), (((/* implicit */long long int) arr_0 [(signed char)10]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_8 [i_2] [12] [12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (+(var_1)))) : (arr_2 [6LL])));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [i_2])))))));
            arr_9 [i_0] [3] [i_0] = ((/* implicit */short) (~(arr_3 [i_2])));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (2108295255U) : (3393776592U)))) : (((unsigned long long int) arr_7 [i_0]))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                arr_14 [i_4] = ((/* implicit */unsigned short) ((unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-2611360216434716119LL))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(_Bool)1] [i_3])) >= (((/* implicit */int) var_9))))), (((unsigned int) (short)-19158))))) && (((/* implicit */_Bool) (-(((unsigned int) arr_10 [i_3] [i_3] [i_3])))))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) var_14);
                arr_17 [i_5 - 1] [i_5] [i_0] = ((/* implicit */unsigned short) 0U);
            }
            var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */int) ((short) 2108295274U))) : (((/* implicit */int) ((unsigned short) arr_16 [i_3] [i_3] [i_0])))))));
            arr_18 [1U] = ((/* implicit */unsigned int) arr_13 [10LL] [2LL] [i_3] [i_0]);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2108295266U)))) ^ (((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            arr_19 [i_3] [8LL] [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) arr_1 [i_0] [6ULL])), (arr_2 [(short)14])))));
        }
    }
    for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 3) 
    {
        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [15] [(signed char)8] [i_6 - 4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_6 + 2] [i_6 + 2] [i_6 - 1]))))) && ((!(((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6]))))));
        var_28 -= ((/* implicit */unsigned short) arr_3 [i_6]);
    }
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_29 = max((max((max((arr_24 [i_7]), (((/* implicit */int) arr_25 [i_7])))), (arr_22 [i_7]))), (((/* implicit */int) var_9)));
        arr_26 [3U] = ((/* implicit */_Bool) ((long long int) ((arr_22 [i_7]) - (((/* implicit */int) (short)-24825)))));
    }
    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) arr_24 [i_8])) + (min((((/* implicit */long long int) var_15)), (arr_7 [3U])))))));
        arr_30 [i_8] [i_8] = ((/* implicit */long long int) ((signed char) -8733270604093012036LL));
    }
    var_31 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
    var_32 = ((/* implicit */signed char) var_7);
}
