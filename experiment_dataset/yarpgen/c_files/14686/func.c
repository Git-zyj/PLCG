/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14686
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
    var_14 = ((/* implicit */long long int) ((((unsigned int) var_6)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_12)))) && ((!(((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_12))));
                    var_16 = arr_2 [i_0] [i_1];
                    var_17 = ((/* implicit */int) 617452473039388187ULL);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_2);
    var_19 = ((/* implicit */long long int) min((var_19), (((var_11) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
                    arr_17 [(short)4] [i_5] = ((((/* implicit */_Bool) (~(2549682958U)))) ? (((arr_15 [i_5 - 3] [i_5] [i_5] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))) : (arr_15 [i_5 - 1] [i_5] [5U] [i_5 - 2]));
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_23 [i_5] [17] [i_5] [i_5] [i_7] [i_7] = (-(var_8));
                                arr_24 [(unsigned short)15] [(unsigned short)15] [(short)6] [i_5] [(short)6] [i_7] [i_7] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), (max((((/* implicit */long long int) arr_14 [(unsigned short)5] [i_4] [i_4])), (arr_16 [i_3] [i_5] [i_6 + 4] [14ULL]))))) + (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */int) (short)63))))))));
                            }
                        } 
                    } 
                }
                for (short i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_8] [i_8 + 1] [(short)10] [i_8] [i_10]))))), (((((/* implicit */_Bool) arr_19 [i_8 + 2] [i_8 - 1] [i_8] [20] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_8 - 1] [(short)11]))) : (arr_16 [(signed char)12] [i_10] [i_10] [18LL])))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_8 + 2] [i_8] [i_8] [i_10]))) | (617452473039388187ULL)))))));
                                var_23 *= ((/* implicit */signed char) arr_32 [(short)6] [i_4] [4ULL] [(short)6] [i_10]);
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (14728164247099247293ULL)))))) + (((((unsigned long long int) arr_16 [i_10] [i_10] [i_10] [i_3])) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                                arr_35 [0ULL] [20LL] [i_8] [19ULL] [0ULL] [i_9 - 2] [(_Bool)1] = ((/* implicit */short) 9617762336313869146ULL);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) max(((short)3613), ((short)32767)));
                    /* LoopSeq 3 */
                    for (short i_11 = 4; i_11 < 19; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((10611753362620938220ULL) ^ (((/* implicit */unsigned long long int) var_12)))))))));
                        arr_39 [i_3] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (arr_34 [i_8] [4] [i_8] [i_8] [11LL]) : (arr_34 [i_8] [i_4] [(unsigned char)8] [i_11] [i_3])))), ((((!(((/* implicit */_Bool) 0)))) ? (min((6705200183402163479ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned char)16] [i_8] [i_4])))))));
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) arr_22 [i_8] [i_4] [i_4] [i_3])) % ((~(14728164247099247298ULL))))), (((/* implicit */unsigned long long int) min((arr_27 [i_12] [i_12] [i_8] [i_12 - 3]), (arr_26 [i_8] [i_8] [i_12 - 1] [i_12 - 3]))))));
                        var_28 = ((/* implicit */unsigned short) var_0);
                        var_29 &= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (var_0)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (0ULL)))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_13] [i_3] [i_3] [(unsigned char)9] [i_3])) || (((/* implicit */_Bool) (short)7424))));
                        arr_45 [i_8] [(_Bool)1] [i_8] [(unsigned char)5] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_43 [i_8] [9U])) % (arr_16 [i_8 - 1] [i_8] [i_8] [i_3])));
                        var_31 = (signed char)-66;
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    arr_50 [(signed char)15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))) ^ (var_1))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [(short)0] [(signed char)18] [i_3] [i_3])), (var_10))))))))));
                    arr_51 [i_3] = ((/* implicit */unsigned char) arr_30 [i_4] [i_4] [i_4] [i_3] [i_4]);
                    var_32 = ((/* implicit */unsigned int) min((var_32), ((~(min((arr_20 [(signed char)12] [(signed char)12] [(signed char)12] [i_4]), (((/* implicit */unsigned int) ((short) arr_9 [(_Bool)1] [i_4])))))))));
                    arr_52 [0ULL] [(signed char)10] [0ULL] [0ULL] &= ((((/* implicit */unsigned long long int) (-(7288927749917674441LL)))) <= (6576383564836334967ULL));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        arr_56 [i_3] [3U] [i_4] [(signed char)14] [(short)10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_4])), (467373848U)))) ? (min((var_1), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_3] [i_4] [i_14]))))))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_33 *= ((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14728164247099247320ULL)) ? (arr_8 [19ULL] [(short)11]) : (((/* implicit */int) var_10))))) - (((arr_29 [16U] [i_14]) << (((-1651402385) + (1651402423))))))));
                            var_34 = ((/* implicit */signed char) 3718579826610304317ULL);
                            var_35 = max((arr_58 [i_3] [i_4] [i_3] [i_15] [i_15]), (((/* implicit */long long int) max((arr_18 [i_4]), (((int) var_10))))));
                        }
                        var_36 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((-(((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [16ULL] [i_4] [2LL] [i_15]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_26 [i_15] [i_4] [i_15] [14]))))));
                    }
                }
                var_37 |= ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) arr_55 [i_3] [i_3] [i_3] [i_4])), (arr_22 [14] [(signed char)16] [(short)8] [(short)14]))) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_3] [2ULL] [2ULL] [20LL] [2U])))))));
            }
        } 
    } 
}
