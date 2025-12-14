/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126620
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
    var_15 = min((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_8))))), (max((min((((/* implicit */unsigned long long int) var_8)), (var_0))), (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_16 -= ((/* implicit */unsigned short) (-(var_1)));
                            var_17 += ((/* implicit */_Bool) var_12);
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-2147483647 - 1));
                    }
                } 
            } 
        } 
        arr_16 [i_0] |= ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) 3615845273U))));
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5] [i_0])) ? (arr_5 [i_5] [i_6]) : (arr_5 [i_0] [i_0])));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_6])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned short) var_5);
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) | (arr_8 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_18 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_23 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */int) arr_22 [i_7] [i_7])) > (((/* implicit */int) arr_22 [i_7] [i_7]))))), (((/* implicit */unsigned long long int) var_5))));
        arr_23 [i_7] = (unsigned char)230;
    }
    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    arr_33 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)15)), (7697242874421474228LL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_10] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) / (var_3));
                        arr_38 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(-8138680131764599668LL)));
                    }
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)63)))))) >> (((min((min((((/* implicit */unsigned long long int) var_3)), (var_0))), (((((/* implicit */_Bool) arr_30 [i_8])) ? (var_2) : (((/* implicit */unsigned long long int) 1069520638U)))))) - (4194621106681024491ULL)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        arr_41 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) var_5);
                        arr_42 [i_8] [i_10] [i_10] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) (signed char)71)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) ? (min((((/* implicit */long long int) 313921696)), (((((/* implicit */_Bool) (unsigned char)24)) ? (8138680131764599665LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_4)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) : (var_5)))))));
                        var_25 = max((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)88)) >= (((/* implicit */int) var_13))))), (max((((/* implicit */unsigned int) (signed char)36)), (arr_32 [i_8] [i_8]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [i_10] [i_10])), (15542780245257726191ULL)))) ? (((/* implicit */int) arr_40 [i_8] [i_8] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
                        arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)127)), (arr_32 [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32309)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))), (-1412339073093128565LL)))));
                        var_26 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_10)) ? (13097657713658416992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9]))))) << (((/* implicit */int) ((_Bool) var_2))))), (min((max((((/* implicit */unsigned long long int) var_14)), (17957042175579008584ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_9)))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) max((min((var_0), (((((/* implicit */_Bool) var_5)) ? (17957042175579008584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))) ? (((/* implicit */unsigned long long int) (-(arr_30 [i_8])))) : (min((arr_44 [i_10]), (((/* implicit */unsigned long long int) var_11))))))));
                        arr_46 [i_8] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */long long int) arr_45 [i_8] [i_8] [i_10] [i_8]);
                    }
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        arr_49 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(var_1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6)))));
                        arr_50 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) min((var_3), (min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) arr_30 [i_14])) ? (((/* implicit */long long int) arr_31 [i_8] [i_8])) : (7125200021603541861LL)))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7697242874421474228LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (5349086360051134623ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) : (var_6)));
                        var_29 = (((!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_5))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) * (((((/* implicit */_Bool) var_3)) ? (15542780245257726191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) arr_30 [i_8])));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            arr_56 [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) -1)), (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_39 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)63407))))))) : (((((/* implicit */_Bool) var_0)) ? ((((_Bool)0) ? (var_5) : (arr_26 [i_8]))) : (((/* implicit */long long int) ((int) var_5)))))));
                            arr_57 [i_15] [i_15] [i_15] [i_10] [i_15] [i_10] [i_15] = ((/* implicit */int) var_4);
                            var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) (signed char)-3)), (-1)))), (min((((/* implicit */long long int) arr_25 [i_8] [i_9])), (min((var_7), (var_1)))))));
                        }
                        arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(arr_29 [i_10] [i_10]))), (((/* implicit */int) ((arr_36 [i_8] [i_8] [i_8] [i_8]) <= (((/* implicit */unsigned long long int) var_5)))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))) : (min((max((17821703523233957944ULL), (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) 3849954099317524826ULL)) ? (var_6) : (arr_36 [i_8] [i_8] [i_8] [i_8])))))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) -2906731875126730774LL)), (15063669374244682967ULL))), ((+(var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_44 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9))))))))));
    }
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_4))))) ? (min((((/* implicit */long long int) ((2147483647) <= (((/* implicit */int) var_13))))), (8487220136745927282LL))) : (min((((/* implicit */long long int) 168007658U)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_10)) : (var_5)))))));
    var_33 = ((((/* implicit */_Bool) var_12)) ? (-4017964112878328665LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -217260435260127230LL)) <= (9085377009006292495ULL))))));
}
