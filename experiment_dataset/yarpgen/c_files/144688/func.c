/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144688
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_0 + 1] [i_0])) == (((/* implicit */int) arr_3 [i_2 - 2] [i_0 + 1] [14LL])))))));
                    var_13 = ((/* implicit */unsigned char) ((long long int) (+(max((794209763756346222ULL), (((/* implicit */unsigned long long int) 5135947488423896052LL)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 17652534309953205397ULL)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (signed char)0))))) : (max((var_3), (9149187403806723386LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(signed char)17] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3783822433392207158LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5])))))) : (arr_15 [i_3 + 1] [i_3 + 1])));
                    var_16 = (!(arr_14 [i_5] [(_Bool)1] [i_3]));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_22 [i_4] [i_5] [i_4] = ((/* implicit */short) ((unsigned long long int) ((arr_16 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 - 1]))))));
                                var_17 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [16LL])) ? (-3783822433392207158LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3]))))) / (arr_12 [i_3] [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((signed char) 9149187403806723386LL));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((arr_11 [i_3 + 1]) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) % (arr_21 [i_3] [i_3 + 1] [i_3 - 1] [i_3])));
    }
    for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */long long int) (-(max((arr_19 [i_8 - 1] [i_8 + 1]), (((/* implicit */unsigned int) var_6))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned int i_10 = 1; i_10 < 24; i_10 += 3) 
            {
                {
                    var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9149187403806723386LL)) ? (-7861114280533791349LL) : (-8225236434131532764LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_26 [i_8 - 1])), (arr_24 [i_8 + 1]))))) : (arr_23 [i_8 + 1] [i_8 + 1])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        for (long long int i_12 = 1; i_12 < 24; i_12 += 3) 
                        {
                            {
                                arr_37 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) 794209763756346222ULL);
                                arr_38 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) min(((-(arr_30 [i_8] [i_10 - 1] [i_11] [11U]))), (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_10] [(unsigned char)21] [i_8]))) - (arr_19 [i_8 - 1] [i_8])))))));
                            }
                        } 
                    } 
                    arr_39 [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) ((8657424399681219648LL) == (3783822433392207148LL)));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            {
                                arr_45 [i_8] [i_9] [i_10] [i_9] [(unsigned short)10] [6LL] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_36 [i_8 + 1] [i_8] [i_8 + 1] [i_8])), (6176406192218408421LL)))) ? ((-(arr_34 [i_8] [i_8] [i_8] [i_13] [i_8] [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_14]))) ^ (17652534309953205393ULL)))) ? ((-(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (short)23526))))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3783822433392207148LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3783822433392207173LL)) ? (3783822433392207148LL) : (((/* implicit */long long int) 37764916))))) ? (2604209674U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24584)))))));
                                arr_46 [i_9] [i_13] [(unsigned char)6] [(unsigned short)22] [i_9] [(unsigned short)22] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) arr_10 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_8] [i_9] [i_10] [i_13] [(_Bool)1] [(_Bool)1] [i_14])))))) : (((3783822433392207145LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((-5358563891688675224LL) + (9223372036854775807LL))) >> (((var_8) - (3188036676U)))))) ? (((((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_10 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8 + 1] [i_10] [i_14]))) : (6029727806360974029LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                {
                    arr_57 [i_15] [i_15] [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_15 - 1] [i_16] [21] [i_16])) ? (arr_19 [i_15 + 1] [i_15 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((3783822433392207168LL) == (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))))))));
                    arr_58 [i_15 + 1] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_33 [i_17] [i_16] [4LL] [i_16]))));
                }
            } 
        } 
        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [i_15])) ? (17652534309953205393ULL) : (134217727ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (9223372036854775794LL))))) : (((((/* implicit */_Bool) arr_32 [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_15])) ? (var_9) : (arr_44 [(signed char)24])))));
        var_25 = ((/* implicit */long long int) ((((7108258688857989386ULL) & (((/* implicit */unsigned long long int) 0LL)))) >> (((((/* implicit */_Bool) -6894750725993221429LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_51 [24ULL])))));
    }
}
