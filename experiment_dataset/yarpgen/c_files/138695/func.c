/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138695
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
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_11)))) && ((((_Bool)1) || (((/* implicit */_Bool) var_11)))))) || (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) || ((!(((/* implicit */_Bool) var_11))))))));
    var_19 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (378287950384120462ULL) : (378287950384120462ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_7)) : (var_4))) >= (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), ((~(18068456123325431154ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))) > (var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_4) : (var_4)))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_15))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [(signed char)16] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1 - 3] [i_0])) | (((/* implicit */int) var_14)))))))) | (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((unsigned long long int) 18068456123325431154ULL))))))));
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_1 - 1]);
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) 375724725126900798ULL);
                    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                    arr_12 [i_2] [i_2 - 1] [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_2)))), ((~(((/* implicit */int) var_3))))));
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (((~((~(2147483647))))) << ((((((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51469))) != (arr_6 [i_0] [i_0] [(_Bool)1])))))) + (13))) - (11)))));
                                var_23 |= ((/* implicit */_Bool) max(((-((~(((/* implicit */int) (signed char)24)))))), (min((arr_16 [i_1] [i_4] [i_5 + 1] [i_5]), (((/* implicit */int) ((378287950384120462ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)-56)) - (var_7)))))) && (((((/* implicit */_Bool) arr_18 [i_1 - 3] [i_1 + 1] [i_1] [i_3] [i_6 + 1] [i_6 + 1])) && (((/* implicit */_Bool) arr_18 [i_1 - 3] [i_1 - 1] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 1]))))));
                        arr_24 [i_0] [(short)2] [i_1 - 1] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_9)), (max((var_15), (((/* implicit */unsigned long long int) (signed char)-30)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [4U] [(_Bool)1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_11))))));
                        var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_17)))) ? (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_10)))) : (max((((/* implicit */int) (unsigned short)13529)), (var_7)))))));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_1] [i_0] [(_Bool)1] [i_3] [i_3] = ((/* implicit */short) ((max((((/* implicit */long long int) (~(arr_19 [i_0] [i_1] [i_3] [i_1] [i_3])))), (((((/* implicit */long long int) var_12)) + (arr_2 [(unsigned short)3] [i_1 - 1]))))) == (min(((-(3065231639787803169LL))), (((/* implicit */long long int) ((4294967286U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        arr_29 [i_7] [i_7] [i_0] [i_7] = ((/* implicit */signed char) 18071019348582650817ULL);
                    }
                }
                for (unsigned char i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)25)) + (((/* implicit */int) (_Bool)1)))) < ((-(((/* implicit */int) var_1))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) (unsigned char)68)))))) & ((((_Bool)1) ? (12375335792987391169ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [8]))))))));
                    arr_34 [i_0] [i_1] [0] [i_8 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(signed char)1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) % (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_27 [i_0] [i_0] [i_1] [i_8]), (var_3))))) : (min((((/* implicit */unsigned long long int) -965521529593142876LL)), (var_16))))))));
                    var_27 -= ((/* implicit */short) 965521529593142892LL);
                    arr_35 [i_0] = ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1]);
                }
                for (int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)927)) % (max((((/* implicit */int) (_Bool)1)), (var_7)))))) ? (min((((/* implicit */unsigned long long int) max((arr_15 [i_0] [i_9] [i_1] [i_0]), (((/* implicit */long long int) (_Bool)1))))), ((-(arr_37 [i_0] [i_0] [i_11] [i_10]))))) : (min((min((var_16), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16)))))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_0] [20ULL])) ? (((((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_10] [i_11] [i_11])) - (((/* implicit */int) var_5)))) - (((/* implicit */int) ((arr_22 [i_0] [(_Bool)1] [i_0] [i_0] [i_11]) <= (11956069565984987096ULL)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) var_6)))))));
                                var_30 = ((/* implicit */_Bool) min((max((8388607ULL), (((/* implicit */unsigned long long int) (unsigned short)64608)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_18 [i_1] [i_1 + 1] [i_1 - 1] [(short)9] [i_1] [i_10])))))));
                            }
                        } 
                    } 
                    arr_45 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_13 [i_9] [i_9 - 1] [i_9 - 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_1] [i_9]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_5 [i_0]))))))))) : (min((((((/* implicit */_Bool) arr_22 [i_9] [i_9 + 2] [i_0] [i_0] [9U])) ? (arr_2 [i_1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64628))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_1)))))))));
                    arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_20 [i_1 - 3] [i_1 + 1]), (arr_20 [i_1 + 1] [i_1 - 2])))), (((((/* implicit */_Bool) (unsigned char)127)) ? (-1698595030783566593LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_17);
                        arr_50 [i_0] [i_0] [i_9 + 3] [i_9 + 3] = ((/* implicit */short) ((((12375335792987391169ULL) & (var_15))) ^ (((/* implicit */unsigned long long int) 1157140431U))));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_0] [i_1 - 3] [(signed char)9] [i_13] [i_13] [i_13 - 1]))))) && (((/* implicit */_Bool) min((arr_47 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_10)))))))) * (((/* implicit */int) ((((arr_22 [i_13 - 1] [i_13] [i_0] [i_13 - 1] [i_13]) >> (((arr_43 [i_0] [i_1 - 3] [i_1 - 2] [(unsigned short)5] [(short)14]) - (6151746507062188158ULL))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))))));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7384578223834906595ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) : (76936728201897891LL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (var_6))))))))))));
                }
            }
        } 
    } 
}
