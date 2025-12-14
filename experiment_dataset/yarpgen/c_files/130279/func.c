/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130279
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 18434035282938551094ULL)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))))))) % (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0 + 1])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_16 = (+((-(((unsigned long long int) (unsigned char)56)))));
            var_17 ^= ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7195))) : (var_1))) < (((/* implicit */long long int) ((/* implicit */int) max(((signed char)111), (arr_1 [i_1] [i_1])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_2 [i_3] [i_2] [i_0]))))) * (((/* implicit */int) ((8699338770436531991ULL) <= (5ULL)))))))));
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1] [i_2])) > (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_0 [i_3]))))))));
                        arr_11 [i_3 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)26)) ? (1329975932376492163ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (arr_8 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3])))) || (((/* implicit */_Bool) ((((unsigned long long int) var_14)) + (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0] [i_1] [i_2]))))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40892))))), (((/* implicit */unsigned long long int) (signed char)-117))))) ? ((((!(((/* implicit */_Bool) (signed char)64)))) ? ((~(arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_5 [i_0]))))))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~((~(((/* implicit */int) var_5)))))));
            var_19 *= ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) 0U)))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (unsigned short)64085)) : (((/* implicit */int) (signed char)-108)))), ((+((+(((/* implicit */int) (unsigned short)8))))))));
            var_21 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_4]))))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) /* same iter space */
        {
            arr_19 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7450623960741675331ULL)) ? (-8597844981829751074LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-108)))))), (7787029832348387629ULL));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 18434035282938551094ULL))) ? (((((/* implicit */_Bool) (~(10844277346309782057ULL)))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0 - 1] [16LL]), (((/* implicit */long long int) var_4))))) : (((((/* implicit */unsigned long long int) var_11)) + (arr_5 [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_3))))), (min((((/* implicit */long long int) var_4)), (arr_4 [i_0] [i_5] [i_0]))))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
            var_24 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_6] [i_6 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_6]))))));
            arr_22 [i_0] [8ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_6 + 1] [i_6 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_6 + 1])))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)108))))), (arr_0 [i_7 - 1])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_0] [i_7])) : (-881521778)))) <= (((((/* implicit */_Bool) (unsigned char)92)) ? (var_1) : (((/* implicit */long long int) var_0))))))) : (max((((((/* implicit */int) (short)7194)) << (((((/* implicit */int) var_4)) - (66))))), (((/* implicit */int) ((unsigned short) var_9))))))))));
            var_26 = ((/* implicit */short) max((((min((4294967295U), (((/* implicit */unsigned int) (signed char)-110)))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1451))))), (((/* implicit */unsigned int) (signed char)108))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
        {
            arr_29 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_18 [i_0 + 1])), ((unsigned short)64085)))), (max((var_12), (((/* implicit */unsigned int) arr_18 [i_8 - 2]))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (signed char i_10 = 2; i_10 < 21; i_10 += 2) 
                {
                    {
                        arr_35 [i_0] [i_0] [i_0] [0U] [i_9] [i_10] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_23 [i_8 - 2] [i_9] [i_10 + 1])) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_23 [i_8 + 1] [i_9] [i_10 + 1]), (((/* implicit */unsigned short) (unsigned char)26))))))));
                        arr_36 [i_0 + 1] [i_8] [i_9] [i_0] = ((/* implicit */signed char) min(((+(((var_0) * (0U))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_2)))))))));
                        arr_37 [i_10] [i_9] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_0 - 1] [i_0 - 1] [i_9])), (arr_3 [i_0] [i_0]))))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 9223372036854775807LL))));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)108)) ? (4134076791U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))));
            var_29 = ((/* implicit */long long int) ((((160890505U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) % (((unsigned int) arr_8 [i_11] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))));
        }
        for (unsigned char i_12 = 1; i_12 < 20; i_12 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min(((short)32767), (var_2)))))), ((~(((/* implicit */int) (signed char)-108))))));
            var_31 = min((((/* implicit */unsigned long long int) 4294967295U)), (12199099746390251468ULL));
        }
    }
    for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_13])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 8847996971456342492ULL)) || (((/* implicit */_Bool) 2778258769978732067ULL))))) << (((((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_13]))) : (arr_44 [i_13]))) - (69U)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_43 [i_13] [i_13])))) : (arr_44 [i_13])))));
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 23; i_14 += 2) 
        {
            for (signed char i_15 = 2; i_15 < 23; i_15 += 4) 
            {
                {
                    arr_51 [i_13] [i_14] [i_15] [i_15] = ((/* implicit */signed char) min((max((((/* implicit */long long int) var_9)), (9223372036854775807LL))), (((/* implicit */long long int) ((unsigned short) min((arr_50 [i_15 + 1] [i_13] [i_13]), ((signed char)60)))))));
                    var_33 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13] [i_14]))) : (arr_46 [i_13] [i_13]))), (((/* implicit */long long int) var_12)))))));
                }
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        arr_56 [i_16] |= ((/* implicit */unsigned short) ((unsigned char) ((arr_49 [i_16] [i_16] [i_16]) << (((arr_16 [i_16] [i_16] [6]) - (10243136660514672053ULL))))));
        var_34 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)32758))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)89))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_49 [i_16] [i_16] [i_16])))))) ? ((((-(((/* implicit */int) var_13)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_16] [i_16] [i_16])) || (((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) min(((signed char)69), ((signed char)57))))));
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) min((((unsigned int) 4767110650610563620LL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_16] [i_16]))))))))));
        var_36 |= ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_16])) || (((/* implicit */_Bool) var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (arr_44 [i_16])))))) & (min((18445618173802708992ULL), (((arr_5 [i_16]) | (((/* implicit */unsigned long long int) 4767110650610563620LL)))))));
    }
    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((var_14), (var_13))), (max(((unsigned short)35919), (((/* implicit */unsigned short) (signed char)85)))))))));
    var_38 += ((/* implicit */unsigned long long int) var_2);
    var_39 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_5)) : ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
}
