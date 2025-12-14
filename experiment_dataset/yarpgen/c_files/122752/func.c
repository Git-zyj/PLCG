/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122752
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_10 *= ((/* implicit */unsigned char) 1440059365693519348LL);
                    var_11 = ((/* implicit */unsigned short) var_2);
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    arr_11 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_3 - 2] [i_3 + 1] [i_3 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [3ULL] [i_1] [i_0] [(_Bool)1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_12 &= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 1440059365693519348LL)))));
                                var_13 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-1440059365693519357LL))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 806195040)) ? (-1557877257) : (((((/* implicit */_Bool) 1440059365693519328LL)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)8] [i_1] [(unsigned short)10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((int) arr_6 [i_3 - 1] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 3])) != (arr_12 [i_3] [0] [(signed char)10] [i_1] [0U]))))));
                    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? ((~(15913905883915120718ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), (arr_15 [i_6] [(signed char)4] [i_0] [i_3] [i_3] [i_1] [i_0])));
                        var_18 = ((/* implicit */unsigned int) ((unsigned short) (signed char)127));
                        arr_21 [(unsigned char)17] [i_6] [i_1] [i_6] [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)84))));
                        var_19 = ((/* implicit */unsigned long long int) (short)32753);
                    }
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        var_20 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_3] [1] [i_3 - 2] [i_3 - 1] [i_3 - 2]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)36934))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) arr_14 [i_3] [i_3] [i_3 - 1] [i_7 + 1])))));
                        }
                        for (signed char i_9 = 3; i_9 < 18; i_9 += 1) 
                        {
                            arr_28 [i_7] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1942891483)) & (var_9)));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (arr_27 [i_0] [(unsigned char)14] [(unsigned char)14] [i_3 + 1] [i_3 - 1] [i_7 + 2] [i_1]))))) : (var_5)));
                            var_24 = ((/* implicit */short) ((unsigned char) (((_Bool)1) ? (var_5) : (var_7))));
                        }
                        arr_29 [i_7] [i_3] [i_7] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) (~(2086685078947873949ULL)));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (short)23831))));
                    }
                    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) arr_8 [i_1] [i_3 - 1] [i_3]);
                        var_27 *= ((/* implicit */signed char) var_6);
                    }
                }
                arr_32 [i_1] = ((/* implicit */unsigned char) (+(var_9)));
                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((2086685078947873949ULL), (((/* implicit */unsigned long long int) 3510052773U)))))));
                var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_5)) ? (((arr_9 [i_0] [(signed char)10] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_7)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_33 [i_11 + 1] [i_11 + 1])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_12] [i_11])) && (((/* implicit */_Bool) var_5))))))));
                arr_37 [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) 8335293856708445223ULL));
            }
        } 
    } 
    var_31 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (((unsigned char) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_13 = 3; i_13 < 20; i_13 += 2) 
    {
        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            {
                var_32 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_42 [i_13 - 2] [i_13 + 1])) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26137))))));
                var_33 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)65521)))));
            }
        } 
    } 
}
