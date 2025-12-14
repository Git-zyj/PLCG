/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161277
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) (short)-844))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(var_8)))) && (((/* implicit */_Bool) 2669408333U))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) min((arr_6 [i_0]), (((/* implicit */int) var_2))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = max((((/* implicit */int) min((var_4), (var_2)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned int) arr_12 [i_6]);
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) var_6)) | (4684680033312332337ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_24 [i_0] [i_1] [16ULL] [i_5] [i_6] = ((/* implicit */short) (~(2669408333U)));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)113)), (2305843009213693952LL)))))))) | (234338492061667984ULL)));
                }
                for (long long int i_7 = 3; i_7 < 17; i_7 += 2) 
                {
                    arr_29 [i_0] [(unsigned short)5] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (-(var_7))))));
                            arr_34 [9] [(_Bool)1] [i_0] [i_0] [i_9 + 1] [2ULL] [i_9] = var_8;
                            arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1625558977U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6197))) : ((-(var_7)))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */long long int) -177519272)) % (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_6))))) > (min((((/* implicit */long long int) (_Bool)1)), (var_5))))))));
                        }
                        var_15 = ((/* implicit */long long int) max((var_15), ((-(max((var_5), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)46344)))))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((max(((((_Bool)1) ? (5622962142227475722LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5837))))), (var_5))), (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
                        arr_38 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_6))), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) != (min((4569407294252559516LL), (((/* implicit */long long int) (unsigned short)30989))))))))));
                        arr_39 [2U] &= ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) | (-4569407294252559511LL)))));
                    }
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) / (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)5390)))))))));
                        arr_43 [(_Bool)1] [i_1] [i_1] [(signed char)6] [i_1] [i_1] &= ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)80))))) : (9810798919604393107ULL)));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))) ? (((var_7) % (arr_21 [i_0] [(_Bool)1] [(signed char)8] [i_11] [i_7 - 2] [(signed char)8] [i_7]))) : (((long long int) (short)32767)))))));
                    }
                    for (long long int i_12 = 2; i_12 < 15; i_12 += 4) 
                    {
                        var_19 |= var_2;
                        arr_47 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_3))))) / (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : ((-9223372036854775807LL - 1LL)))))), (4876059060269961503LL)));
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) ((4740503673067212194ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) >= (((/* implicit */int) (signed char)88))))))))));
                            arr_52 [i_0] [i_1] [i_0] [i_0] [i_13] [i_13] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((10306940231397904674ULL), (((/* implicit */unsigned long long int) 3147957723U))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-20643)) > (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-89)) || (((/* implicit */_Bool) var_4)))))))) : (((13706240400642339392ULL) / (((/* implicit */unsigned long long int) ((long long int) var_4)))))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 16; i_14 += 3) /* same iter space */
                        {
                            arr_57 [i_0] [i_0] [i_7] [i_12 + 3] [i_14] = ((/* implicit */int) 1046528ULL);
                            var_21 = var_6;
                            var_22 = max((((/* implicit */long long int) ((((8413827318068596431ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (signed char)-41))))), (min((((/* implicit */long long int) (-(-313725088)))), (min((var_5), (((/* implicit */long long int) (_Bool)1)))))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
                        {
                            arr_61 [i_12] [i_12] [i_0] [i_12] [i_0] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                            arr_62 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_12] [i_15])) | (((/* implicit */int) var_4))))) == (((((/* implicit */_Bool) (signed char)115)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 17000699126502546954ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_9 [i_12 + 3] [i_15 + 1] [i_7] [i_7 - 2])))));
                            arr_63 [(short)2] [i_12] [i_12] [i_0] [(short)2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)23798)) | (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned short)26185)) : (((/* implicit */int) (unsigned short)26187))))));
                            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3570644723744683275LL)) ? (-1185526512374809820LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (4034037342U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (arr_56 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1]))))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) var_4);
                    }
                    arr_64 [i_0] [i_1] [i_7 + 1] [i_7] = ((unsigned short) max((((/* implicit */long long int) (short)27269)), (var_8)));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 3138329059U))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 16; i_16 += 1) 
                    {
                        for (long long int i_17 = 1; i_17 < 17; i_17 += 2) 
                        {
                            {
                                arr_71 [i_0] [i_1] [i_7] [10LL] [i_0] = ((/* implicit */short) var_3);
                                arr_72 [i_0] [(short)11] [i_0] [i_16 + 2] [i_17] = ((/* implicit */unsigned int) -899100213);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((var_9) != (min((((((/* implicit */_Bool) (signed char)82)) ? (8834914138568748677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))))))))));
                    arr_76 [i_0] [i_1] [2U] [i_0] = ((/* implicit */signed char) arr_54 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1]);
                    var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_7) > (var_8)))), (((((/* implicit */_Bool) (unsigned short)14055)) ? (1447762933974786618LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10391)))))));
                    arr_77 [(signed char)16] [i_1] [(short)6] &= ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && ((_Bool)1)))), (var_2)));
                }
                for (unsigned int i_19 = 1; i_19 < 17; i_19 += 1) 
                {
                    arr_80 [(signed char)14] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26405)))))) ? (var_7) : (min((((/* implicit */long long int) var_4)), (var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3252939216U))))) : (((/* implicit */int) var_4))));
                    var_28 = ((/* implicit */int) min((var_28), ((~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)362)) || ((_Bool)1)))))))));
                }
            }
        } 
    } 
}
