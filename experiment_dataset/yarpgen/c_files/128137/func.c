/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128137
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) ((long long int) 275069635305359605LL));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) min((arr_3 [i_1 + 2] [i_1 + 1]), (arr_3 [i_1 - 2] [i_1 - 1])))) == (((((/* implicit */_Bool) var_10)) ? (-275069635305359605LL) : (-275069635305359606LL)))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (~(arr_2 [i_0] [i_1 - 2] [i_1]))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) ((arr_5 [i_0] [i_0]) | (((/* implicit */long long int) ((unsigned int) ((-642912143117571011LL) ^ (arr_5 [i_1] [i_1])))))));
                    var_15 &= ((/* implicit */int) (_Bool)0);
                    arr_13 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1 - 2] [i_1 - 1] [i_1 - 2]))) && (((((((/* implicit */long long int) arr_3 [i_0] [i_0])) != (var_5))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))));
                    arr_14 [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) 1776638255U)) : (var_11)))) ? (((((/* implicit */int) arr_6 [i_0])) << (((arr_3 [i_0] [i_0]) + (1138043480))))) : (((/* implicit */int) ((signed char) arr_1 [i_1 - 1])))))) ? (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) (_Bool)0))))) : (var_4)));
                }
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1 + 1])) == (arr_2 [i_1 - 2] [i_1] [i_1 + 2]))))) < ((-(arr_10 [i_0] [i_0] [i_4] [i_0])))));
                    var_17 = ((/* implicit */int) ((min((-275069635305359606LL), (((/* implicit */long long int) arr_0 [i_0])))) >= (((((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_1 - 2] [i_0])) || (((/* implicit */_Bool) (signed char)-32)))) ? (((275069635305359586LL) ^ (((/* implicit */long long int) 452889242)))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (2054049243))))))));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) (signed char)-90)))) ? (((int) -958888263)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5])))) % (((/* implicit */int) (unsigned short)47589)))))));
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((min((((/* implicit */int) arr_1 [i_5])), (2054049234))) << ((((~(-624803173))) - (624803162)))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_15 [i_0] [i_0]))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_12)), (arr_2 [i_1 + 1] [i_1 + 2] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((275069635305359586LL) - (275069635305359565LL)))))))))));
                }
                arr_21 [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)-1))))));
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                arr_30 [i_6] = ((/* implicit */unsigned short) ((arr_15 [i_0] [i_1]) << (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_0] [i_1 + 1] [i_6] [i_7]), (((/* implicit */unsigned short) (_Bool)0)))))) : (((unsigned int) (signed char)34)))) != (2185856410U))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((1152921504606846976ULL) | (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) var_4))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_23 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)-102))) > (((/* implicit */int) ((452889242) != (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_8))))))) : (max((arr_25 [i_9] [i_9] [i_1 - 2] [i_0]), (arr_25 [i_9] [i_0] [i_0] [i_0])))));
                    var_24 = ((/* implicit */long long int) -1997012966);
                    /* LoopSeq 2 */
                    for (long long int i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        arr_37 [i_1] [i_1] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) < (((var_1) ? (arr_35 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10])))))));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_36 [i_0] [i_1] [i_9] [i_0])) > (((/* implicit */int) ((signed char) 28672))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073709056)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_2 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (((4611686017353646080ULL) / (((/* implicit */unsigned long long int) arr_10 [i_10 - 1] [i_9] [i_1] [i_0])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) * (var_4))) / (var_8))))));
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_34 [i_1 - 1] [i_1] [i_10 - 1] [i_10])) || (((/* implicit */_Bool) ((long long int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_34 [i_10 + 1] [i_1] [i_1 + 1] [i_10 + 1])) : (1152921504606846988ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54812)))));
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_27 &= ((/* implicit */unsigned int) (signed char)-1);
                        arr_40 [i_9] [i_9] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) -8915586500867992494LL)) ? (((long long int) (signed char)-114)) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) - (9443)))))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) ((-28673) > (((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_11] [i_0] [i_0])) : (264241152)))) ? (((((/* implicit */_Bool) 1152921504606846988ULL)) ? (arr_15 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7041766288024968697LL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)-1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) <= (arr_35 [i_1 + 1] [i_1 + 1] [i_9] [i_11])))))));
                    }
                }
                for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    arr_45 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -5755171386769120784LL))))), ((-(9218868437227405312LL))))));
                    var_29 = ((((((/* implicit */_Bool) ((((/* implicit */long long int) 394753931)) | (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_12]))) : (((long long int) arr_24 [i_12] [i_1] [i_0])))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)40))));
                    arr_46 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (-(min((((/* implicit */long long int) arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1])), (var_11))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        for (signed char i_14 = 3; i_14 < 8; i_14 += 4) 
        {
            {
                arr_51 [i_14] [i_14] [i_13] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14] [i_13]))) / (arr_22 [i_14] [i_13])))))) : (((unsigned long long int) ((signed char) (signed char)64)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        for (long long int i_17 = 1; i_17 < 9; i_17 += 2) 
                        {
                            {
                                var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_29 [i_13] [i_13] [i_15] [i_16] [i_13] [i_17]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (arr_33 [i_13] [i_13])))) : (((((/* implicit */_Bool) 2554638776113859318LL)) ? (-8828856394716887564LL) : (arr_10 [i_13] [i_13] [i_13] [i_13])))));
                                var_31 += ((/* implicit */_Bool) var_8);
                                var_32 -= ((/* implicit */int) ((arr_31 [i_14 - 3] [i_14] [i_14 + 1]) >> (((var_5) - (1721729970251908966LL)))));
                                arr_59 [i_17] [i_14] [i_15] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8188LL)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_7))))) / (((((/* implicit */_Bool) var_12)) ? (-5755171386769120784LL) : (var_5)))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */int) arr_42 [i_14 + 1] [i_14 + 2] [i_14 + 2]);
                    var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) 5755171386769120795LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33412))) : (5755171386769120783LL)));
                }
                /* vectorizable */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) ((_Bool) 275069635305359586LL));
                    var_36 = ((/* implicit */signed char) var_3);
                    arr_62 [i_13] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) | (arr_39 [i_14 - 2] [i_18 - 1] [i_18] [i_18] [i_18 - 1] [i_18])));
                }
                for (int i_19 = 1; i_19 < 9; i_19 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((275069635305359586LL) - (((/* implicit */long long int) arr_48 [i_14]))))) ? (var_9) : (((((/* implicit */unsigned int) var_3)) - (1504546316U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_13] [i_14])))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_14])) : (((/* implicit */int) arr_42 [i_13] [i_13] [i_13]))))) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (5755171386769120795LL)))))));
                    var_38 = ((/* implicit */unsigned int) ((int) arr_9 [i_13]));
                    arr_65 [i_13] [i_13] [i_14] [i_19] = ((/* implicit */unsigned int) var_12);
                    var_39 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_50 [i_14] [i_14 - 3] [i_14 - 1])) : (((/* implicit */int) arr_50 [i_14 - 2] [i_14 - 1] [i_14 - 1])))) / (((-1324488142) / (((/* implicit */int) arr_47 [i_14 + 2] [i_14 + 1]))))));
                    arr_66 [i_13] [i_14 - 3] [i_14] [i_19] = ((/* implicit */signed char) 16076465638140028703ULL);
                }
                for (int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    arr_71 [i_20] &= min((((/* implicit */int) arr_0 [i_13])), (min((((/* implicit */int) (signed char)122)), (((((/* implicit */_Bool) 275069635305359586LL)) ? (-1625205724) : (((/* implicit */int) var_1)))))));
                    arr_72 [i_14] [i_14] [i_20] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_6) % (var_8)))), (((((unsigned long long int) var_0)) / (((/* implicit */unsigned long long int) var_2))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_21 = 4; i_21 < 19; i_21 += 1) 
    {
        var_40 = min((min((min((-5995239937035867185LL), (((/* implicit */long long int) (unsigned short)448)))), (((((/* implicit */_Bool) arr_23 [i_21] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (arr_5 [i_21] [i_21]))))), (((/* implicit */long long int) arr_33 [i_21] [i_21])));
        arr_75 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_2) ^ (((/* implicit */unsigned int) var_3))))), (((var_6) ^ (var_11)))))) ? (((/* implicit */long long int) -1775586310)) : (((arr_35 [i_21 + 2] [i_21 + 1] [i_21 - 2] [i_21 + 1]) | (((/* implicit */long long int) (~(arr_33 [i_21] [i_21]))))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_41 -= ((/* implicit */int) (signed char)-73);
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) 1048575)) % (8828856394716887587LL))), (((/* implicit */long long int) (signed char)116))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || (((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) < (arr_23 [i_22] [i_22] [i_22]))))))) : (1152640029630136320ULL)));
    }
}
