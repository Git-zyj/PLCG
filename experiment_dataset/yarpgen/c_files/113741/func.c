/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113741
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
    var_14 = ((/* implicit */int) max((max((2370339608U), (2271590064U))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)8))) / (var_5))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (short)0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)94);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_2 [i_0] [i_0 - 3]))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 2])) != (((/* implicit */int) (short)32326))));
        arr_6 [i_1] = ((unsigned short) var_0);
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-3)) && (((/* implicit */_Bool) arr_8 [i_2] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3])))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (208863357916438830LL) : (((/* implicit */long long int) var_2))))));
                    var_17 = ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_2] [i_3] [i_4]));
                    arr_18 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2]))) : (var_8))))) ? (((/* implicit */int) ((signed char) arr_13 [i_2] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))))));
                    arr_19 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_4] [i_3] [i_2]))) ? (((/* implicit */unsigned int) max((-1104052597), (((/* implicit */int) arr_7 [i_4]))))) : (var_1)));
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_12)))) ? ((~(((/* implicit */int) arr_7 [i_2])))) : ((-(((/* implicit */int) (unsigned char)18)))))) ^ (((/* implicit */int) max(((!(((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))));
        arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])))))));
        arr_22 [i_2] = ((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_32 [i_5] [i_7] [i_7] = ((/* implicit */_Bool) ((7298384201415782574LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_5 - 1])) ? (((/* implicit */int) arr_24 [i_5 - 2])) : (((/* implicit */int) (unsigned char)78)))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)81))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 - 2]))))) : ((+(((/* implicit */int) ((((/* implicit */int) (short)3)) <= (((/* implicit */int) (unsigned char)170))))))))))));
                }
            } 
        } 
    } 
    var_19 = min((((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_11)))))), (((/* implicit */unsigned long long int) var_6)));
}
