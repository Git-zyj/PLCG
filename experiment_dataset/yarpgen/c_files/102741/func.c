/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102741
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */_Bool) -150577611);
                        arr_14 [i_0] [i_1] [i_0] [i_3 - 3] |= ((/* implicit */short) var_9);
                    }
                } 
            } 
            var_11 = ((/* implicit */int) (((+(585967353U))) >> ((((+(((/* implicit */int) (short)4926)))) - (4905)))));
        }
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned short) ((-1063575962) & ((-(((/* implicit */int) ((var_3) >= (arr_3 [i_4 + 2]))))))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_20 [15] [i_4] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((150577632) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                var_13 += ((max((1219852460U), (((/* implicit */unsigned int) 150577635)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((((/* implicit */int) (_Bool)1)) ^ (-150577652))))))));
                arr_21 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_18 [9U] [i_4 - 1]) && (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) var_7))));
            }
        }
        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((_Bool) -512451725))));
                arr_27 [i_0] = ((/* implicit */_Bool) ((1981780454) / (((/* implicit */int) (_Bool)1))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(signed char)3])) || ((!(((/* implicit */_Bool) arr_8 [i_0]))))));
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_16 = ((/* implicit */short) var_10);
                var_17 = ((/* implicit */unsigned long long int) ((signed char) var_8));
            }
            for (int i_9 = 3; i_9 < 22; i_9 += 4) 
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(-512451712))))));
                arr_35 [i_0] [i_0] [i_9 - 3] [i_9] = 150577635;
                arr_36 [i_9 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((int) 18446744073709551615ULL));
                var_19 = ((/* implicit */unsigned int) (-(8057115668484408377LL)));
                var_20 = ((/* implicit */_Bool) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)1]))) * (17890094881437930137ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            }
            arr_37 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_34 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1])))) & (((/* implicit */int) (_Bool)0))));
        }
        arr_38 [i_0] = (+((+(((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_0])) == (150577635)))))));
        var_21 *= ((/* implicit */int) (short)0);
    }
    var_22 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) % (((/* implicit */int) var_7))))));
    var_23 = ((/* implicit */unsigned char) var_6);
    var_24 = ((/* implicit */int) (_Bool)1);
    var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)19960)), ((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
}
