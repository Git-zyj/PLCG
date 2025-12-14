/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171219
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)242))), (arr_1 [i_0] [i_0 + 2])));
        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (((unsigned int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 - 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2545))) : (58660072609861415LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (-768403872) : (((/* implicit */int) arr_7 [i_3] [i_1 - 1] [i_2])))))));
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_3] = (i_0 % 2 == zero) ? (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (58660072609861388LL) : (58660072609861388LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 1] [i_2] [i_3] [i_0] [i_1 - 2])) - (24051)))))))) : (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (58660072609861388LL) : (58660072609861388LL))), (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 1] [i_2] [i_3] [i_0] [i_1 - 2])) - (24051))))))));
                    }
                    arr_11 [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) -58660072609861415LL))), ((-(((/* implicit */int) arr_4 [i_0] [i_0]))))))) ? (((arr_9 [i_0 + 2] [i_0 + 2]) ? (min((-58660072609861415LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))) : (((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0])))), ((((_Bool)1) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) arr_3 [i_0] [i_2])))))))));
                    var_14 = ((/* implicit */signed char) (unsigned short)1);
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 58660072609861406LL)) ? (min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))), (((((/* implicit */long long int) 2205216923U)) + (58660072609861410LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) -3429761077165214122LL)))))));
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (signed char)-29)), (min((arr_6 [i_0] [i_0] [i_1 - 1] [i_2]), (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((unsigned char) ((int) (-(arr_15 [(signed char)12])))));
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1088373107)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2089750373U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [5U] [i_4 - 1]))) : (((long long int) (short)31654))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */short) ((max((((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 2])), (((int) 58660072609861415LL)))) / (((16777215) + (((/* implicit */int) (unsigned short)65524))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1))))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2205216909U))) : (arr_17 [i_4] [i_4])))));
                        arr_24 [8U] &= ((/* implicit */unsigned char) arr_20 [i_4] [i_5] [i_4] [i_7]);
                        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))))))));
                        arr_25 [i_7] [i_7] [i_4] [(unsigned char)1] [i_5] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)232))));
                    }
                } 
            } 
        } 
    }
    var_21 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) (-(((/* implicit */int) var_1)))))));
}
