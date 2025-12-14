/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185424
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] [4LL] |= ((/* implicit */short) 2929513230U);
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1]))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1365454065U)) ? (1113520876U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (var_1) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_3 [23ULL])) ? (var_1) : (((/* implicit */int) var_9))))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */long long int) ((unsigned int) (!((_Bool)0))));
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned int) var_10);
            var_20 = ((/* implicit */short) var_4);
            var_21 = ((/* implicit */unsigned int) arr_6 [i_0] [i_2]);
        }
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 4; i_5 < 23; i_5 += 3) 
                {
                    {
                        arr_22 [i_0] [i_3] [i_3] [i_5] = ((/* implicit */short) 4294967282U);
                        var_22 = ((/* implicit */unsigned int) ((short) var_6));
                        var_23 = ((/* implicit */signed char) (((!(arr_14 [i_0] [i_3]))) ? (((/* implicit */unsigned int) -1861207791)) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9905)))))));
                        arr_23 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_20 [i_3]) ? (arr_9 [i_4 - 1] [i_4 - 1] [i_5 - 4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1113520876U)) ? (-1505111285) : (((/* implicit */int) arr_5 [i_0] [i_3] [i_0])))))));
                        arr_24 [i_3] [i_3] [(unsigned char)16] [i_4] [i_4] = ((/* implicit */int) 2929513230U);
                    }
                } 
            } 
        } 
    }
    var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (var_14)))) ? (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-25761)) : (1505111284))))))));
    var_25 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            for (int i_8 = 3; i_8 < 12; i_8 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((arr_33 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_7]), (((/* implicit */long long int) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) -1505111285)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_6] [i_7] [i_8 + 2])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))))));
                    var_27 = ((/* implicit */_Bool) arr_31 [i_8 + 2]);
                    arr_35 [i_6] &= ((/* implicit */int) arr_28 [i_6]);
                }
            } 
        } 
    } 
}
