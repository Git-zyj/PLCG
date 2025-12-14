/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100626
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
    var_10 = ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1847659295)) ? (-1847659296) : (-1847659296))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) arr_0 [i_2 - 1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1]);
                                var_12 = ((/* implicit */unsigned short) ((unsigned long long int) 10685829689506361375ULL));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) arr_5 [16ULL] [i_0]);
                    var_14 = ((/* implicit */unsigned char) 1847659295);
                    arr_15 [i_2] = ((/* implicit */int) (((+(((unsigned long long int) arr_5 [i_2] [i_1])))) / (((((/* implicit */_Bool) (+(-1847659309)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (1539606553643398424ULL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (arr_0 [(unsigned short)16]))))) : (max((-2090425552656028690LL), (((/* implicit */long long int) (_Bool)1))))))));
        var_16 = ((/* implicit */unsigned long long int) -1847659301);
        arr_20 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!((!((_Bool)1)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) arr_13 [(short)10] [i_5] [i_5] [i_5] [i_5])) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])))), (max((1513035896083610189ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 2; i_6 < 19; i_6 += 3) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((arr_7 [(_Bool)1]) < (((/* implicit */unsigned int) arr_3 [i_6])))))));
            var_18 *= ((/* implicit */unsigned long long int) ((arr_10 [i_6 + 1] [i_6] [17ULL] [i_6] [i_6]) - (((/* implicit */int) arr_5 [i_5] [i_5]))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_6] [i_8] [3] [i_8]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1688176257U)))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_5]))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_6 - 2] [i_6])) && (((/* implicit */_Bool) arr_29 [i_6] [i_6]))));
                            var_22 &= ((/* implicit */unsigned long long int) ((int) arr_23 [i_5] [i_6] [i_5]));
                            var_23 = (-((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39872))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)25639))));
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 851059508)) ? (((/* implicit */unsigned long long int) 1847659294)) : (4018293208102219493ULL))))));
                            arr_34 [i_6] [i_6] = ((2665200432306398018ULL) < (0ULL));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4018293208102219488ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43886))) : (3384475606U)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967282U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21509)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20)))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_39 [(_Bool)1] [i_5] [i_6] [(_Bool)1] [i_8] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) arr_19 [10ULL] [i_8 - 1]));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)52687))))) ? (arr_33 [i_6] [i_6]) : (-851059512)));
                            var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_21 [i_5] [i_11])) ? (((/* implicit */int) arr_18 [(signed char)12])) : (((/* implicit */int) arr_12 [(unsigned short)9] [(unsigned short)9] [(_Bool)1]))))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4333)) ? (((/* implicit */int) (unsigned char)192)) : (arr_3 [1U])))) : (((((/* implicit */_Bool) arr_23 [i_6] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))) : (0U)))));
        }
    }
}
