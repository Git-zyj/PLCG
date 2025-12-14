/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101334
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) << (((((/* implicit */int) arr_0 [i_0])) - (10192)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_15 = ((arr_1 [i_0] [i_1]) << (((var_0) - (15888104999833328957ULL))));
            var_16 = ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_0]));
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                arr_7 [i_1] [12ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) 46976870)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_18 = ((((/* implicit */_Bool) arr_10 [i_0])) ? (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)255)))) : ((+(((/* implicit */int) arr_8 [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (short i_4 = 4; i_4 < 15; i_4 += 4) 
                {
                    var_19 += ((/* implicit */unsigned char) ((1107514387) << (((arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]) - (3805692158U)))));
                    var_20 -= ((/* implicit */unsigned char) 17905992818542303945ULL);
                }
                arr_13 [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-1891965331) : (arr_9 [i_0] [i_3] [i_3])));
            }
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_21 = ((/* implicit */signed char) 16388444034576245935ULL);
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1507842668U))));
            }
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1])))))));
        }
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(-777123744)))) % (arr_3 [i_0] [i_0] [i_6])));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_6])) ? (arr_19 [i_0] [i_6]) : (var_0))))));
        }
        for (int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 1107514387)) ? (((/* implicit */int) arr_16 [i_7] [i_7] [i_0] [i_0])) : (((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_26 = ((/* implicit */short) (+(((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                var_27 = ((/* implicit */unsigned long long int) (((+(arr_26 [i_0] [i_0]))) % (((/* implicit */int) arr_8 [i_8] [i_7]))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_28 = ((((/* implicit */_Bool) ((((-777123749) + (2147483647))) << (((((/* implicit */int) (signed char)119)) - (119)))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_7] [i_8])) : (((/* implicit */int) arr_11 [i_0] [i_7] [i_7] [i_8] [i_9] [i_7])))) : (((/* implicit */int) ((arr_11 [i_0] [i_7] [i_8] [3ULL] [i_9] [(unsigned short)11]) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]))))));
                            arr_31 [i_0] [i_7] [i_7] [i_0] [i_10] [i_7] |= ((/* implicit */signed char) 8362326003341637737ULL);
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(arr_10 [i_7]))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)231)) ? (((((/* implicit */_Bool) -1107514389)) ? (((/* implicit */int) (short)-28252)) : (((/* implicit */int) (signed char)20)))) : ((+(((/* implicit */int) (unsigned char)3))))));
            var_31 ^= ((/* implicit */_Bool) 4294967286U);
        }
        for (int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 837058366)) ? (((/* implicit */int) (unsigned char)64)) : (var_10)))) ? (((/* implicit */int) (signed char)67)) : (((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))))));
            arr_36 [i_0] [10ULL] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28252))) : (10084418070367913879ULL)))) ? (((((-334088324) + (2147483647))) << (((((/* implicit */int) (short)4096)) - (4096))))) : (((/* implicit */int) (short)-4107))));
            var_33 = ((/* implicit */_Bool) var_2);
            var_34 = ((/* implicit */unsigned long long int) 116074926);
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_12])) ? (arr_17 [i_12] [i_12] [i_12]) : (((/* implicit */int) var_5))));
        var_36 |= ((/* implicit */int) ((((var_11) << (((((/* implicit */int) var_5)) - (81))))) << (((((((/* implicit */_Bool) arr_3 [i_12] [i_12] [i_12])) ? (588387122U) : (var_4))) - (588387118U)))));
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) % (((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((var_0) - (15888104999833328957ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((1681590003U), (((/* implicit */unsigned int) (unsigned char)251))))))));
}
