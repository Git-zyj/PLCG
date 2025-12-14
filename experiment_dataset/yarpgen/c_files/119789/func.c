/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119789
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) arr_3 [i_0])))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0])), (0LL))))))) < (((/* implicit */int) arr_1 [i_1]))));
                        arr_14 [i_0] [(signed char)4] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((10237005725094496609ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_1 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)9344)) : (((/* implicit */int) arr_1 [(_Bool)1])))) * ((~(((/* implicit */int) var_1))))))) : (var_6)));
                        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_12 [i_0] [i_1 - 1] [i_2] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8209738348615055007ULL)))))))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned short)56192))) - (((/* implicit */int) min((arr_13 [i_4] [i_4 - 3] [i_4 - 3] [i_0]), (arr_13 [i_4] [i_4 - 1] [i_4] [i_0]))))));
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_0] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)7))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)3598))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_20 *= ((/* implicit */unsigned char) ((arr_6 [i_0] [i_5] [i_0]) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_0] [i_5])), ((-9223372036854775807LL - 1LL))))) : (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -3152337286727481357LL)), (var_6)))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) (signed char)-68)))))));
                        arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_19 [(signed char)4] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_1 - 1] [(signed char)6])) ? (arr_12 [6] [(signed char)4] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) 1124728251))));
                        arr_23 [(short)1] [i_0] [i_2] [i_5] [6LL] = ((/* implicit */unsigned char) var_11);
                        var_21 = max((-8484552745972452639LL), (((/* implicit */long long int) (unsigned short)34105)));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [(_Bool)1]);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_8 [i_0] [(_Bool)1] [i_0])));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (unsigned short)25646))));
                        }
                    }
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((var_6), (arr_8 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (unsigned short)19988)) : (((/* implicit */int) arr_29 [i_1 + 1] [i_1 - 1] [i_8 + 3])))));
                        var_28 ^= ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((_Bool) arr_26 [i_2])))))));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [8] [i_1] [i_2] [8]))) / (8484552745972452638LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (min((arr_27 [(_Bool)1] [i_8] [i_8] [i_2] [i_2] [(_Bool)1]), (arr_27 [(_Bool)1] [(unsigned short)2] [i_8 + 1] [(unsigned short)2] [(unsigned short)2] [(_Bool)1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_33 [i_0] [(signed char)10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)9)), (-8484552745972452639LL)));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)39890))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)111))))), (min((((/* implicit */long long int) arr_25 [i_0] [i_1] [i_2] [(signed char)10] [i_9])), (arr_11 [i_0] [i_0] [i_0] [i_8] [i_9]))))) : (max((((long long int) arr_3 [i_0])), (((/* implicit */long long int) (unsigned char)168))))));
                            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)25645), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [(unsigned short)8] [i_2] [(unsigned short)8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [(_Bool)1]))) : (var_6)))) ? (((/* implicit */int) ((_Bool) (short)3598))) : (((/* implicit */int) arr_18 [i_0] [(unsigned char)9] [i_0] [i_0]))))) : (max((((/* implicit */long long int) (unsigned short)4439)), (max((arr_32 [5ULL] [i_2] [i_2] [i_0] [i_2] [(unsigned short)11] [i_0]), (((/* implicit */long long int) (unsigned short)4661))))))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_0))));
                            var_33 = (signed char)-10;
                        }
                        var_34 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)34105)) < (var_4))))) * (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_8] [(signed char)8] [i_0])))), ((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [10ULL]))))))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
        {
            {
                var_36 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)230))));
                var_37 += ((/* implicit */_Bool) (-((+((-(((/* implicit */int) (signed char)127))))))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46310)) / (((/* implicit */int) arr_36 [i_11 + 2]))))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [(signed char)3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_39 [i_11])))) < (((/* implicit */int) arr_34 [i_11 + 2]))))))));
                var_39 = ((/* implicit */signed char) 2155575123U);
                var_40 = ((/* implicit */int) max((var_40), (((((/* implicit */int) ((((/* implicit */int) arr_38 [i_11] [i_11 + 1] [i_11 - 1])) < (((/* implicit */int) var_13))))) + (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)62277))))))) : (var_7)));
}
