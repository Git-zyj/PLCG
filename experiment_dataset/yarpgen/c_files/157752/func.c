/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157752
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((signed char) arr_0 [i_0] [i_0])))));
            var_12 = ((/* implicit */short) (unsigned short)38013);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                arr_6 [i_0] [i_1 + 2] [i_2] |= ((/* implicit */short) var_3);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2 + 1] [11]))));
                    var_13 = ((/* implicit */short) (-(11530491802698961739ULL)));
                    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_2 - 1] [i_1 - 1]));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 1]))));
                    var_16 = ((/* implicit */unsigned int) (-((-(6916252271010589876ULL)))));
                }
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((unsigned int) 6916252271010589876ULL)))))));
                var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 2])))));
                arr_14 [i_2] [i_1] [i_0] = min((((arr_8 [i_1] [i_1] [i_2 - 1] [i_1 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_2 + 2]))))), (((/* implicit */unsigned long long int) max((arr_13 [i_2 + 1] [i_0] [i_1] [i_1 + 2] [i_1] [i_0]), (arr_13 [i_2 + 1] [i_1] [i_1] [i_1 + 1] [(signed char)17] [i_1])))));
            }
        }
        for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            arr_19 [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((arr_5 [i_0] [i_5]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((((/* implicit */_Bool) 9223371968135299072ULL)) && (var_5))))))), (arr_10 [i_0] [i_5 + 2] [i_5])));
            var_19 ^= var_6;
            arr_20 [i_0] [i_5 - 1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_2)), (arr_7 [i_5 + 3] [i_5 - 1] [i_5 + 3]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-3596)) : (((/* implicit */int) (unsigned short)28443)))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_20 += ((/* implicit */_Bool) ((unsigned int) ((var_2) / (((/* implicit */int) arr_5 [i_0] [i_6])))));
            var_21 -= ((/* implicit */short) var_9);
        }
        var_22 = ((/* implicit */unsigned short) var_7);
        var_23 = ((/* implicit */signed char) ((unsigned int) min(((~(11530491802698961723ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0]))))))));
        arr_25 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((short) arr_23 [i_0] [i_0]))) && (((/* implicit */_Bool) min((8658654068736ULL), (((/* implicit */unsigned long long int) var_2))))))), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))));
        arr_26 [i_0] = (!(((/* implicit */_Bool) (~(arr_1 [i_0])))));
    }
    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_25 ^= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_5 [i_7] [i_7])) || (((/* implicit */_Bool) arr_21 [i_7] [i_7])))) ? (((((/* implicit */_Bool) -7998226397970156669LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [(short)2] [i_7] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7]))))))), (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) min((arr_8 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - ((-(((/* implicit */int) arr_3 [i_7] [i_8] [i_7])))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3603))) | (((unsigned int) (_Bool)1))));
                    var_28 = ((/* implicit */unsigned int) arr_3 [i_7] [i_7] [i_7]);
                    var_29 = ((/* implicit */short) max((var_29), (((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((arr_13 [i_7] [i_7] [i_8] [i_7] [i_9] [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                }
            } 
        } 
        var_30 &= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_33 [12LL] [i_7] [i_7] [i_7])))), (((/* implicit */int) min((((/* implicit */signed char) arr_31 [0LL] [0LL] [i_7])), (arr_32 [i_7] [i_7] [i_7]))))));
    }
}
