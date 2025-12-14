/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121304
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(arr_3 [(short)4])))) && (((/* implicit */_Bool) ((unsigned int) arr_3 [2])))))) == ((+(((int) 10516793863188331651ULL))))));
                var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (max((842875953), (842875948))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (var_5)))))));
                var_17 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(-842875973)))))) ? ((~(((((/* implicit */_Bool) -842875954)) ? (arr_3 [20ULL]) : (((/* implicit */int) arr_2 [i_0] [i_1] [(_Bool)1])))))) : (((/* implicit */int) var_12))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                {
                    arr_12 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_11 [i_4 - 1] [i_4 - 1] [(_Bool)1]), (arr_11 [i_4 - 2] [i_4 + 1] [i_4 + 1])))), ((~(((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 1] [i_4 - 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(arr_13 [i_2] [i_3] [i_3] [i_5] [i_4])))) > (arr_0 [8U] [(_Bool)1])));
                        var_19 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_10 [i_5] [i_4] [i_3] [i_2])))), (max((arr_14 [i_5] [i_5]), (((/* implicit */long long int) arr_5 [i_3])))))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((-4092911554561750563LL), (((/* implicit */long long int) (short)29379))))) || (((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2] [(_Bool)1])))))));
                        var_20 = ((/* implicit */signed char) ((_Bool) max((((unsigned int) arr_0 [i_3] [i_4])), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2] [i_2] [4ULL]))))))));
                    }
                    var_21 &= ((/* implicit */signed char) ((max((var_5), (arr_5 [i_4 - 1]))) > (((arr_5 [i_4 - 2]) | (arr_5 [i_4 + 1])))));
                }
            } 
        } 
        var_22 |= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (((unsigned long long int) arr_5 [i_2])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29379)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((var_2) + (arr_3 [i_2]))))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned int i_7 = 2; i_7 < 7; i_7 += 2) 
            {
                {
                    arr_22 [i_6] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_2] [i_6] [i_6] [i_7]));
                    arr_23 [i_2] [i_6] [2LL] = ((/* implicit */unsigned short) arr_18 [i_7]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 6; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_28 [(signed char)6] [i_8] [i_8] [i_8] [i_9] = var_1;
                                var_23 = var_7;
                                var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_4)), (arr_8 [7U] [2ULL] [i_9])))))) ? (((/* implicit */unsigned int) -842875953)) : (((((/* implicit */_Bool) (signed char)11)) ? (arr_1 [i_7 - 2]) : (arr_1 [i_7 + 2])))));
                                var_25 *= ((/* implicit */short) arr_25 [i_2]);
                                var_26 = ((/* implicit */long long int) 842875947);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) -369518223);
                }
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((max((((arr_8 [i_2] [9U] [3ULL]) ^ (8431091258686660394ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) > (842875945)))))) % (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_9 [i_2] [i_2]))), (((/* implicit */long long int) ((unsigned short) -842875934)))))))))));
        arr_29 [i_2] = var_13;
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        arr_32 [i_10] = ((/* implicit */signed char) (unsigned short)58182);
        var_29 = ((/* implicit */_Bool) arr_31 [i_10] [i_10]);
        arr_33 [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)58176)), (max(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_31 [9LL] [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-12883))))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 2; i_11 < 16; i_11 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)79)) * (((/* implicit */int) var_4)))))))));
            arr_36 [(signed char)14] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_31 [i_11 + 1] [i_11 - 2]), (((/* implicit */unsigned int) (unsigned short)58184))))) ? (((long long int) arr_35 [i_11] [i_11 + 1] [i_11])) : (((/* implicit */long long int) max((260046848), (((/* implicit */int) (short)29379)))))));
            var_31 &= ((/* implicit */signed char) var_5);
            arr_37 [i_10] = ((/* implicit */unsigned char) max((((((_Bool) var_11)) ? (-701458436) : (((842875953) << (((arr_30 [9]) - (309052457U))))))), (((/* implicit */int) ((signed char) arr_3 [i_10])))));
        }
    }
    /* vectorizable */
    for (signed char i_12 = 1; i_12 < 17; i_12 += 3) 
    {
        arr_40 [6U] [6U] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)58170))))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_12] [i_12 - 1])) ? (1928779633) : (((/* implicit */int) arr_2 [i_12] [i_12 + 1] [6ULL]))));
    }
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (unsigned int i_15 = 3; i_15 < 15; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            arr_52 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_34 [i_15]))))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            arr_53 [i_13] [i_14] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_35 [i_16] [i_16] [i_16])))) ? (arr_35 [i_13] [i_15] [i_16]) : (((/* implicit */unsigned int) max((842875953), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) max((arr_51 [i_13] [i_15 - 3] [i_14] [i_16]), (((/* implicit */short) ((signed char) (_Bool)1))))))));
                            var_33 = max((max((((unsigned int) var_12)), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)29400))))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 3356569680U)) ? (-842875934) : (arr_39 [i_17] [i_13])))))));
                            var_34 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_13] [i_17] [i_15 - 3] [(signed char)13])) > (((/* implicit */int) (short)-29381))))), (((long long int) arr_47 [i_13] [i_13] [i_15 - 3]))));
                        }
                        for (unsigned long long int i_18 = 1; i_18 < 13; i_18 += 2) 
                        {
                            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17262))) / (938397593U))))))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (9)))))));
                            var_36 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483643))))), (((signed char) var_10)))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [15LL] [15LL] [15LL] [(signed char)5] [6]))) : (3356569675U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_14] [i_15 - 2] [(signed char)9] [i_18 + 3] [i_18])))))));
                            var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) (short)-29364))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29373))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7366))) / (10014076166439170717ULL))))) << (((((int) 3667449314U)) + (627518002)))));
                        }
                        arr_58 [i_16] [i_15] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_13] [i_13] [(_Bool)1] [i_13])) ? (max((arr_0 [16U] [i_15 - 2]), (((/* implicit */long long int) arr_54 [i_13] [i_15 + 1] [i_15] [(unsigned char)12] [(short)4])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_15] [i_15 - 2] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_35 [i_15 - 3] [i_14] [i_15 - 3]))))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_44 [i_15 + 1] [i_15 - 3] [i_15 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-12883)))))) ? (arr_44 [i_15 - 2] [i_15 - 1] [i_15 - 3]) : (max((((/* implicit */unsigned int) var_5)), (arr_44 [i_15 - 1] [i_15 + 1] [i_15 - 2])))));
                        var_39 = ((/* implicit */signed char) ((unsigned short) ((((var_1) ? (4231419851U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((_Bool) ((unsigned short) arr_34 [i_13]))) ? (((((/* implicit */_Bool) arr_57 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (938397620U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)2)))))))));
    }
    var_41 = ((unsigned int) var_7);
    var_42 = ((/* implicit */int) var_8);
}
